#include<stdio.h>
int main(){
	int num1,num2,count=0,i,j,sum=0;
	scanf("%d %d",&num1,&num2);
	printf("num1 is %d and num2 is %d\n",num1,num2);
	if(num1<0&&num2>500){
		printf("wrong input number");
	}else{
		if(num1==1)
		num1=2;
		for(i=num1;i<=num2;i++){
			int isprime=1;
			int k;
			for(k=2;k<i-1;k++){
				if(i%k==0){
					isprime=0;
					break;
				}
			}
			if(isprime){
				count++;
				sum+=i;
			}
		}
	}
	printf("the sum is %d \nthe count is %d",sum,count);
	
	}
	
