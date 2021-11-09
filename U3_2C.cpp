#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

struct stuInfor{
	//注意：数组要取得大一些 
	char num[50];
	char name[100];
	char sex[20];
	int age;
};

int main(){
	int N, M, i;
	char a[50];
	while(scanf("%d", &N)!=EOF){
		struct stuInfor stu[N];
		for(int i=0; i<N; i++)
			scanf("%s %s %s %d", stu[i].num, stu[i].name, stu[i].sex, &stu[i].age);
		scanf("%d", &M);
		while(M--){
			scanf("%s", a);
			for(i=0; i<N; i++){
				if(!strcmp(stu[i].num, a)){
					printf("%s %s %s %d\n", stu[i].num, stu[i].name, stu[i].sex, stu[i].age);
					break;
				}
			}
			if (i==N)
				printf("No Answer!\n");
		}
	}
	return 0;
} 
