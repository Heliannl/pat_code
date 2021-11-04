#include<stdio.h>
#include<math.h>
using namespace std;
int main() {
	int sum = 0, N;
	N = scanf("%d", &N);
	if (N <= 0)
		break;
	else {
		for (int i = 1; i <= N; i++)
			sum += i;
		printf("%d\n", sum);
	}
	return 0;
}
