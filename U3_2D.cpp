#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
	int n;
	while(scanf("%d", &n)!=EOF){
		int a[n], m, num, j;
		for(int i=0; i<n; i++)
			scanf("%d", &a[i]);
		scanf("%d", &m);
		while(m--){
			scanf("%d", &num);
			for(j=0; j<n; j++){
				if(a[j]==num){
					printf("YES\n");
					break;
				}
			}
			if(j==n)
				printf("NO\n");
		}
	} 
	return 0;
} 
