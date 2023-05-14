#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	FILE *arquivo;
	
	arquivo = fopen("Arquivotext.text","w");
	fprintf(arquivo,"\n\tHello World");
	fclose(arquivo);
	
   
    return 0;
}