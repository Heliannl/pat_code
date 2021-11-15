#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
	int m, l;
	char a[55], b[55];
	scanf("%d", &m);
	while(m--){
		scanf("%s %s", &a, &b);
		l=strlen(a)-strlen(b);
		if(l==0)
			printf("%s is equal long to %s\n", a, b);
		else if(l<0)
			printf("%s is shorter than %s\n", a, b);
		else
			printf("%s is longer than %s\n", a, b);
	}
	return 0; 
}
