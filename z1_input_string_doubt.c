#include <stdio.h>

int input(char str[],int n){
	int i=0,ch;
	while (ch=getchar()!='\n'){
	str[i]=ch;
	i++;	
	}
	str[i]='\0';
	return i;	
}


int main(){
	char str[100];
	int n;
	n=input(str,100);
	printf("%s",str);
}
