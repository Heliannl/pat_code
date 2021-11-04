#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
using namespace std;
int main() {
	int a[10];
	for (int i=0; i<10; i++)
		scanf("%d", &a[9-i]);
	for (int i=0; i<10; i++)
	printf("%d\n", a[i]);
	return 0;
} 
