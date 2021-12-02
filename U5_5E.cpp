#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int E[60], G[60], eNum=0, gNum=0;
	for(int i=2; i<=60; i++){
		int sum=0;
		for(int j=1; j<=(int)sqrt(1.0*i); j++){
			if(i%j==0){
				sum+=j;
				if(i/j!=i && i/j!=j)
					sum+=i/j;
			}	
		}
		
		if(sum==i)
			E[eNum++]=i;
		if(sum>i)
			G[gNum++]=i;
	}
	printf("E: ");
	for(int i=0; i<eNum; i++){
		if(i!=eNum-1)
			printf("%d ", E[i]);
		else
			printf("%d\n", E[i]);
	}
	printf("G: ");
	for(int i=0; i<gNum; i++){
		if(i!=gNum-1)
			printf("%d ", G[i]);
		else
			printf("%d\n", G[i]);
	}
	return 0;
}
