#include <stdio.h>

void input(char str[]) {
    int i = 0, ch;
    while ((ch = getchar()) != '\n') {
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
}

int main() {
    int i, n;
    float x = 0.0;
    struct {
        char name[20];
        char erp_id[20];
        float sgpa[10]; // Array to store SGPA for each semester
        float cgpa[10]; // Array to store CGPA after each semester
    } stud1;

    printf("Enter the name:\n");
    input(stud1.name);
    printf("Enter the ERP ID:\n");
    input(stud1.erp_id);

    printf("Enter the number of semesters:\n");
    scanf("%d", &n);

    printf("Enter SGPA for each semester:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &stud1.sgpa[i]);
    }

    printf("CGPA is:\n");
    for (i = 0; i < n; i++) {
        x = (x * i + stud1.sgpa[i]) / (i + 1);
        stud1.cgpa[i] = x;
        printf("CGPA after %d semesters: %.2f\n", i + 1, x);
    }

    return 0;
}
