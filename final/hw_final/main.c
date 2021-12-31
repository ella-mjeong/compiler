#include <stdio.h>
#include <stdlib.h>
#include "type.h"

extern int syntax_err;
extern int semantic_err;
extern A_NODE *root;
FILE *fout;

extern void initialize();
extern void print_ast();
extern void print_sem_ast();
extern void semantic_analysis();
extern void code_generation();

void main(int argc, char *argv[])
{
    if ((fout = fopen("a.asm", "w")) == NULL)
    {
        printf("can not open output file: a.asm\n");
        exit(1);
    }
    initialize();
    yyparse();
    if (syntax_err)
	exit(1);
    else
        print_ast(root);
    semantic_analysis(root);
    if(semantic_err)
	exit(1);
    else
	print_sem_ast(root);

    code_generation(root);
    
    exit(0);
}

