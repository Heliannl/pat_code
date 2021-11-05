#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
	int n;
	while(scanf("%d", &n), n){
		int num, sum=0;
		while(n--){
			scanf("%d", &num);
			sum+=num;
		}
		printf("%d\n", sum);
	}
	return 0;
}
