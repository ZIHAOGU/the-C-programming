#include <stdio.h>
int main()
{
    long  num, reverse = 0, temp, remainder;
 
    printf("Enter the number\n");
    scanf("%ld", &num);
    temp = num;
    while(num!=0){
    	remainder=num%10;
    	reverse=reverse*10+remainder;
    	num=num/10;
    	
    }
    printf("its reverse number is %d",reverse);
	}