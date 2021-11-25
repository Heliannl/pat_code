#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
	double n, i, j, k;
	while(scanf("%lf", &n)!=EOF){
		for(i=0; i<=100; i++){
			for(j=0; j<=100; j++){
				for(k=0; k<=100; k++){
					if(i+j+k==100 && 5*i+3*j+k/3<=n)
						printf("x=%.0lf,y=%.0lf,z=%.0lf\n", i, j, k);
				}
			}
		}
	}
	return 0;
}
