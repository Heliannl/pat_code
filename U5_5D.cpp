#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

int calcu(int x){
	int ans;
	if(x>1)
		ans=2;
	else
		ans=1; 
	for(int j=2; j<=(int)sqrt(1.0*x); j++){
		if(x%j==0){
			if(j*j!=x)
				ans+=2;
			else
				ans++;
		}
	}
	return ans;
}

int main(){
	int n;
	while(scanf("%d", &n), n){
		int num[n];
		for(int i=0; i<n; i++){
			scanf("%d", &num[i]);
			printf("%d\n", calcu(num[i]));
		}
	}
	return 0;
}

