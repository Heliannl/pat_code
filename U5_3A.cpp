#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int n;
	while(scanf("%d", &n), n){
		double res=n;
		for(int i=n; i>1; i--) 
			res+=2*(1.0/i)*(n-i+1);
		printf("%.2f\n", res);
	}
	return 0;
}
