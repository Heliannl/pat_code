#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main(){
	int m, n;
	while(scanf("%d", &m)!=EOF){
		while(m--){
			int ans=0;
			scanf("%d", &n);
			for(int i=abs(n); i<=2*abs(n); i++)
				ans+=i;
			if(n>=0)
				printf("%d\n", ans);
			else
				printf("%d\n", -ans);
		}
	}
	return 0;
}
