#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

void swap (int *a, int *b){
	if (*a < *b) {
		int temp = *a;
		*a = *b;
		*b = temp;
	} 
}
int main(){
	int a, b, *p, *q;
	scanf("%d%d", &a, &b);
	p = &a, q = &b;
	swap (p, q);
	printf("%d %d\n", a, b);
	return 0;
}
