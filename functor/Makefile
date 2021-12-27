app = functor_test

all: build
	size $(app) *.o

build:
	c++ -Os -fno-exceptions -fno-rtti -s -c *.cc
	c++ -o $(app) *.o

clean:
	rm -rf *.o $(app)

.PHONY: all build clean

