#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int m, n, x, ans;
	while(scanf("%d", &m)!=EOF){
		while(m--){
			scanf("%d", &n);
			int num[n+1];
			for(int i=0; i<=n; i++)
				scanf("%d", &num[i]);
			scanf("%d", &x);
			ans=num[n];
			for(int i=n-1; i>=0; i--)
				ans=ans*x+num[i];
			printf("%d\n", ans);
		}
	}
	return 0;
}
