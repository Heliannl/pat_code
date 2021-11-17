#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
	int N;
	while(scanf("%d", &N), N){
		int num[N];
		for(int i=0; i<N; i++)
			scanf("%d", &num[i]);
		sort(num, num+N);
		if(N%2==0)
			printf("%d\n", (num[N/2-1]+num[N/2])/2);
		else
			printf("%d\n", num[N/2]);
	}
	return 0;
}
