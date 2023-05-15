#include <stdio.h>
#include <stdlib.h>
int main(){

int num,i = 0;
printf("Digite um número: ");
scanf("%d",&num);
for( ;i<=12; i++){

   printf("%d X %d = %d",i,num,num*i);
}

	return 0;
}
