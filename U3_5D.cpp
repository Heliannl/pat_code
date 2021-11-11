#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
#include<stdbool.h>
using namespace std;
int main(){
	int n;
	while(scanf("%d", &n)!=EOF){
		int res[30], p=0;
		do{
			res[p++]=n%8;
			n/=8;
		}while(n!=0);
		for(int i=p-1; i>=0; i--)
			printf("%d", res[i]);
		printf("\n");
	}
	return 0;
}
