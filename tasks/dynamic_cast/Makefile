#compiler
CC=g++
#CFLAGS
CFLAGS=-Wall -Wextra -Werror -Wpedantic --std=c++17
#FILES
FILES=dynamic_cast.cpp


main: $(FILES)
	$(CC) $(CFLAGS) -O2 $(FILES) -o dynamic_cast

debug:
	$(CC) $(CFLAGS) -g $(FILES) -o dynamic_cast

clean:
	rm dynamic_cast
