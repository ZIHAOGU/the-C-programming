#include<stdio.h>
int main(){
int input,quotient,total=0,remainder;
    printf("please enter the number\n");
    scanf("%d",&input);
    printf("\nthe input number is:%d",input);
    quotient=input;
    while(quotient>0){

                      remainder=quotient%10;
                      quotient=quotient/10;
                      total = remainder+total;
                      }
    printf("\nthe total sum of digits number is %d",total);
	return 0; 
} 