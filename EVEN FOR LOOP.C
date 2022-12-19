#include<stdio.h>
main(){
	int a;
	int n;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	for(a=1;a<=n;a++){
		if(a%2 ==0){
			printf("%d\n",a);
		}
	}
}
