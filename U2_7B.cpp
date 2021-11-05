#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

void cmp(int *a, int *b){
	if (*b>*a){
		int temp = *a;
		*a = *b; 
		*b = temp;
	}
}

int main(){
	int a, b, c, *p, *q, *r;
	scanf("%d%d%d", &a, &b, &c);
	p = &a, q = &b, r = &c;
	cmp(p, q);
	cmp(p, r);
	cmp(q, r);
	printf("%d %d %d\n", a, b, c);
	return 0;
}
