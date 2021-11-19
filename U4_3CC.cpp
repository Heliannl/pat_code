#include<stdio.h>
#include<iostream>
using namespace std;

int P[25];
int chose(int a, int b){
	if(b==0)	return 1;
	if(a<=0) 	return 0;
	return chose(a-1, b)+chose(a-1, b-P[a]);
}

int main(){
	int n, m;
	while(scanf("%d", &n)!=EOF){
		for(int i=1; i<=n; i++)
			scanf("%d", &P[i]);
		printf("%d\n", chose(n, 40));
	}
	return 0;
}
