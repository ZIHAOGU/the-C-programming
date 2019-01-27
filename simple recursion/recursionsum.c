#include<stdio.h> 
int sum(int num);
int main(){
int num, result;
 
    printf("Enter the Nth number: ");
    scanf("%d", &num);
    result= sum(num);
    result=result-1;
    printf("\nthe sum of N is %d",result);
}
int sum(int num){
	if(num>0){
		printf("\nnum is %d",num);
	
		return num+sum(num-1);
	
	}else{
         	return 1;
        	
	}
}