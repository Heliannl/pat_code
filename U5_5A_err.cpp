#include<stdio.h>
#include<math.h>
int main(){
	int n;
	while(scanf("%d", &n)!=EOF){
		if(n<6)
			continue;
		int p[n], pNum=0;
		for(int i=6; i<=n; i++){
			int ans=0;
			//无语了以为节省时间结果根本不对 12: 1 2 3 4 6 (4被漏了) 
			for(int j=i; j>1;){t
				if(j%2==0){
					ans+=j/2;
					j/=2;
				}
				else{
					do{
						j--;
					}while(i%j!=0);
					ans+=j;
				}
			}
			if(ans==i)
				p[pNum++]=i;
		}
		for(int i=0; i<pNum-1; i++)
			printf("%d ", p[i]);
		printf("%d\n", p[pNum-1]);
	}
	return 0;
}
