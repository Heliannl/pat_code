#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;

struct stuInfo{
	char id[25];
	int num;
	int sc;
};

bool cmp(stuInfo a, stuInfo b){
	if(a.sc!=b.sc)
		return a.sc>b.sc;
	else
		return strcmp(a.id, b.id)<0;
}

int main(){
	int N, M, G;
	while(scanf("%d", &N), N){
		scanf("%d %d", &M, &G);
		int sco[M], temp, final=0;
		struct stuInfo stu[N];
		for(int i=1; i<=M; i++)
			scanf("%d", &sco[i]);
		for(int i=0; i<N; i++){
			scanf("%s %d", stu[i].id, &stu[i].num);
			stu[i].sc=0;
			for(int j=0; j<stu[i].num; j++){
				scanf("%d", &temp);
				stu[i].sc+=sco[temp];
			}	
			if(stu[i].sc>=G)
				final++;
		}
		sort(stu, stu+N, cmp);
		printf("%d\n", final); 
		for(int i=0; i<final; i++)
			printf("%s %d\n", stu[i].id, stu[i].sc);
	}
	return 0;
}
