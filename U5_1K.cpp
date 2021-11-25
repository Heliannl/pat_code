#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main(){
	int x, n;
	while(scanf("%d %d", &x, &n)!=EOF){
		double y=x;
		for(int i=1; i<=n; i++)
			y=y*2/3+x/(3*y*y);
		printf("%.6f\n", y);
	}
	return 0;
}
