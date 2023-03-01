#include <stdlib.h>

int main();
void parser_open(char* file);

int main(int argc, char *argv[])
{
	parser_open(argv[1])
	return 0;
}

parser_open(char* file)
{
	lexer_open(file);
}