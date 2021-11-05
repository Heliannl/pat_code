#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

struct student {
	int num;
	char name[20];
	char sex;
	int age;
};

int main(){
	int n;
	scanf("%d", &n);
	struct student stu[20], *p;
	for (p = stu; p<stu+n; p++)
		scanf("%d %s %c %d", &(p->num), &(p->name), &(p->sex), &(p->age));
	for (p = stu; p<stu+n; p++)
		printf("%d %s %c %d\n", p->num, p->name, p->sex, p->age);
	return 0;
}
