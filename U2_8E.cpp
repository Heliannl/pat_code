#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

struct studentInfo {
	int num;
	char name[20];
	int scor[3];
} stu[10];

int main(){
	double sum[3]={0};
	int max=0, n;
	for (int i=0; i<10; i++){
		scanf("%d %s %d %d %d", &stu[i].num, &stu[i].name, &stu[i].scor[0], &stu[i].scor[1], &stu[i].scor[2]);
		sum[0] += stu[i].scor[0];
		sum[1] += stu[i].scor[1];
		sum[2] += stu[i].scor[2];
		int s = stu[i].scor[0]+stu[i].scor[1]+stu[i].scor[2];
		if (s > max){
			max = s;
			n = i;
		}
	}
	printf("%.2f %.2f %.2f\n", sum[0]/10, sum[1]/10, sum[2]/10);
	printf("%d %s %d %d %d\n", stu[n].num, stu[n].name, stu[n].scor[0], stu[n].scor[1], stu[n].scor[2]);
	return 0;
}
