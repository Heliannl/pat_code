#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
const int maxn=1000010;
int prime[maxn], pNum=0;
bool p[maxn]={0};
void Find_Prime(){
	for(int i=2; i<maxn; i++){
		if(p[i]==false){
			prime[pNum++]=i;
			for(int j=i*2; j<maxn; j+=i)
				p[j]=true;
		}
	}
} 

int main(){
	int n, ans;
	Find_Prime();
	while(scanf("%d", &n)!=EOF){
		ans=0;
		int sqr=(int)sqrt(1.0*n);
		for(int i=0; i<pNum && prime[i]<=sqr; i++){
			if(n%prime[i]==0){
				while(n%prime[i]==0){
					ans++;
					n/=prime[i];
				}
			}
			if(n==1)
				break;
		}
		if(n!=1)
			ans++;
		printf("%d\n", ans);	
	}
	return 0;
}
