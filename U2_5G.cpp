#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
using namespace std;
int main() {
	int a[20];
	a[0] = a[1] = 1;
	for (int i=2; i<20; i++)
		a[i] = a[i-1] + a[i-2];
	for (int i=0; i<20; i++)
		printf("%d\n", a[i]);
	return 0;
} 
