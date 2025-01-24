#include <stdio.h>
#define MAX 100

int main(){
	int a[MAX],n,i,ele;
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enter elements of array\n");
	
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}	
	printf("Enter the element to search\n");
	scanf("%d",ele);
	bubble_sort(a,n);
	binary_search(a,n,ele);
}

int bubble_sort(int [],int);
int bubble_sort(int b[], int size){
	int j=0,k=0,temp,l;
	for (j=0;j<=size-2;j++){
		for (k=0;k<=size-2-j;k++){
			if (b[k]>b[k+1]){
				temp=b[k];
				b[k]=b[k+1];
				b[k+1]=temp;
			}
		}
	}
	
	for (l=0;l<size;l){
		printf("%d ",b[0]);
	}
}

int binary_search(int [],int,int);
int binary_search(int a[], int size,int key){
	int mid,high,low;
	bubble_sort(a,size);
	high=a[size-1];
	low=a[0];
	while (low<high){
		mid = low+(high-low)/2;
		if (a[mid]==key){
			return mid;
		}
		else if (a[mid]==key){
			high = mid-1;
		}
		else{
			low = mid+1;
		}
	}
}
