#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
using namespace std;
int main() {
	char str1[100], str2[100];
	cin.getline(str1,100);
	cin.getline(str2,100);
	for (int i=0; i<strlen(str1); i++){
		if (str1[i] != str2[i]){
			printf("%d\n", str1[i]-str2[i]);
			break;
		}
	}
	return 0;
} 
