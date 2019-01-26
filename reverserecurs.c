#include<stdio.h>
#include<math.h>
int rev(int a, int b);

int main(){
 int num, result;
    int length = 0, temp;
 
    printf("Enter an integer number to reverse: ");
    scanf("%d", &num);
    temp = num;
    while(temp!=0){
     length++;
	temp=temp/10;
   
    }
    result= rev(num,length);
    printf("the reverse number is %d",result);
    return 0;
}

int rev(int a, int b){
if (a==1){
			return a;
	}else{
			return (((a%10)*pow(10,b-1))+rev(a/10,--b));
	}
}