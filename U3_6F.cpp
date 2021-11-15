#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
	char str[205];
	while(cin.getline(str,205)){
		int len=strlen(str);
		for(int i=0; i<len; i++){
			printf("%c", str[len-1-i]);
		}
		printf("\n");
	}
	return 0; 
}
