#include <stdio.h>
void toh(int,char,char,char);
void toh(int n,char source,char dest,char aux){
	if (n==1){
		printf("Move Disk from %c to %c\n",source,dest);
	}
	else {
		toh(n-1,source,aux,dest);
		toh(1,source,dest,aux);
		toh(n-1,aux,dest,source);
	}
}



int main(){
	int n;
	printf("Enter the number of disks\n");
	scanf("%d",&n);
	toh(n,'A','C','B');
	
}
