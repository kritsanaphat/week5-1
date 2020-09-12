#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
char Large(char x[100]) {
	int y, i = 0, m = 0;
	int* p;
	p = &i;
	scanf("%s", x);
	y = strlen(x);
	for (i = 0; i < y; i++) {
		if (x[i] >= 65 && x[i] <= 90) {
			printf("%c", x[*p] + 32);
			m = m + 1;
		}
		else if (x[i] >= 97 && x[i] <= 122) {
			printf("%c", x[*p]);
			m = m + 1;
		}
	}
	return 0;
}
char Small(char x[100]) {
	int y, i = 0, m = 0;
	int* p;
	p = &i;
	scanf("%s", x);
	y = strlen(x);
	for (i = 0; i < y; i++) {
		if (x[i] >= 65 && x[i] <= 90) {
			printf("%c", x[*p]);
			m = m + 1;
		}
		else if (x[i] >= 97 && x[i] <= 122) {
			printf("%c", x[*p] - 32);
			m = m + 1;
		}
	}
	return 0;
}
int main() {
	char x[100];
	int j;
	printf("Select Choice\n");
	printf("1  Large or Small To Small\n");
	printf("2  Large or Small To Large\n");
	scanf("%d", &j);
	if (j == 1 || j == 2) {
		if (j == 1) {
			printf("Input string : ");
			Large(x);
		}
		else if (j == 2) {
			printf("Input string : ");
			Small(x);
		}
	}
	else printf("Select 1-2 only");
}