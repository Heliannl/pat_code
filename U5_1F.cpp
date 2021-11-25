#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int A[2][3], B[3][2], C[2][2];
	while(scanf("%d %d %d", &A[0][0], &A[0][1], &A[0][2])!=EOF){
		memset(C, 0, sizeof(C));
		for(int i=1; i<2; i++){
			for(int j=0; j<3; j++)
				scanf("%d", &A[i][j]);
		}
		for(int i=0; i<3; i++){
			for(int j=0; j<2; j++){
				scanf("%d", &B[i][j]);
			}
		}
		for(int i=0; i<2; i++){
			for(int j=0; j<2; j++){
				for(int k=0; k<3; k++)
					C[i][j]+=A[i][k]*B[k][j];
				printf("%d ", C[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
