#include <stdlib.h>
#include "lexer.h"
#include "ast.h"

int main();
void parser_open(const char* file);

int main(int argc, char *argv[])
{
	const char* fname = argv[1];
	parser_open(fname);
	return 0;
}

parser_open(const char* file)
{
	lexer_open(file);
}