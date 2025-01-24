#include <stdio.h>

int max_runs(int [],int);
int max_runs(int b[],int n){
	int max = b[0],i;
	for (i=1;i<n;i++){
		if (b[i]>max)
			max=b[i];
	}
	return max;
}

float avg_runs(int [],int);
float avg_runs(int b[],int n){
	float avg,sum=0;
	int i;
	for (i=0;i<n;i++){
		sum=sum+b[i];
	}
	
	avg=sum/n;
	return avg;
}

int sum_runs(int [],int);
int sum_runs(int b[],int n){
	int i,sum=0;
	for (i=0;i<n;i++){
		sum=sum+b[i];
	}
	return sum;
}
int main(){
	int a[11],i,max;
	printf("Enter runs scored by a player\n");
	for (i=0;i<11;i++)
		scanf("%d",&a[i]);
	for (i=0;i<11;i++)
		printf("runs scored by player %d are %d \n",i+1,a[i]);
	
	
	printf("Maximum runs scored are %d \n",max_runs(a,11));
	printf("Total runs scored are %d \n",sum_runs(a,11));
	printf("Average runs scored are %.2f \n",avg_runs(a,11));
	return 0;
}
