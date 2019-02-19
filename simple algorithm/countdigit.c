#include<stdio.h>
int count_Digit(const int N,const int D);
int main(){
	int N,D;
	scanf("%d %d",&N,&D);
	printf("%d\n",count_Digit(N,D));
	return 0;
}
int count_Digit(const int N,const int D){
	int digit,count=0;
	int temp;
	temp=N;
	if(temp<0){
		temp=temp*(-1);
	}
		while(temp!=0){
		digit = temp%10;
		if(digit==D){
			count++;
		}
		temp=temp/10;
	}return count;
}