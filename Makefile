# its compile time
ifeq ($(PREFIX),)
    PREFIX := /usr/local
endif

all:

compile:
	g++ love.cpp -o love



install: unixlib.a
    install -d $(DESTDIR)$(PREFIX)/lib/
    install -m 644 unixlib.a $(DESTDIR)$(PREFIX)/lib/
    install -d $(DESTDIR)$(PREFIX)/include/
    install -m 644 unixlib.h $(DESTDIR)$(PREFIX)/include/