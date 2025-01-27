#include <stdio.h>

int input(char [],int);
int input(char str[], int n) {
	int i = 0, ch;
	while ((ch = getchar()) != '\n') {
		str[i] = ch;
		i++;
	}
	str[i] = '\0';
	return i;
}


int copy(char [],char []);
int copy(char source[],char dest[]) {
	int i=0;
	while (source[i]!='\0') {
		dest[i]=source[i];
		i++;
	}
	dest[i]='\0';
}


int main() {
	char str[100],str_new[100];
	int n;
	n = input(str, 100);
	printf("\nentered string : %s\n", str);

	copy(str,str_new);

	printf("\nCopied string : %s\n", str_new);
}
