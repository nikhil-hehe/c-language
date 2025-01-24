#include <stdio.h>
#define MAX 50

int main(){
	int a[MAX],n,i;
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enter elemets of array\n");
	
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}	
	
	even_odd(a,n);
}

int even_odd(int [],int);
int even_odd(int a[],int size){
	
	int even[MAX], odd[MAX], even_i=0, odd_i=0,index=0,j=0,k=0;
	
	for (index=0;index<size;index++){
		
		if (a[index]%2==0){
			even[even_i]=a[index];
			even_i++;
		}
		
		else{
			odd[odd_i]=a[index];
			odd_i++;
		}
	
	}
	
	for (j=0;j<even_i;j++){
		
		if (j==even_i-1){
		printf("%d - even\n",even[j]);
		}
		
		else{
			printf("%d, ",even[j]);
		}
	
	}
	for (k=0;k<odd_i;k++){
		
		if (k==odd_i-1){
			printf("%d - odd\n",odd[k]);
		}
		
		else{
			printf("%d, ",odd[k]);
		}
	
	}
}
