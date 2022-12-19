#include<stdio.h>
main(){
	int a=1;
	int n;
	int mul=1;
	printf("Enter number :");
	scanf("%d",&n);
	
	for(a=1;a<=n;a++){
     mul*=a;
		
	}
	printf("%d",mul);
	}
