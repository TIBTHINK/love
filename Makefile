# its compile time
ifeq ($(PREFIX),)
    PREFIX := /usr/local
endif

all:

compile:
	g++ love.cpp -o love



install: unixlib.a
