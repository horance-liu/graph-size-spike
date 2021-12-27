sub_dirs = functor generic lambda 

all:
	@list='${sub_dirs}'; for sub_dir in $$list; do \
		$(MAKE) -C $$sub_dir; \
	done

clean:
	@list='${sub_dirs}'; for sub_dir in $$list; do \
		$(MAKE) -C $$sub_dir clean; \
	done

.PHONY: all clean
