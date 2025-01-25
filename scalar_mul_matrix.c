#include <stdio.h>
#define MAX 100

int main(){
	int rows,columns,i,x,j,a[MAX][MAX],b[MAX][MAX];
	printf("Enter the scalar for multiplication\n");
	scanf("%d",&x);
	printf("enter number of rows and columns\n");
	scanf("%d%d",&rows,&columns);
		printf("\nRow Major order\n");
	for (i=0;i<rows;i++){
		for (j=0;j<columns;j++){
			scanf("%d",&a[i][j]);
			b[i][j]=x*a[i][j];
		}
	}
	
	printf("\na\n");
	for (i=0;i<rows;i++){
		for (j=0;j<columns;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	

	
	printf("\nx*a\n");
	for (i=0;i<rows;i++){
		for (j=0;j<columns;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}
