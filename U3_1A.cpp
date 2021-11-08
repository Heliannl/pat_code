#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

const int MAXN = 10020;

int main(){
	int L, M, a, b;
	while(scanf("%d%d", &L, &M), L||M){
		int num[L+1] = {0}, count=0;
		while(M--){
			scanf("%d%d", &a, &b);
			for (int i=a; i<=b; i++)
				num[i] = 1;
		}
		for (int i=0; i<=L; i++){
			if (!num[i])
				count++;
		}
		printf("%d\n", count);
	}
	return 0;
} 
