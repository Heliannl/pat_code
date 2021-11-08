#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
	char str1[20], str2[20];
	long long res;
	while(scanf("%s %s", str1, str2)!=EOF){
		int a=0, b=0, w=0;
		for(int i=strlen(str1)-1; i>0; i--){
			if(str1[i]==',')
				continue;
			a += (str1[i]-'0') * pow(10,w++);
		}
		if (str1[0]=='-')
			a = -a;
		else 
			a += (str1[0]-'0') * pow(10,w);
		w=0;
		for(int i=strlen(str2)-1; i>0; i--){
			if(str2[i]==',')
				continue;
			b += (str2[i]-'0') * pow(10,w++);
		}
		if (str2[0]=='-')
			b = -b;
		else 
			b += (str2[0]-'0') * pow(10,w);
		res = a+b;
		printf("%lld\n", res);
	}
	return 0;
} 
