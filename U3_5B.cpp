#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
#include<stdbool.h>
using namespace std;

int nTo(char n[], int x){
	int num=0, p=0;
	for(int i=strlen(n)-1; i>=0; i--){
		if(n[i]>='0' && n[i]<='9')
			num+=(n[i]-'0')*pow(x, p++);
		else if(n[i]>='a' && n[i]<='f')
			num+=(n[i]-'a'+10)*pow(x, p++);
		else if(n[i]>='A' && n[i]<='Z')
			num+=(n[i]-'A'+10)*pow(x, p++);
	}
	return num;
}

void Tob(int c, int b){
	int ans[32], p=0;
	do{
		ans[p++]=c%b;
		c/=b;
	}while(c!=0);
	for(int i=p-1; i>=0; i--){
		if(ans[i]>=0 && ans[i]<=9)
			printf("%d", ans[i]);
		else
			printf("%c", ans[i]-10+'A');
	}
}

int main(){
	char n[32];
	int a, b, c;
	while(scanf("%d%s%d", &a, n, &b)!=EOF){
		c = nTo(n, a);
		Tob(c, b);
		printf("\n");
	}
	return 0;
}
