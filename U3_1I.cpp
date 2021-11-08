#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

/* scanf("%c",&a)可以接受空格和换行符 %s以空格或换行符作为字符串的结束标志 */ 

int main(){
	int N;
	while(scanf("%d", &N)!=EOF){
		char a, b;
		int W[3]={0}, A[3]={0}, B[3]={0};
		getchar(); //吸收N后面的换行符 
		while(N--){
			scanf("%c %c", &a, &b);
			getchar(); //吸收C J后面的换行符 
			if (a==b)
				W[1]++;
			else if(a=='C'&&b=='J' || a=='J'&&b=='B' || a=='B'&&b=='C'){
				W[0]++;
				if(a=='B')	
					A[0]++;
				else if(a=='C')
					A[1]++;
				else
					A[2]++;	
			}
			else{
				W[2]++;
				if(b=='B')	
					B[0]++;
				else if(b=='C')
					B[1]++;
				else
					B[2]++;
			}
		}
		printf("%d %d %d\n", W[0], W[1], W[2]);
		printf("%d %d %d\n", W[2], W[1], W[0]);
		char aa = A[0]>=A[1]?A[0]>=A[2]?'B':'J':A[1]>=A[2]?'C':'J';
		char bb = B[0]>=B[1]?B[0]>=B[2]?'B':'J':B[1]>=B[2]?'C':'J';
		printf("%c %c\n", aa, bb);
	} 
	return 0;
} 
 
