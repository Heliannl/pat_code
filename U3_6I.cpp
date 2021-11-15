#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
	char str[230];
	while(cin.getline(str, 230)){
		int len=strlen(str), i;
		for(i=0; i<=len/2; i++){
			if(str[i]!=str[len-1-i]){
				printf("NO\n");
				break;
			}	
		}
		if(i==len/2+1)
			printf("YES\n");
	}
	return 0; 
}
