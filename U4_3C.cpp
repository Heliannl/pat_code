#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int n, P[25];
int generateP(int index, int num){
	//����Ҫ���ǽ������������ã�P[index]==num index==n���� 
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
