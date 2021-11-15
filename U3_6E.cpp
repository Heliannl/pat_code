#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
	char s[100], c;
	while(cin.getline(s,100)){
		c=getchar();
		int len=strlen(s);
		for(int i=0; i<len; i++){
			if(s[i]!=c)
				printf("%c", s[i]);
		}
		printf("\n");
		getchar();
	}
	return 0; 
}
