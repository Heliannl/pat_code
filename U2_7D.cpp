#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

void swap(char *a, char *b){
	//1. char *tempʱ����Ҫ��ʼ�� 2. a=b������ַ��main������������ 
	if (strcmp(a, b)>0){
		char str[20];
		char *c = str;
		strcpy(c, a);
		strcpy(a, b);
		strcpy(b, c);
	}
}

int main(){
	char str1[25], str2[25], str3[25];
	cin.getline(str1, 25);
	cin.getline(str2, 25);
	cin.getline(str3, 25);
	char *s1 = str1, *s2 = str2, *s3 = str3;
	swap(s1, s2);
	swap(s1, s3);
	swap(s2, s3);
	puts(s1);
	puts(s2);
	puts(s3);
	return 0; 
}
