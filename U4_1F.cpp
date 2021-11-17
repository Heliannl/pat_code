#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;

struct catInfo{
	int weight;
	char color[15];
};

bool cmp(catInfo a, catInfo b){
	return a.weight>b.weight;
}

int main(){
	int n;
	while(scanf("%d", &n)!=EOF){
		struct catInfo cat[n]; 
		for(int i=0; i<n; i++)
			scanf("%d %s", &cat[i].weight, cat[i].color);
		sort(cat, cat+n, cmp);
		for(int i=0; i<n; i++)
			printf("%s\n", cat[i].color);
	}
	return 0;
}
