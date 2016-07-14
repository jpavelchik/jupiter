CFLAGS = -g -O0

all: jupiter

jupiter: main.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -o $@ main.c

check: all
	./jupiter |grep "Hello from .*jupiter!"
	@echo "*** ALL TESTS PASSED ***"

clean:
	rm -f jupiter
	rm -fr jupiter.dSYM

install:
	install -d $(DESTDIR)$(bindir)
	install -m 0755 jupiter $(DESTDIR)$(bindir)

uninstall:
	rm -f $(DESTDIR)$(bindir)/jupiter

.PHONY: all clean check install
