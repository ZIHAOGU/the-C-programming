#include<stdio.h>
int main(){
	int num,i,j,k;
	scanf("%d",&num);
	for(i=num;i<6;i++){
		for(j=num;j<6;j++){
			for(k=num;k<6;k++){
				if(i!=j&&j!=k&&k!=i){
					printf("%d\t",i*100+j*10+k);
				}
			}
		}
		printf("\n");
	}
	}