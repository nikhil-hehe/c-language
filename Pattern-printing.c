#include <stdio.h>

int main()
{	int i,j;
	for (i=1; i<6; i++) {
		for (j=1; j<=i; j++) {

			if ((i+j)%2==0) {
				printf("A ");
			}
			else {
				printf("B ");
			}
		}

		printf("\n");
	}
	return 0;
}
