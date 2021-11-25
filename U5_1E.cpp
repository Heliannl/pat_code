#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int n;
	while(scanf("%d", &n)!=EOF){
		int num[11]={0};
		num[n]++;
		for(int i=1; i<20; i++){
			scanf("%d", &n);
			num[n]++;
		}
		int maxn=1;
		for(int i=2; i<=10; i++){
			if(num[i]>num[maxn])
				maxn=i;
		}
		printf("%d\n", maxn);
	} 
	return 0;
}
 
