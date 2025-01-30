#include <stdio.h>
#include <stdlib.h>
void input(char str[]) {
	int i=0,ch;

	while ((ch=getchar())!='\n') {
		str[i]=ch;
		i++;
	}
	str[i]='\0';
}

int main()
{   
	int i,j,n;
	float x=0.0;
	typedef struct{
		char name[20];
		char erp_id[20];
		float sgpa[10];
		float cgpa[10];
	}student;

    student *stud1;
    stud1=(student *)malloc(sizeof(student));
	printf("Enter the name\n");
	input(stud1->name);
	printf("Enter the erp id\n");
	input(stud1->erp_id);

	printf("Enter no. of semesters\n");
	scanf("%d",&n);
	printf("enter sgpa");
	for (i=0;i<n-1;i++) {
		scanf("%f", &stud1->sgpa[i]);

		
	}
	
	printf("Cgpa is:\n");
	for (i=0; i<n; i++) {
		x=(x*i+stud1->sgpa[i])/(i+1);
		stud1->cgpa[i]=x;
		printf("Cgpa of %d semesters : %.2f\n",i+1,x);
	}

	return 0;
}
