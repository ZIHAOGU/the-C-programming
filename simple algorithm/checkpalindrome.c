#include<stdio.h>
int main(){
	  int num, temp, remainder, reverse = 0;
 
    printf("Enter an integer \n");
    scanf("%d", &num);
    printf("the number is %d\n",num);
    temp=num;
   while(num>0){
   	
	remainder=num%10;
   	reverse=reverse*10+remainder;
    num=num/10;
   	
   }
   printf("the reverse is %d\n",reverse);
   if(temp==reverse){
   	printf("its palindrome");
   }else{
   	printf("its not palindrome");
   }
   
}