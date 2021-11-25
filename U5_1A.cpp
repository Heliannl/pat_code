#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

void to_array(int a, char num[]){
	int i;
	for(i=0; i<5 && a!=0; i++){
		num[i]=a%10+'0';
		a/=10;
	}
	num[i]='\0';
}

int main(){
	int n;
	while(scanf("%d", &n)!=EOF){
		int k;
		char num1[5], num2[5];
		to_array(n, num1);
		to_array(n*n, num2);
		for(k=0; k<strlen(num1); k++){
			if(num1[k]!=num2[k]){
				printf("No!\n");
				break;
			}
		}
		if(k==strlen(num1))
			printf("Yes!\n");
	}
	return 0;
} 
