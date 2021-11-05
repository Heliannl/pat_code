#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

struct {
    int num;
    char name[10];
    char sex;
    char job;
    union {
        int Class;
        char position[10];
    }category;
} per[100], *p;

int main(){
	int n;
	scanf("%d", &n);
	for (p=per; p<per+n; p++){
		scanf("%d %s %c %c", &(p->num), &(p->name), &(p->sex), &(p->job));
		if (p->job=='s')
			scanf("%d", &(p->category.Class));
		else if (p->job=='t')
			scanf("%s", &(p->category.position));
	}
	for (p=per; p<per+n; p++){
		printf("%d %s %c %c ", p->num, p->name, p->sex, p->job);
		if (p->job=='s')
			printf("%d\n", p->category.Class);
		else if (p->job=='t')
			printf("%s\n", p->category.position);
	}
	return 0;
}
