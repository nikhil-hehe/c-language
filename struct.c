#include <stdio.h>
struct emp {
	int age;
	int salary;
	char* name;
};

int manager(){
    struct emp mgr;
    mgr.age=29;
    mgr.salary=47924;
    mgr.name="Dev";
    printf("\nMANAGER:\n%d\t%d\t%s",mgr.age,mgr.salary,mgr.name);
}
int main() {
    struct emp emp1,emp2;
	emp1.age=20;
	emp1.salary=20000;
	emp1.name="Nikhil";
	printf("Age\tSalary\tName\n");

	printf("%d\t%d\t%s\n",emp1.age,emp1.salary,emp1.name);

	emp2.age=19;
	emp2.salary=6000;
	emp2.name="Kavya";

	printf("%d\t%d\t%s",emp2.age,emp2.salary,emp2.name);
    manager();

}
