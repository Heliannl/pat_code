#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int isDone(int num[], int n){
	for(int i=0; i<n; i++){
		if(num[i])
			return 0;
	}
	return 1;
}

int main(){
	char n[40];
	int nt[40], p, a, temp[40];
	while(scanf("%s", &n)!=EOF){
		int len=strlen(n), q=0, res[200];
		for(int i=0; i<len; i++)
			nt[i]=n[i]-'0';
		int i, p, temp[40];
		do{
			i=0, p=0;
			for(; i<len; i++){
				temp[p++]=nt[i]/2;
				a=nt[i]%2;
				if(i!=len-1)
					nt[i+1]+=a*10;
				}
			res[q++]=a;
			memcpy(nt,temp,p*sizeof(int));
			len=p;
		}while(isDone(nt,len)==0);
		for(int i=q-1; i>=0; i--)
			printf("%d", res[i]);
		printf("\n");
	}
	return 0;
}
