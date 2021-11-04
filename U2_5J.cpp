#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
using namespace std;
int main() {
	char str1[100], str2[100], str3[100], max[100];
	cin.getline(str1,100);
	cin.getline(str2,100);
	cin.getline(str3,100);
	if (strcmp(str1, str2)>0)
		strcpy(max, str1);
	else
		strcpy(max, str2);
	if (strcmp(max, str3)<0)
		strcpy(max, str3);
	puts(max);
	return 0;
} 
