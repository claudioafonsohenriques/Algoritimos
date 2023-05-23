#include <stdio.h>
#include <stdlib.h>





int main()
{

   
    
    
    
    int num,i;
    
    printf("Digite um numero: \n");
    scanf("%d",&num);
    
    for(i = 12; i >=0; i--){
		
		printf("\n%d x %d = %d ",num,i,num*i);
		printf("%d ",num);
	}
    
    
    
    return 0;
}