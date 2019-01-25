#include<stdio.h>
int main(){
	int a,b,total,d;
	char c;
	scanf("%d %c%d",&a,&c,&b);
	printf("%d %c %d",a,c,b);
	switch(c){
		case'+':total =a+b;printf(" = %d",total);break;
		case'-':total =a-b;printf(" = %d",total);break;
		case'*':total =a*b;printf(" = %d",total);break;
		case'/':if(b==0){
						printf("\nerror divisor is 0");
					}else{
						total =a/b;printf(" = %d",total);
					}break;
		default:printf("\nerror,operator is not arithmatic");break;
		
	}
    
}
