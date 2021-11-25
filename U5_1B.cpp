#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

void to_array(int a, char b[]){
	int i;
	for(i=0; i<6 && a!=0; i++){
		b[i]=a%10+'0';
		a/=10;
	}
	b[i]='\0';
}

int main(){
	for(int N=1000; N<=9999; N++){
		int k;
		char num1[6], num2[6];
		to_array(N, num1);
		to_array(N*9, num2);
		int len1=strlen(num1), len2=strlen(num2);
		if(len1==len2){
			for(k=0; k<len1; k++){
				if(num1[k]!=num2[len1-1-k])
					break;
			}
		}
		if(k==len1)	
			printf("%d\n", N);
	}
	return 0;
}
