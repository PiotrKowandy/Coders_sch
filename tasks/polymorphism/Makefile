#compiler
CC=g++
#CFLAGS
CFLAGS=-Wall -Wextra -Werror -Wpedantic --std=c++17
#FILES
FILES=polymorphism.cpp


main: $(FILES)
	$(CC) $(CFLAGS) -O2 $(FILES) -o polymorphism

debug:
	$(CC) $(CFLAGS) -g $(FILES) -o polymorphism

clean:
	rm polymorphism
