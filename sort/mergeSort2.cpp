#include<stdio.h>
int number=8;
int size;
int sorted[8];  //  정렬 배열은 반드시 전역 변수로 선언 
int count=0;

int merge(int a[],int m, int middle, int n){
	int i=m;
	int j=middle+1;
	int k=m;
	
	for(;i<=middle&&j<=n;){
		if(a[i]<=a[j]){
			sorted[k++]=a[i++];
		}else{
			sorted[k++]=a[j++];
		}
			
	}
	
	if(i>middle){
		for(int t=j;t<=n;t++){
			sorted[k++]=a[t];
		}
	}else{
		for(int t=i;t<=middle;t++){
			sorted[k++]=a[t];
		}
	}
	
	for(int t=m;t<=n;t++){
		a[t]=sorted[t];
	}
}

void mergeSort(int a[],int m, int n){
	if(m<n){
		int middle=(m+n)/2;
		
		mergeSort(a,m,middle);
		mergeSort(a,middle+1,n);
		merge(a,m,middle,n);
	}
}


int main(){
	int array[number]={7,6,5,8,3,5,9,1};
	mergeSort(array,0,number-1);
	
	for(int i=0;i<number;i++){
		printf("%d ",array[i]);
	}
}
