#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

const int maxn=25;
int m, n, P[maxn];
int F(int x){
	if(x==1){
		P[x]=0;
		return P[x];
	}
	if(x==2){
		P[x]=1;
		return P[x];
	}
	P[x]=F(x-1)+F(x-2);
	return P[x];
}

int main(){
	while(scanf("%d", &m)!=EOF){
		while(m--){
			memset(P,0,sizeof(P));
			scanf("%d", &n);
			F(2*n-1);
			for(int i=1; i<=n; i++){
				for(int k=1; k<n-i+1; k++)
					printf("  ");
				for(int j=1; j<2*i; j++)
					printf("%d ", P[j]);
				printf("\n");
			}
		}
	}
	return 0;
}
