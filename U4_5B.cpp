#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n, k;
	while(scanf("%d", &n)!=EOF){
		while(n--){
			scanf("%d", &k);
			int num[k], ans[k], co=0;
			for(int i=0; i<k; i++)
				scanf("%d", &num[i]);
			for(int i=0; i<k; i++){
				if(i==0 && num[i]!=num[i+1])
					ans[co++]=i;
				else if(i==k-1 && num[i]!=num[i-1])
					ans[co++]=i;
				else{
					if((num[i]>num[i-1]&&num[i]>num[i+1])||(num[i]<num[i-1]&&num[i]<num[i+1]))
						ans[co++]=i;
				}
			}
			for(int i=0; i<co; i++){
				printf("%d", ans[i]);
				if(i!=co-1)
					printf(" ");
			}
			if(co!=0)
				printf("\n");
		}
	}
	return 0;
}
