#include<stdio.h>
#include<math.h>
using namespace std;
int main() {
	int sum = 0, N;
	scanf("%d", &N);
	for (int i = 1; ; i++){
		if (i > N)
			break;
		sum += i;
	}
	printf("%d\n", sum);
	return 0;
}
