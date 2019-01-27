#include <stdio.h>
int findprime(int num,int div);

int main(){
int num, result,prime;
    printf("Enter a number: ");
    scanf("%d", &num);
    prime=num-1;
    result = findprime(num,prime);
    if(result==0){
    printf("not prime");
    }else{
    printf("find it");
    }
    
}

int findprime(int num,int div){
	if(num==1){
	return 0;
	}
	if(div==1){
	 	return div;	
	}else{
	 	if(num%div!=0){
	 		return findprime(num,div-1);
	 	}else{
	 		return 0;
	 	}
	}
}