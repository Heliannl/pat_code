#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
	int N;
	while(scanf("%d", &N)!=EOF){
		int num;
		int a1=0, a2=0, a3=0, a5=0;
		double a4=0;
		int count=0, n2=0, n4=0, max=0;
		for (int i=0; i<N; i++){
			scanf("%d", &num);
			if(num%5==0 && num%2==0)
				a1+=num;
			else if(num%5==1){
				a2+=pow(-1,count++)*num;
				n2++;  //注意不能用!a2来判断是非输出N,非零个数交错求和可能为0 
			}
			else if(num%5==2)
				a3++;
			else if(num%5==3){
				a4+=num;
				n4++;
			}	
			else if(num%5==4)
				max=num>max?num:max;
		}
		a4=n4==0?0:a4/n4;
		a5=max;
		if(!a1) printf("N "); else printf("%d ", a1);
		if(!n2) printf("N "); else printf("%d ", a2);
		if(!a3) printf("N "); else printf("%d ", a3);
		if(!a4) printf("N "); else printf("%.1f ", a4);
		if(!a5) printf("N\n"); else printf("%d\n", a5);
	}
	return 0;
} 
 
