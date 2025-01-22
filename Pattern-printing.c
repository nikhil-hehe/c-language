/*
A 
B A 
A B A 
B A B A 
A B A B A*/
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


/*
* 
* * 
* * * 
* * * * 
* * * * *
*/
#include <stdio.h>

int main()
{   int i,j;
    for (i=1;i<6;i++){
        for (j=1;j<=i;j++){
            printf("* ");
        }
    
        printf("\n");
    }
    return 0;
}



/*
        *         
      * * *       
    * * * * *     
  * * * * * * *   
* * * * * * * * * 
*/
	
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


//simple choice to operations
#include <stdio.h>
#include <math.h>

int main()

{
	int choice;
	float r,l,w,a,b,c,a_c,a_t,a_r,s;
	printf("Enter choice\n1.Area of Circle\n2.Area of Triangle\n3.Area of Rectangle\n");
	scanf("%d",&choice);

	switch (choice) {
	case 1:
		printf("Enter the radius\n");
		scanf("%f",&r);
		printf("Area of circle is %f",2*3.1417*r);
		break;
	case 2:
		printf("Enter the sides\n");
		scanf("%f%f%f",&a,&b,&c);
		s=(a+b+c)/2;
		a_t=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("Area of triangle is %f",a_t);
		break;
	case 3:
		printf("Enter the length and width\n");
		scanf("%f%f",&l,&w);
		a_r=l*w;
		printf("Area of reactangle is %f",a_r);
		break;

	default:
		printf("Enter a valid choice");
		break;

	}


	return 0;
}
