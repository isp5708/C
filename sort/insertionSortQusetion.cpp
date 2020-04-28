#include<stdio.h>

int main(){
	int cnt,i,j,tmp;
	int tmpArray[10];
	
	scanf("%d",&cnt);
	
	for(i=0;i<cnt;i++){
		scanf("%d",&tmpArray[i]);
	}
	
	for(i=0;i<cnt-1;i++){
		j=i;
		
		for(int t=0;t<=i;t++){
			printf("%d ",tmpArray[t]);
		}
		
		while(j>=0&&tmpArray[j]>tmpArray[j+1]){
			tmp=tmpArray[j];
			tmpArray[j]=tmpArray[j+1];
			tmpArray[j+1]=tmp;
			j--;
		}
		
		printf("\n");
	}
}
