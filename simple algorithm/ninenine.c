#include<stdio.h>
int main(){
	int num,i,j,result;
	scanf("%d",&num);
	printf("the number is %d\n",num);
	int count=num;
	for(i=1;i<=count;i++){
		for(j=1;j<=i;j++){
			result=i*j;
			printf("%d*%d=%d\t",j,i,result);
		}
		printf("\n");
	}
} 