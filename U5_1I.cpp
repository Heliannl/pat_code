#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main(){
	for(int n=1000; n<=9999; n++){
		int m=n/1000+n%1000/100*10+n%100/10*100+n%10*1000;
		if(9*n==m)
			printf("%d\n", n);
	}
	return 0;
}
