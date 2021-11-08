#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
	char a[11], b[11];
	while(scanf("%s %s", a, b)!=EOF){
		int sum=0;
		for (int i=0; i<strlen(a); i++){
			for (int j=0; j<strlen(b); j++)
				sum += (a[i]-'0')*(b[j]-'0');
		}
		printf("%d\n", sum);
	}
	return 0;
} 
 
