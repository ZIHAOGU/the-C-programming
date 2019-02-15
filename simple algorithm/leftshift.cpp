#include<stdio.h>
#include<string.h>
int main() {
int c;
int i=0;
int j=0;
int len=0;
char a[100];
char b[100];

scanf("%s",&a);
 

fflush(stdin);
//printf("%s\n",a); 
len=strlen(a);
printf("the length of string is %d\n",len);
printf("enter the number:\n");
scanf("%d",&c);
printf("the input string is %s\n",a); 
printf("the input number is %d\n",c); 

	for(i=c;i<len;i++){
		printf("%c",a[i]);
	}
		for(i=0;i<c;i++){
		printf("%c",a[i]);
	}
} 
