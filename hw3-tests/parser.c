#include <stdlib.h>
<<<<<<< HEAD
=======
#include "lexer.h"
>>>>>>> dd9a23ad181a2abb709b1166b03464f0a03df79d
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