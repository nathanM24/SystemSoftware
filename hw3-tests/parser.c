#include <stdlib.h>
#include "ast.h"

int main();
void parser_open(const char* file);
AST parseProgram(AST *cds, AST *vds, AST *stmt);
AST *cds, vds, stmt;
int main(int argc, char *argv[])
{
	const char* fname = argv[1];
	parser_open(fname);
	return 0;
}

void parser_open(const char* file)
{
	lexer_open(file);

}