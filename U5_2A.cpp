#include<stdio.h>
#include<iostream>
using namespace std;

int gcd(int a, int b){
	if(b==0)
		return a;
	else
		return gcd(b, a%b);
}

int lcm(int a, int b){
	return a/gcd(a, b)*b;
}

int main(){
	int n, m;
	while(scanf("%d", &n)!=EOF){
		while(n--){
			scanf("%d", &m);
			int num[m], ans;
			for(int i=0; i<m; i++)
				scanf("%d", &num[i]);
			ans=num[0];
			for(int i=0; i<m; i++)
				ans=lcm(ans, num[i]);
			printf("%d\n", ans);
		}
	}
	return 0;
}
