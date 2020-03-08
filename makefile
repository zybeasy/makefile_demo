main2.o main.o fuck: main.cpp makefile.bak
	touch fuck
	g++ -I include -o main.o main.cpp cpp/args.cpp
	g++ -I include -o $@ main.cpp cpp/args.cpp
	ls -l $@
	ls -l $<
	ls -l $^
	echo $(SUFFIXE)

.PHONY: clean

clean:
	rm *.o fuck
