#include<stdio.h>

int number= 10;
int data[]={1,10,5,8,7,6,4,3,2,9};

void show(){
	for(int i=0;i<number;i++){
		printf("%d ",data[i]);
	}
	printf("\n");
}

void quickSort(int* data, int start, int end){
	if(start>=end){ //���Ұ� 1���� ��� 
		return;
	}
	
	int key = start; 
	int i =start+1;
	int j=end;
	int tmp;
	
	while(i<=j){
		while(data[i]<=data[key]){
			i++;
		}
		while(data[j]>=data[key]&&j>start){
			j--;
		}
		if(i>j){ //i�� j�� ������ ���� 
			tmp=data[j];
			data[j]=data[key];
			data[key]=tmp;
		}else{//�������� �ʰ� �״���Ͻ� 
			tmp=data[i];
			data[i]=data[j];
			data[j]=tmp;
		}
	}
	quickSort(data,start,j-1);
	quickSort(data,j+1,end);
}

int main(){
	
	quickSort(data,0,number-1);
	
	show();
	
}
