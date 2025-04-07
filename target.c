#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 定义复杂的数据结构
typedef struct {
    char* data;
    int length;
    struct Node* next;
} Node;

typedef struct {
    Node* head;
    Node* tail;
    int count;
} LinkedList;

// 辅助函数：创建新节点
Node* create_node(const char* value) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = strdup(value);
    node->length = strlen(value);
    node->next = NULL;
    return node;
}

// 辅助函数：添加节点到链表
void add_to_list(LinkedList* list, const char* value) {
    Node* node = create_node(value);
    if (list->head == NULL) {
        list->head = node;
        list->tail = node;
    } else {
        list->tail->next = node;
        list->tail = node;
    }
    list->count++;
}

// 辅助函数：从链表中获取数据
char* get_from_list(LinkedList* list, int index) {
    if (index < 0 || index >= list->count) return NULL;
    
    Node* current = list->head;
    for (int i = 0; i < index; i++) {
        current = current->next;
    }
    return current->data;
}

// 辅助函数：处理数据（多层间接调用）
void process_data_level1(char* input);
void process_data_level2(char* input);
void process_data_level3(char* input);

void process_data_level1(char* input) {
    process_data_level2(input);
}

void process_data_level2(char* input) {
    process_data_level3(input);
}

void process_data_level3(char* input) {
    // 这里是有漏洞的sink点
    char buffer[50];
    strcpy(buffer, input); // 缓冲区溢出漏洞
    printf("Processed data: %s\n", buffer);
}


// 主函数 - 污点从source到sink的路径非常长
int main() {
    LinkedList list = {0};
    
    // 从用户输入获取数据 (source)
    char *user_input = "111111111\n";
    // char user_input[20];
    // scanf("%s", user_input);

    printf("%p\n", user_input);

    int a;
    scanf("%d", &a);
    // fgets(user_input, sizeof(user_input), stdin);
    // user_input[strcspn(user_input, "\n")] = '\0'; // 移除换行符
    
    // 数据经过多次处理和传递
    add_to_list(&list, user_input);
    
    for (int i = 0; i < 5; i++) {
        char* temp = get_from_list(&list, 0);
        add_to_list(&list, temp);
    }
    
    // 通过多层函数调用传递数据
    char* final_data = get_from_list(&list, list.count - 1);
    process_data_level1(final_data); // 最终到达漏洞点
    
    // 清理内存
    Node* current = list.head;
    while (current != NULL) {
        Node* next = current->next;
        free(current->data);
        free(current);
        current = next;
    }
    
    return 0;
}