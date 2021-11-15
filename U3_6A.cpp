#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
	char str1[210], str2[105];
	while(scanf("%s %s", str1, str2)!=EOF){
		int i, j, len1=strlen(str1), len2=strlen(str2);
		for(i=len1, j=0; j<len2; j++)
			str1[i+j]=str2[j];
		str1[i+j]='\0';
		puts(str1);
	}
	return 0;
} 
