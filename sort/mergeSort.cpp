#include<stdio.h>
int num=8;
int sorted[8];

void merge(int a[],int m,int middle,int n){
	int i=m;
	int j=middle+1;
	int k=m;
	//i와 j를 비교하여 sorted 배열 k인덱스에 차례대로 정렬
	 
	while(i<=middle&&j<=n){  
		if(a[i]<=a[j]){
			sorted[k]=a[i];
			i++;
		}else{
			sorted[k]=a[j];
			j++;
		}
		k++;
	}
	// 남은 데이터삽입
	if(middle<i){
		for(int t=j;t<=n;t++){
			sorted[k]=a[t];
			k++;
		}
	} else{
		for(int t=i;t<=n;t++){
			sorted[k]=a[t];
			k++;
		}
	}
	for(int t=m;t<=n;t++){
		a[t]=sorted[t];
	}
}
void mergeSort(int a[],int m, int n) {
	if(m<n){
		int middle=(m+n)/2;
		mergeSort(a,m,middle);
		mergeSort(a,middle+1,n);
		merge(a,m,middle,n);
	}
}

int main(){
	int array[num]={7,6,5,8,3,5,9,1};
	mergeSort(array,0,num);
	
	for(int i=0;i<num;i++){
		printf("%d ",array[i]);
	}
}
