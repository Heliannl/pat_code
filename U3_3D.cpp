#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
	int n;
	while(scanf("%d", &n)!=EOF){
		for(int i=0; i<n; i++){
			for(int j=0; j<i; j++)
				printf(" ");
			for(int k=n; k>i; k--)
				printf("* ");
			printf("\n");
		}
		for(int i=1; i<n; i++){
			for(int j=1; j<n-i; j++)
				printf(" ");
			for(int k=0; k<i+1; k++)
				printf("* ");
			printf("\n");
		}
	}
	return 0;
} 
