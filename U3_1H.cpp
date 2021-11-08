#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
	char a[12], b[12];
	int da, db;
	while(scanf("%s %d %s %d", a, &da, b, &db)!=EOF){
		int m=0, n=0, M=0, N=0;
		for(int i=0; i<strlen(a); i++){
			if(a[i]-'0'==da)
				M+=(a[i]-'0')*pow(10,m++);
		}
		for(int i=0; i<strlen(b); i++){
			if(b[i]-'0'==db)
				N+=(b[i]-'0')*pow(10,n++);
		}
		printf("%d\n", M+N);
	} 
	return 0;
} 
 
