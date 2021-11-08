#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
	int n;
	while(scanf("%d", &n)!=EOF){
		int a, b=0, c=0; //注意每次循环初始化 
		for (int i=0; i<n; i++){
			scanf("%d", &a);
			if (a%2==0)
				b++;
			else
				c++;
		}
		if (b>c)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0; 
} 
 
