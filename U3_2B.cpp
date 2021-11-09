#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
	int n;
	while(scanf("%d", &n)!=EOF){
		int num[n], x, i;
		for(int i=0; i<n; i++)
			scanf("%d", &num[i]);
		scanf("%d", &x);
		for(i=0; i<n; i++){
			if(num[i]==x){
				printf("%d\n", i);
				break;
			}
		}
		if(i==n)
			printf("-1\n");
	}
	return 0;
} 
