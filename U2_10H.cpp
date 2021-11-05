#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
	int N, M;
	scanf("%d", &N);
	while(N--){
		scanf("%d", &M);
		int a, sum=0;
		while(M--){
			scanf("%d", &a);
			sum+=a;
		}
		printf("%d\n\n", sum);
	}
	return 0;
}
