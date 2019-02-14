#include<stdio.h>
int main() {
int a=0,n=0;
int i,j;
int sum=0;


scanf("%d %d",&a,&n);
printf("the row number is %d\nthe cloumn number is %d\n",a,n);
int array[a][n];
int array1[a];
for(i=0;i<a;i++){
	for(j=0;j<n;j++){
		scanf("%d",&array[i][j]);
	}
	
}
for(i=0;i<a;i++){
	for(j=0;j<n;j++){
		printf("%d",array[i][j]);
	}
	printf("\n");
}

for(i=0;i<a;i++){
	for(j=0;j<n;j++){
		sum+=array[i][j];
		
		}
	array1[i]=sum;
	sum=0;
	
}

for(i=0;i<a;i++){
	printf("%d\n",array1[i]);
}

}