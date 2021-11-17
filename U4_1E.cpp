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
	int m;
	while(scanf("%d", &m)!=EOF){
		int num[m][m], sum[2*m+2]={0}, i, j;
		for(i=0; i<m; i++){
			for(j=0; j<m; j++){
				scanf("%d", &num[i][j]);
				sum[i]+=num[i][j];
				sum[m+j]+=num[i][j];
			}
			sum[2*m]+=num[i][i];
			sum[2*m+1]+=num[i][m-1-i];
		}
		sort(sum, sum+2*m+2, cmp);
		for(int i=0; i<2*m+2; i++){
			printf("%d", sum[i]);
			if(i!=2*m+1)
				printf(" ");
		}
		printf("\n");
		}
	return 0;
}
