#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

const int maxn=2505;
vector<int> hashTable[maxn];
char stu[40005][5];
bool cmp(int a, int b){
	return strcmp(stu[a], stu[b])<0;
}

int main(){
	int n, k, co, m;
	char str[5];
	vector<int>::iterator it;
	while(scanf("%d %d", &n, &k)!=EOF){
		for(int i=0; i<n; i++){
			scanf("%s %d", stu[i], &co);
			while(co--){
				scanf("%d", &m);
				hashTable[m].push_back(i);
			}
		}
		for(int num=1; num<=k; num++){
			printf("%d %d\n", num, hashTable[num].size());
			sort(hashTable[num].begin(),hashTable[num].end(),cmp);
			for(it=hashTable[num].begin(); it!=hashTable[num].end(); it++)
				printf("%s\n", stu[*it]);
		}
	}
	return 0;
}
