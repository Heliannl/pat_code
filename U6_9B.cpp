#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
	string str;
	while(getline(cin,str)){
		do{
			cout<<str<<endl;
		}while(next_permutation(str.begin(), str.end()));
		printf("\n");
	}
	return 0;
}
