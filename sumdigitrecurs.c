
#include <stdio.h>
 
int sum (int number);
 
int main()
{
    int num, result;
 
    printf("Enter the number: ");
    scanf("%d", &num);
    result = sum(num);
    printf("Sum of digits in %d is %d\n", num, result);
    return 0;
}
int sum(int number){
if(number!=0){
	return(number%10+sum(number/10));
}else{
    return 0;
}
}