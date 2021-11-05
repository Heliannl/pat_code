#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

struct studentInfo {
	int num;
	char name[20];
	int scor1;
	int scor2;
	int scor3;
} stu[5], *p;

void input(struct studentInfo *p){
	for (; p<stu+5; p++)
		scanf("%d %s %d %d %d", &(p->num), &(p->name), &(p->scor1), &(p->scor2), &(p->scor3));
}

void print(struct studentInfo *p){
	for (; p<stu+5; p++)
		printf("%d %s %d %d %d\n", p->num, p->name, p->scor1, p->scor2, p->scor3);
}

int main(){
	p = stu;
	input(p);
	print(p);
	return 0;
}
