#include <stdio.h>
#define MAX 100

int bubble_sort(int [],int);
int bubble_sort(int b[], int size){
	int j=0,k=0,temp;
	for (j=0;j<size-1;j++){
		for (k=0;k<size-1-j;k++){
			if (b[k]>b[k+1]){
				temp=b[k];
				b[k]=b[k+1];
				b[k+1]=temp;
			}
		}
	}
	
	for (k=0;k<size;k++){
		
		if (k==size-1){
			printf("%d - sorted array\n",b[k]);
		}
		
		else{
			printf("%d ",b[k]);
		}
}
}

int binary_search(int [],int,int);
int binary_search(int a[],int size,int key){
	int mid,low=0,high=size-1;
	
	bubble_sort(a,size);
	
	while (low<=high){

		mid=low+(high-low)/2;
		
		if (a[mid]==key){
			return mid;
		}
		else if (a[mid]<key){
			low=mid+1;
		}
		else {
			high=mid-1;
		}
	}
return -1;
}


int main(){
	int a[MAX],n,i,key,result;
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enter elemets of array\n");
	
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}	
	
	printf("Enter value to be searched\n");
	scanf("%d",&key);
	
	result = binary_search(a,n,key); //returns index or -1 if not present	
	
	if (result==-1){
		printf("Search unsuccessful.");
	}
	else{
		printf("Search unsuccessful. index = %d",result);
	}
}
