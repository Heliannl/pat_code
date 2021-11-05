#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
	int N, num;
	while(scanf("%d", &N)!=EOF){
		int a, sum=0;
		while(N--){	
			scanf("%d", &a);
			sum+=a;
		}
		printf("%d\n", sum);
	}
	return 0;
}
