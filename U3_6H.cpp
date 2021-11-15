#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
	int m, i=0;
	scanf("%d", &m);
	char str[m+1][25];
	while(m--){
		scanf("%s", str[m]);
		i++;
		for(int k=1; k<=4&&k<=i; k++){
			printf("%d=%s", k, str[k+(m-1)]);
			if(k==4 || k==i)
				printf("\n");
			else
				printf(" ");
		}
	}
	return 0; 
}
