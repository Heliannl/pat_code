#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
	int N, M;
	while(scanf("%d", &N)!=EOF){
		int dis[N+1]={0};
		int D[N+1]={0};
		int sum=0, min=0;
		for(int i=1; i<=N; i++){
			scanf("%d", &dis[i]);
			sum+=dis[i];
			D[i]=sum;
		}
		scanf("%d", &M);
		while(M--){
			int a, b;
			scanf("%d %d", &a, &b);
			if(b>a){
				int temp=a;
				a=b;
				b=temp;
			}
			int c1=D[a-1]-D[b-1];
			int c2=sum-c1;
			min=c1>c2?c2:c1;
			printf("%d\n", min);
		}
	}
	return 0;
} 
 
