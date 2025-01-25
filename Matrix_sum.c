#include <stdio.h>
#define MAX 100

int main(){
	int rows,columns,i,j,a[MAX][MAX],b[MAX][MAX],c[MAX][MAX],columns_b,rows_b;
	printf("enter number of rows and columns of a\n");
	scanf("%d%d",&rows,&columns);
		printf("\nRow Major order a\n");
	for (i=0;i<rows;i++){
		for (j=0;j<columns;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter number of rows and columns of b\n");
	scanf("%d%d",&rows_b,&columns_b);
	printf("\nRow Major order b\n");
		for (i=0;i<rows_b;i++){
		for (j=0;j<columns_b;j++){
			scanf("%d",&b[i][j]);
		}
	}
		if (columns==columns_b&&rows==rows_b){
		
			for (i=0;i<rows;i++){
			for (j=0;j<columns;j++){
				c[i][j]=b[i][j]+a[i][j];
			}
		}
		printf("\na+b\n");
		for (i=0;i<rows;i++){
			for (j=0;j<columns;j++){
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}
	else{
		printf("cannot do sum if rows and columns are not equal");
	}
}
