#include <stdio.h>

#define MAX 100

int main(){
	int a[MAX],n,i,key;
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enter elemets of array\n");
	
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}	
	
	printf("Enter value to be searched\n");
	scanf("%d",&key);

	linear_search(a,key,n);
}

int linear_search(int [],int,int);
int linear_search(int b[], int ele, int size){
	int i=0;
	for (i=0;i<size;i++){
		if (ele==b[i]){
			return i;}
	}
	return -1;
	
}
