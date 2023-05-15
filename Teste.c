#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	
	printf("Seje bem vindo(a) ao meu primeiro programa no git\aqui tem uma calculadora de multiplicar simples...");
 int num;
 int i = 0;

printf("Digite um número para ver a sua tabuada: ");
scanf("%d",&num);
for( ;i<=12; i++){

   printf("%d X %d = %d",i,num,num*i);
}



	return 0;

}
