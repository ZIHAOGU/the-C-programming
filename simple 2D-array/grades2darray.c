#include<stdio.h>
int main(){
int grades[5][3];
int i,j;
int num=0;
int sum;
int average;
int v[3];
printf("input score\n");
for(i=0;i<3;i++){//row
	for(j=0;j<5;j++){//column
		scanf("%d",&grades[i][j]);
	}
}

for(i=0;i<3;i++){
	sum=0;
	for(j=0;j<5;j++){
		
		printf("%d ",grades[i][j]);
		num++;
		sum+=grades[i][j];
			v[i]=sum;
			
	}

	printf("\n");
}

sum=v[0]+v[1]+v[2];
printf("math is %d\n c langugae is %d\n english is %d\n",v[0]/5,v[1]/5,v[2]/5);
average=sum/num;
printf("sum is %d\n",sum);
printf("average is %d\n",average);
}
 