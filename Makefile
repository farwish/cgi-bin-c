#/**
# * cgi-bin-c
# *
# * https://github.com/farwish/cgi-bin-c
# *
# * @farwish <farwish@foxmail.com>
# */

CC 	= gcc
EXT = .cgi

ALL: index.c common_macro.h
	$(CC) -o index$(EXT) $^

clean:
	rm -f index$(EXT)
