#include<stdio.h>
#include<math.h>
using namespace std;
int main() {
	int i = 1, sum = 0;
	while (i <= 100) {
		sum += i;
		i++;
	}
	printf("%d\n", sum);
	return 0;
}
