#include<stdio.h>
#include<math.h>
using namespace std;
int main(){
	double l, t = 0;
	scanf("%lf", &l);
	if (l <= 100000)
		t = l * 0.1;
	else if (l <= 200000)
		t = 100000 * 0.1 + (l - 100000) * 0.075;
	else if (l <= 400000)
		t = 100000 * 0.1 + 100000 * 0.075 + (l - 200000) * 0.05;
	else if (l <= 600000)
		t = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (l - 400000) * 0.03;
	else if (l <= 1000000)
		t = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (l - 600000) * 0.015;
	else
		t = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (l - 1000000) * 0.001;
	printf("%.2f\n", t);
}
