#include<stdio.h>
#include<iostream>
using namespace std;

const int maxn=20005;
int prime[maxn], num=0;
bool p[maxn]={0};
void Find_Prime(int x){
	for(int i=2; i<x; i++){
		if(p[i]==false){
			if(i%10==1)
				prime[num++]=i;
			for(int j=i+i; j<=x; j+=i)
				p[j]=true;
		}
	}
}

int main(){
	int n;
	while(scanf("%d", &n)!=EOF){
		num=0;
		Find_Prime(n);
		if(num==0)
			printf("-1\n");
		else{
			for(int i=0; i<num-1; i++)
				printf("%d ", prime[i]);
			printf("%d\n", prime[num-1]);
		}
	}
	return 0;
} 
