FILES = main.cpp vars.cpp funcs.cpp args.cpp

prefix = /usr/local
bindir = $(prefix)/bin

all: elemental
elemental:
	@g++ $(FILES) -o elemental
install: elemental
	@install -d -m 755 '$(bindir)'
	@install elemental '$(bindir)'

uninstall:
	@rm -f '$(bindir)/elemental' 

clean:
	-@rm ./elemental

.PHONY: all elemental install uninstall clean
