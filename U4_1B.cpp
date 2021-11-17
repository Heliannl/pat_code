#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
	int n, num[1005], max=0;
	while(scanf("%d", &n)!=EOF){
		for(int i=0; i<n; i++){
			scanf("%d", &num[i]);
			if(num[i]>num[max])
				max=i;
		}
		int temp=num[0];
		num[0]=num[max];
		num[max]=temp;
		sort(num+1, num+n);
		printf("%d\n", num[0]);
		if(n==1)
			printf("-1\n");
		else{
			for(int i=1; i<n; i++)
				printf("%d ", num[i]);
			printf("\n");
		}
	}
	return 0;
}
