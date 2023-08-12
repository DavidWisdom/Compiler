CC = g++
CFLAGS = -std=c++17

sysy: y.tab.o lex.yy.o syntax.o
	$(CC) $(CFLAGS) -o sysy y.tab.o lex.yy.o syntax.o -lfl

y.tab.o: yacc.y
	bison -vdty yacc.y
	$(CC) $(CFLAGS) -g -c y.tab.c

lex.yy.o: lex.l
	flex lex.l
	$(CC) $(CFLAGS) -g -c lex.yy.c

syntax.o: syntax.h syntax.cpp
	$(CC) $(CFLAGS) -g -c syntax.h syntax.cpp

clean:
	rm -f *.o sysy y.tab.* lex.yy.*
