#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
#include<stdbool.h>
using namespace std;

int dayOfMonth[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},\
{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};

bool isLeap(int year){
	return (year%4==0 && year%100!=0) || (year%400==0); 
}

int main(){
	int y, n, month, day, p;
	while(scanf("%d%d", &y, &n)!=EOF){
		p=isLeap(y);
		for(int i=1; i<=12; i++){
			if(n-dayOfMonth[i][p]<=0){
				month=i;
				break;
			}else
				n-=dayOfMonth[i][p];
		}
		//ע�⣺yyyy-mm-dd  1=<y<=3000 
		printf("%04d-%02d-%02d\n", y, month, n);
	}
	return 0;
}
