#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int N, M, temp;
	while(scanf("%d %d", &N, &M)!=EOF){
		int stu[N];
		int hashTable[M+1]={0};
		for(int i=0; i<N; i++){
			scanf("%d", &stu[i]);
			hashTable[stu[i]]++;
		}
		for(int i=0; i<N; i++){
			if(hashTable[stu[i]]==1)
				printf("BeiJu\n");
			else
				printf("%d\n", hashTable[stu[i]]-1);
		}
	}
	return 0; 
}
