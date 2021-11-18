#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

const int maxn=105;

int main(){
	int m, n;
	scanf("%d", &m);
	while(m--){
		scanf("%d", &n);
		int num[n], flag[maxn];
		for(int i=0; i<n; i++)
			scanf("%d", &num[i]);
		int max = num[0];
		for(int i=1; i<n; i++){
			if(num[i]>max)
				max=num[i];
		}
		/* ע��1.���������ֱ�� int hashTable[maxn][maxn]��ʡ�ռ� 
		2.int hashTable[maxn][max+5]={0}�����ܽ�����ȫ����Ϊ0����memset */ 
		int hashTable[maxn][max+5];
		memset(hashTable, 0, sizeof(hashTable));
		for(int i=0; i<n; i++){
			scanf("%d", &flag[i]);
			hashTable[flag[i]][num[i]]++;
		}
		sort(num, num+n);
		sort(flag, flag+n);
		for(int i=0; i<n; i++){
			if(i==0 || flag[i]!=flag[i-1]){
				printf("%d={%d=%d", flag[i], num[0], hashTable[flag[i]][num[0]]);
				for(int j=1; j<n; j++){
					if(num[j]==num[j-1])
						continue;
					printf(",%d=%d", num[j], hashTable[flag[i]][num[j]]);
				}
				printf("}\n");
			}	
		}
	}
	return 0; 
}
