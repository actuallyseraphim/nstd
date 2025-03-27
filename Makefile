CC = clang
CFLAGS = -O2
LDLIBS =

.PHONY: build
build: main

.PHONY: run
run: build
	./main

ppc:
	mkdir -p $@

obj:
	mkdir -p $@


ppc/%: % ppc
	clang -E $^ -o $@;
	./ctpp $@ -o $@

obj/%.o: ppc/%.c $(wildcard ppc/%.h) obj
	$(CC) $(CFLAGS) -c $< -o $@

main: obj/main.o
	$(CC) $(LDLIBS) $^ -o $@
