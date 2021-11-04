#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
using namespace std;
int main() {
	int a[10], temp;
	for (int i=0; i<10; i++)
		scanf("%d", &a[i]);
	for (int i=1; i<10; i++){
		for (int j=0; j<10-i; j++){
			if (a[j]>a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	} 
	for (int i=0; i<10; i++)
		printf("%d\n", a[i]);
	return 0;
} 
