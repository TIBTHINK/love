# output: love.o
# 	$(CXX) love.o -o love -o output

# love.o: love.cpp
# 	$(CXX) -c love.cpp

# clean:
# 	rm *.o output



#
#	GNU make
# 
PREFIX = /usr/local
MANDIR = $(shell test -d /usr/share/man/man7 && echo $(PREFIX)/share/man || echo $(PREFIX)/man)
LIBS   = -lc 
CXXFLAGS = -std=c++11

all: love love.7.gz

love: love.cpp
	$(CXX) $(CXXFLAGS) love.cpp -o love $(LDFLAGS) $(LIBS)

love.7.gz:
	gzip -f doc/love.7

install: love love.7.gz
	install -m 0755 -s love $(PREFIX)/bin
	install -m 0644 doc/love.7.gz $(MANDIR)/

uninstall:
	-@rm $(PREFIX)/bin/love
	-@rm $(MANDIR)/usr/share/man/man7/love.7.gz

clean:
	-@rm *.o love doc/love.7*
