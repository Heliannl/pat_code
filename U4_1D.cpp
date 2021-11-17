#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
	char str[205];
	while(cin.getline(str,205)){
		sort(str, str+strlen(str));
		puts(str);
	}
	return 0;
}
