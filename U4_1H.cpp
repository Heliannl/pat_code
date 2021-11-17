#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;

bool cmp(int a, int b){
	return a>b;
}

int main(){
	int num[10], even[10], odd[10], m, n;
	while(scanf("%d", &num[0])!=EOF){
		m=0, n=0;
		for(int i=1; i<10; i++)
			scanf("%d", &num[i]);
		for(int i=0; i<10; i++){
			if(num[i]%2==0)
				even[m++]=num[i];
			else
				odd[n++]=num[i];
		}
		sort(odd, odd+n, cmp);
		sort(even, even+m);
		for(int i=0; i<n; i++)
			printf("%d ", odd[i]);
		for(int i=0; i<m; i++)
			printf("%d ", even[i]);
		printf("\n");
	}
	return 0;
}
