#include <stdlib.h>

int main();
void parser_open(char* file);

int main(int argc, char *argv[])
{
	FILE *file;
    if(argc != 2)
    {
        printf("File is Needed!\n");
        exit(1);
    }
    file = fopen(argv[1], "r");
	return 0;
}

parser_open(char* file)
{
	
}