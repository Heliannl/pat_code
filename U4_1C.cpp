#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;

struct stuInfo{
	char id[7];
	char name[9];
	int sco;
};

bool cmp1(stuInfo a, stuInfo b){
	return strcmp(a.id, b.id)<0;
}

bool cmp2(stuInfo a, stuInfo b){
	if(strcmp(a.name, b.name)!=0)
		return strcmp(a.name, b.name)<0;
	else
		return strcmp(a.id, b.id)<0;
}

bool cmp3(stuInfo a, stuInfo b){
	if(a.sco!=b.sco)
		return a.sco<b.sco;
	else
		return strcmp(a.id, b.id)<0;
}

int main(){
	int n, c, count=0;
	while(scanf("%d %d", &n, &c), n){
		count++;
		struct stuInfo stu[n];
		for(int i=0; i<n; i++)
			scanf("%s %s %d", stu[i].id, stu[i].name, &stu[i].sco);
		if(c==1)
			sort(stu, stu+n, cmp1);
		else if(c==2)
			sort(stu, stu+n, cmp2);
		else if(c==3)
			sort(stu, stu+n, cmp3);
		printf("Case %d:\n", count);
		for(int i=0; i<n; i++)
			printf("%s %s %d\n", stu[i].id, stu[i].name, stu[i].sco);
	}
	return 0;
}
