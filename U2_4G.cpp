#include<stdio.h>
#include<math.h>
using namespace std;
int main() {
	double sum = 0;
	for (int i=1, sign=1; fabs(1/(double)i)>=1e-6; i=i+2, sign++) {
		if (sign%2)
			sum += 1/(double)i;
		else
			sum -= 1/(double)i;
	}
	printf("PI=%10.8f\n", sum*4);
	return 0;
}
