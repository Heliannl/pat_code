#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
#include<stdbool.h>
using namespace std;

int main(){
	/*注意：a+b可能超过int数据范围，不能只把c设为long long int+int还是int 
	2^8=256 11111111=255
	*/
	long long a, b, m, sum;
	while(scanf("%lld", &m), m){
		scanf("%lld%lld", &a, &b);
		sum = a+b;
		int ans[32], num=0;
		do{
			ans[num++]=sum%m;
			sum/=m;
		}while(sum!=0);
		for(int i=num-1; i>=0; i--)
			printf("%d", ans[i]);
		printf("\n");
	}
	return 0;
}
