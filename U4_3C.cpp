#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int n, P[25];
int generateP(int index, int num){
	//最重要的是截至条件的设置：P[index]==num index==n不对 
	if(num==0)
		return 1;
	if(index==n+1)
		return 0;
	return generateP(index+1, num-P[index])+generateP(index+1, num);
}

int main(){
	while(scanf("%d", &n)!=EOF){
		for(int i=1; i<=n; i++)
			scanf("%d", &P[i]);
		printf("%d\n", generateP(1, 40));
	}
	return 0;
} 
