#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
	int N, a, b;
	scanf("%d", &N);
	while(N--){
		scanf("%d%d", &a, &b);
		printf("%d\n", a+b);
	}
	return 0;
}
