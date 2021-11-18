#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

const int maxn=10005;
char str1[maxn], str2[maxn];
int hashTable[150];

int main(){
	while(cin.getline(str1, maxn)){
		hashTable[150]={0};
		cin.getline(str2, maxn);
		int len1=strlen(str1), len2=strlen(str2);
		for(int i=0; i<len2; i++)
			hashTable[(int)str2[i]]=1;
		for(int i=0; i<len1; i++){
			if(hashTable[str1[i]]==1)
				continue;
			else
				printf("%c", str1[i]);
		}
		printf("\n");
	}
}
