#include<stdio.h>
#include<iostream>
using namespace std;

bool rela_sev(int x){
	while(x!=0){
		if(x%10==7)
			return true;
		else
			return rela_sev(x/10);
	}
	return false;
}

int main(){
	int n, ans;
	while(scanf("%d", &n)!=EOF){
		ans=0;
		for(int i=1; i<=n; i++){
			if(i%7==0 || rela_sev(i))
				continue;
			ans+=i*i;
		}
		printf("%d\n", ans);
	}
	return 0;
}

