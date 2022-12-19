#include<stdio.h>
main(){
	int a=1;
	int n;
	int sum=0;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	do{
		sum+=a;
		a++;
	}while(a<=n);
	printf("%d",sum);
}
