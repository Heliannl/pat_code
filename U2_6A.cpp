#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

void change(char str[]){
	char temp;
	int l = strlen(str);
	for (int i=0; i<l/2; i++){
		temp = str[i];
		str[i] = str[l-1-i];
		str[l-1-i] = temp;
	}
}

int main(){
	char str[100];
	cin.getline(str,100);
	change(str);
	puts(str);
	return 0; 
} 
