ALL_TEST_DIRS :=   mem_rw


all: build

build:
	-$(MAKE) -k $(ALL_TEST_DIRS:%=%.build)

clean:  $(ALL_TEST_DIRS:%=%.clean)


$(ALL_TEST_DIRS:%=%.build):
	-$(MAKE) -k -C $(@:%.build=%)

$(ALL_TEST_DIRS:%=%.clean):
	-$(MAKE) -k -C $(@:%.clean=%) clean

.PHONY: all clean
.PHONY: $(ALL_TEST_DIRS:%=%.build) $(ALL_TEST_DIRS:%=%.clean)
