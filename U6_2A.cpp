#include<stdio.h>
#include<set>
using namespace std;

int main(){
	int n, m, k, i, j;
	while(scanf("%d", &n)!=EOF){
		set<int> st[n+1];
		set<int>::iterator it;
		for(i=1; i<=n; i++){
			scanf("%d", &m);
			while(m--){
				scanf("%d", &j);
				st[i].insert(j);
			}
		}
		scanf("%d", &k);
		while(k--){
			scanf("%d %d", &i, &j);
			int nc=0, nt=st[j].size();
			for(it=st[i].begin(); it!=st[i].end(); it++){
				if(st[j].find(*it)==st[j].end())
					nt++;
				else
					nc++;
			}
			double ans=(double)nc/nt*100;
			printf("%.1f%%\n", ans);	
		}
	}
	return 0;
}
