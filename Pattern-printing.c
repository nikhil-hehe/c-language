//AB 
/*#include <stdio.h>

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
}*/

/*#include <stdio.h>

int main()
{   int i,j;
    for (i=1;i<6;i++){
        for (j=1;j<=i;j++){
            printf("* ");
        }
    
        printf("\n");
    }
    return 0;
}*/


//Pyramid pattern
#include <stdio.h>

int main()
{	int i,j;
	for (i=1; i<=5; i++) {
		for (j=1; j<=(5*2)-1; j++) {

			if (j>=5-(i-1) && (j<=5+(i-1))) {
				printf("* ");
			}
			else {
				printf("  ");
			}
		}

		printf("\n");
	}
	return 0;
}
