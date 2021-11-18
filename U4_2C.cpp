#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

const int maxn=100005;
int hashTable[maxn]={0};
int num[maxn];

int main(){
	int N;
	while(scanf("%d", &N)!=EOF){
		memset(hashTable, 0, sizeof(hashTable));
		for(int i=0; i<N; i++){
			scanf("%d", &num[i]);
			hashTable[num[i]]++;
		}
		int i;
		for(i=0; i<N; i++){
			if(hashTable[num[i]]==1){
				printf("%d\n", num[i]);
				break;
			}		
		}
		if(i==N)
			printf("None\n");
	}
}
