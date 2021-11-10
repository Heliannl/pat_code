#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
#include<stdbool.h>
using namespace std;

int dayOfMonth[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},\
{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};

char dayOfWeek[8][20]={"","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

char monthOfYear[13][20]={"","January","February","March","April","May","June","July",\
"August","September","October","November","December"};

bool isLeap(int year){
	return (year%4==0 && year%100!=0) || (year%400==0); 
}

int main(){
	int day, year, num, n;
	char month[20];
	while(scanf("%d %s %d", &day, month, &year)!=EOF){
		n=0;
		for(int i=1; i<year; i++){
			if(isLeap(i))
				n+=366;
			else
				n+=365;
		}
		for(int i=1; i<=12; i++){
			if(!strcmp(month,monthOfYear[i])){
				num=i;
				break;
			}
		}
		for(int i=1, j=isLeap(year); i<num; i++)
			n+=dayOfMonth[i][j];
		n+=day;
		if(n%7==0)
			printf("Sunday\n");
		else
			printf("%s\n", dayOfWeek[n%7]);
	}
	return 0;
}
