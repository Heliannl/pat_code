#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main(){
	char *a = "I love China!";
	int n;
	scanf("%d", &n);
	for (char *p = a+n; p<a+strlen(a); p++)
		printf("%c", *p);
	printf("\n");
	// printf("%s\n", a+n);
	return 0;
}
