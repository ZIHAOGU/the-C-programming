#include<stdio.h>
#include<string.h>
int main() {
int n=0;
int i=0,j=0;
int len=0;
int counter=0;	
int a[10]={0,5,8,12,17,28,30,50};
scanf("%d",&n);
printf("the input number is %d\n",n);

while(n>a[j]){
		
		j++;
}
counter=j;

len=sizeof(a)/4;

printf("length is %d\n",len);
printf("count is %d\n",counter);
printf("j is %d\n",j);
for(i=len;i>=counter;i--){
	a[i+1]=a[i];
	
}
a[counter]=n;
for(i=0;i<10;i++){
	printf(" %d",a[i]);
}
}
