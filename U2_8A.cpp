#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

struct person {
	char name[20];
	int count;
} leader[3] = {"Li", 0, "Zhang", 0, "Fun", 0};

int main(){
	int n;
	scanf("%d", &n);
	char name[10];
	for (int i=0; i<n; i++){
		scanf("%s", name);
		if (strcmp(name, "Li")==0)
			leader[0].count++;
		else if (strcmp(name, "Zhang")==0)
			leader[1].count++;
		else if (strcmp(name, "Fun")==0)
			leader[2].count++;
	}
	for (int i=0; i<3; i++){
		printf("%s:%d\n", leader[i].name, leader[i].count);
	}
	return 0;
}
