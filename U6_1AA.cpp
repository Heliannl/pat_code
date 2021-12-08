#include<stdio.h>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;

const int maxn=26*26*26*10+1;
vector<int> hashTable[maxn];

int change(char str[]){
	int id=0;
	for(int i=0; i<3; i++)
		id=id*26+str[i]-'A';
	id=id*10+str[3]-'0';
	return id;
}

int main(){
	int n, k, i, co;
	char name[5];
	vector<int>::iterator it;
	while(scanf("%d %d", &n, &k)!=EOF){
		while(k--){
			scanf("%d %d", &i, &co);
			while(co--){
				scanf("%s", name);
				hashTable[change(name)].push_back(i);
			}
		}
		while(n--){
			scanf("%s", name);
			int temp=change(name);
			printf("%s %d", name, hashTable[temp].size());
			if(hashTable[temp].size()){
				sort(hashTable[temp].begin(),hashTable[temp].end());
				for(it=hashTable[temp].begin(); it!=hashTable[temp].end(); it++)
					printf(" %d", *it);
			}
			printf("\n");
		}
	}
	return 0;
}
