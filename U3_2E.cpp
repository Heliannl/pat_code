#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

struct stuInfor {
	int id;
	char name[100];
	char sex[20];
	int age;
};

int main(){
	int m, n, num, j;
	scanf("%d", &m);
	while(m--){
		scanf("%d", &n);
		struct stuInfor stu[n];
		for(int i=0; i<n; i++)
			scanf("%d %s %s %d", &stu[i].id, stu[i].name, stu[i].sex, &stu[i].age);
		scanf("%d", &num);
		for(j=0; j<n; j++){
			if(stu[j].id==num){
				printf("%d %s %s %d\n", stu[j].id, stu[j].name, stu[j].sex, stu[j].age);
				break;
			}
		}
	}
	return 0;
} 
