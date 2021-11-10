#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
#include<stdbool.h>
using namespace std;

int dayOfMonth[13][2]={{0,0}, {31,31}, {28,29}, {31,31}, {30,30}, {31,31}, {30,30},\
{31,31}, {31,31}, {30,30}, {31,31}, {30,30}, {31,31}};

bool isLeap(int year){
	return (year%4==0 && year%100!=0) || (year%400==0); 
}

int main(){
	int m, year, month, day, ad;
	scanf("%d", &m);
	while(m--){
		scanf("%d%d%d%d", &year, &month, &day, &ad);
		/* 注意：1.不能用 int i=month来控制循环 i只能到12
		2.不能再这里用 int p= isLeap(year) year可能会变 要动态判断
		3.ad=ad-(dayOfMonth[month][isLeap(year)]-day)-1 直接跳到下月的1号 */ 
		for(; month<=12;){
			if(day+ad<=dayOfMonth[month][isLeap(year)]){
				day+=ad;
				break;
			}
			else{
				ad=ad-(dayOfMonth[month][isLeap(year)]-day)-1;
				day=1;
				month++;
				if(month==13){
					month=1;
					year++;
				}
			}
		}
		printf("%04d-%02d-%02d\n", year, month, day);
	}
	return 0;
}
