#include<stdio.h>
#include<math.h>
using namespace std;
int main() {
	int i = 1, sum = 0;
	do {
		sum += i;
		i++;
	} while (i<=100);
	printf("%d\n", sum);
	return 0;
}
