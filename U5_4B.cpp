#include<stdio.h>
#include<iostream>
using namespace std;

const int maxn=1000005;
bool p[maxn]={0};
int prime[maxn], num=0;
void Find_Prime(int n){
	for(int i=2; i<maxn; i++){
		if(p[i]==false){
			prime[num++]=i;
			if(num>=n)
				break;
			for(int j=i+i; j<maxn; j+=i)
			p[j]=true;
		}		
	}
}
int main(){
	int k;
	while(scanf("%d", &k)!=EOF){
		num=0;
		Find_Prime(k);
		printf("%d\n", prime[k-1]);
	}
	return 0;
}
