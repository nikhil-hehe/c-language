#include <stdio.h>

#define MAX 100

int main(){
	int a[MAX],n,i;
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enter elemets of array\n");
	
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}	
	
	bubble_sort(a,n);
}

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
			printf("%d\n",b[k]);
		}
		
		else{
			printf("%d, ",b[k]);
		}
}
}
