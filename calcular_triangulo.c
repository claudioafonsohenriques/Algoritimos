#include <stdio.h>    
#include <stdlib.h>

int h, b, a; 
int main()
{	do{
		system("cls");	
		printf("Os valores a inserir devem ser positivos\n\n");
		printf("Qual eh a base?\n:");
		scanf("%d", &b);
	}while(b<=0);
	if(b!=0)repita(); system("pause"); return main();	
}
void repita()
{	do{ system("cls");
	printf("A base eh igual a: %d cm\n",b);
	printf("Qual eh o valor da altura?\n:");
	scanf("%d",&h);
	}while(h<=0);
	if(h!=0)area();
}
void area(){
	
	a=b*h;
	printf("A area do Triangulo eh de: %d cm\n\n\n\n\n",a);
	
}//Claudio Afonso Henriques turma: II11A nº15 escola: IPIL