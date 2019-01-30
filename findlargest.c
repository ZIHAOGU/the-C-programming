#include<stdio.h>
int main(){
int num1, num2, num3;
 
    printf("Enter the values of num1, num2 and num3\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("num1 = %d\tnum2 = %d\tnum3 = %d\n", num1, num2, num3);
    if(num1>num2){
    	if(num2>=num3){
	    	printf("num1=%d is largest",num1);
	    }else{ //2<3
    		if(num1>num3){
		    	printf("num1=%d is largest",num1);
		    }else if(num1<num3){
    			printf("num3=%d is largest",num3);
    		}else{
		    	printf("num3=%d and num1=%d is largest",num3,num1);
		    }
    	}
    }else{//1<=2
    if(num1<num2){
  		if(num2<num3){
	    	printf("num3=%d is largest",num3);
	    }else{//2>=3
    		printf("num2=%d is largest",num2);
    	}
    }else{//1=2 
    	if(num2>num3){
	    	printf("num1=%d and num2=%d is largest",num1,num2);
	    }else if(num2<num3){//2<3
			printf("num3=%d is largest",num3);
		} 
    
    }
} 
if(num1==num2&&num2==num3){
	printf("3 input are equal");
} 
} 