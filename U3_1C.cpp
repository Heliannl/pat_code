#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
	long long a, b;
	while(scanf("%ld%ld", &a, &b)!=EOF){
		int sum1=0, sum2=0;
		for (int n = 1e8; n>0; n/=10){
			sum1+=a/n;
			sum2+=b/n;
			a%=n;
			b%=n;
		}
		printf("%d\n", sum1*sum2);
	}
	return 0;
} 
 
