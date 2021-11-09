#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
	int m, h;
	scanf("%d", &m);
	while(m--){
		scanf("%d", &h);
		for(int i=0; i<h; i++){
			for(int j=h-1; j>i; j--)
				printf(" ");
			for(int k=0; k<h+2*i; k++)
				printf("*");
			printf("\n");
		}
	}
	return 0;
} 
