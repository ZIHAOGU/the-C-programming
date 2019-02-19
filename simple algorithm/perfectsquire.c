#include<stdio.h> 
#include<math.h>

int IsTheNumber(const int N);
int main(){
	int n1,n2,i,cnt;
	scanf("%d %d",&n1,&n2);
	cnt =0;
	for(i=n1;i<=n2;i++){
		if(IsTheNumber(i)){
				cnt++;
		}
	
	}
	printf("   cnt = %d\n",cnt);
	return 0;
}

int IsTheNumber(const int N){
	int temp= N;
	int temp2=N;
	int result=0;
	int digit=0;
	int a[100];
	int count=0;
	int i=0,j=0;
	int repeat=100;
	int x=0;
	for(x=1;temp>0;x+=2){
		temp-=x;
	}
         
	if(temp==0){
		result= 1;
	}
	
//printf(" result is %d\n",result);	
while(temp2!=0){
		digit=temp2%10;
		a[i]=digit;
		temp2=temp2/10;
		i++;
}
count=i+1;	
//printf("count is %d\n",count);
for(i=0;i<count;i++){
	for(j=0;j<count;j++){
		if(a[i]==a[j]){
			repeat++;
			
		}
	}
	if(repeat==2){
	break;
	}
	repeat=0;

}
//printf(" repeat2 is %d\n",repeat);

if(result==1&&repeat==2){
	return 1;
}else{
	return 0;
}
	
}
