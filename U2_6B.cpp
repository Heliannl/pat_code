#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

void vowels(char s1[], char s2[]){
	int l = strlen(s2);
	for (int i=0; i<strlen(s1); i++){
		if (s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||\
		s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U')
		    // s[strlen(s2)++]=s1[i] 编译错误 strlen(s2)是定值不能++ 
			s2[l++] = s1[i];
	}
}

int main(){
	char str[100], res[100]="\0";
	cin.getline(str,100);
	vowels(str, res);
	puts(res);
	return 0; 
} 
