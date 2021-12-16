#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
	string str;
	while(getline(cin,str)){
		reverse(str.begin(), str.end());
		cout<<str<<endl;
	} 
	return 0;
}
