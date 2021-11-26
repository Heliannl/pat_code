#include<stdio.h>
#include<iostream>
using namespace std;

const int maxn=35000;
int prime[maxn], num=0;
bool p[maxn]={0};
void Find_Prime(int x){
	for(int i=2; i<=x; i++){
		if(p[i]==false){
			prime[num++]=i;
			for(int j=i*2; j<maxn; j+=i)
				p[j]=true;
		}
	}
}
int main(){
	int n;
	while(scanf("%d", &n), n){
		num=0;
		int res=0;
		Find_Prime(n);
		for(int i=0; prime[i]<=n/2; i++){
			if(p[n-prime[i]]==false)
				res++;
		}
		printf("%d\n", res);
	}
	return 0;
}
