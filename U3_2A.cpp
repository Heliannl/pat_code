#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
	int N, m;
	while(scanf("%d", &N), N){
		int sco[N], num=0;
		for(int i=0; i<N; i++)
			scanf("%d", &sco[i]);
		scanf("%d", &m);
		for(int i=0; i<N; i++){
			if(sco[i]==m)
				num++;
		}
		printf("%d\n", num);
	}
	return 0;
}
