#include<stdio.h>
#include<string.h>
int main() {
int c;
int i=0;
int j=0;
int len=0;

char a[100];
char d;

scanf("%s",&a); 
len=strlen(a);
printf("the length of string is %d\n",len);
printf("enter the number:\n");
scanf("%d",&c);
printf("the input string is %s\n",a); 
printf("the input number is %d\n",c); 
for(i=0;i<c;i++){
	d=a[0];
	for(j=0;j<len-1;j++){
		a[j]=a[j+1];
	}
	a[j]=d;
}
for(j=0;j<len;j++){
	printf("%c",a[j]);
} 
} 