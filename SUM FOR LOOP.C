#include<stdio.h>
main(){
	int a=1;
	int n;
	int sum=0;
	printf("Enter number :");
	scanf("%d",&n);
	
	for(a=1;a<=n;a++){
		sum+=a;
		
	}
	printf("%d",sum);
	}
