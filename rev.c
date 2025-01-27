#include <stdio.h>
int length(char []);
int length(char str[]){
    int count=0;
    while (str[count]!='\0'){
        count++;
    }
    return count;
}

int main() {
    int i;
    char str1[] = "Apple";
    int size = length(str1);
    char str2[100];
    for (i=0;i<=size;i++){
        str2[i]=str1[size-i-1];
    }
    str2[size]='\0';
    printf("reversed - %s",str2);
}
