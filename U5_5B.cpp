#include<stdio.h>
#include<math.h>
int main(){
	int n;
	while(scanf("%d", &n)!=EOF){
		int p[n], pNum=0, sum;
		if(n<6)
			continue;
		for(int i=6; i<=n; i++){
			sum=1;
			for(int j=2; j<=(int)sqrt(1.0*i); j++){
				if(i%j==0){
					sum+=j;
					if(i/j!=j)
						sum+=i/j;
				}	
			}
			if(sum==i)
				p[pNum++]=i;
		}
		printf("%d", p[0]);
		for(int i=1; i<pNum; i++)
			printf(" %d", p[i]);
		printf("\n");
	}
	return 0;
}
