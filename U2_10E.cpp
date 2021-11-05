#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
	int N, num;
	scanf("%d", &N);
	while(N--){
		scanf("%d", &num);
		int a, sum=0;
		while(num--){
			scanf("%d", &a);
			sum+=a;
		}
		printf("%d\n", sum);
	}
	return 0;
}
