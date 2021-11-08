#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
	int N, M, a, b;
	while(scanf("%d", &N)!=EOF){
		int dis[N+1]={0};
		for (int i=1; i<N+1; i++)
			scanf("%d", &dis[i]);
		scanf("%d", &M);
		while(M--){
			int sum1=0, sum2=0;
			scanf("%d %d", &a, &b);
			if (a>b){
				int temp = a;
				a = b;
				b = temp;
			}
			for (int i=a; i<b; i++)
				sum1+=dis[i];
			for (int i=b; i<N+1; i++)
				sum2+=dis[i];
			for (int i=1; i<a; i++)
				sum2+=dis[i];
			if (sum1<sum2)
				printf("%d\n", sum1);
			else
				printf("%d\n", sum2);
		}
	} 
	return 0;
} 
 
