#include<stdio.h>
#include<iostream>
#include<map>
using namespace std;

int main(){
	int n;
	while(scanf("%d", &n), n){
		while(n--){
			double x=0, y=0;
			pair<double, double> p[3];
			for(int i=0; i<3; i++){
				scanf("%lf %lf", &p[i].first, &p[i].second);
				x+=p[i].first;
				y+=p[i].second;
			}
			printf("%.1f %.1f\n", x/3, y/3);
		}
	}
	return 0;
}
