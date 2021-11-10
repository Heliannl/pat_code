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
		/* ע�⣺1.������ int i=month������ѭ�� iֻ�ܵ�12
		2.������������ int p= isLeap(year) year���ܻ�� Ҫ��̬�ж�
		3.ad=ad-(dayOfMonth[month][isLeap(year)]-day)-1 ֱ���������µ�1�� */ 
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
