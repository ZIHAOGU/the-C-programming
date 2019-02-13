#include<stdio.h>
int main(){
int grades[5][3];
int i,j;
int num;
int sum;
int average;
printf("input score\n");
for(i=0;i<5;i++){
	for(j=0;j<3;j++){
		scanf("%d",&grades[i][j]);
	}
}

for(i=0;i<5;i++){
	for(j=0;j<3;j++){
		printf("%d",grades[i][j]);
		sum+=grades[i][j];
		
	}
}

printf("sum is %d",sum);
}
 
