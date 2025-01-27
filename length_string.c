#include <stdio.h>
#include <stdio.h>



int input(char [],int);
int input(char str[], int n) {
    int i = 0, ch;
    while ((ch = getchar()) != '\n') {  // Corrected: proper assignment and condition
	    //here is the mistake
        str[i] = ch;
        i++;
    }
    str[i] = '\0';  // Null-terminate the string
    return i;  
}


int length(char [],int);
int length(char str[],int n){
    int count=1;
    while (str[count]!='\0'){
        count++;
    }
    printf("length is %d",count);
}


int main() {
    char str[100];
    int n;
    n = input(str, 100);
    printf("\nentered string : %s\n", str);// Print the entered string
    
    length(str,100);
    
    
}
