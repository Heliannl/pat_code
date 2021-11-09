#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
	char str[100];
	while(scanf("%s", str)!=EOF){
		int l=strlen(str);
		int h=(l+2)/3;
		for(int i=0; i<h-1; i++){
			printf("%c", str[i]);
			for(int j=0; j<l-2*h; j++)
				printf(" ");
			printf("%c\n", str[l-1-i]);
		}
		for(int i=0; i<l-2*h+2; i++)
			printf("%c", str[h-1+i]);
		printf("\n");
	}
	return 0;
} 
