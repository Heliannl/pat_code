#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
using namespace std;
int main() {
	int a[3][2];
	for (int i=0; i<2; i++){
		for (int j=0; j<3; j++)
			scanf("%d", &a[j][i]);
	}
	for (int i=0; i<3; i++){
		for (int j=0; j<2; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	return 0;
} 
