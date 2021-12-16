#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){
	int n, ma, mi, temp;
	while(scanf("%d", &n)!=EOF){
		scanf("%d", &temp);
		mi=ma=temp;;
		for(int i=1; i<n; i++){
			scanf("%d", &temp);
			ma=max(ma,temp);
			mi=min(mi,temp);
		}
		printf("%d %d\n", ma, mi);
	}
	return 0;
}
