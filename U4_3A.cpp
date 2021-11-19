#include<stdio.h>
#include<iostream>
using namespace std;

int generateC(int num){
	if(num==1)	
		return 1;;
	if(num==2)	
		return 2;
	else
		return generateC(num-1)+generateC(num-2);
}

int main(){
	int N;
	while(scanf("%d", &N)!=EOF){
		printf("%d\n", generateC(N));
	}
	return 0;
}
