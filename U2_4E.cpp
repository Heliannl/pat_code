#include<stdio.h>
#include<math.h>
using namespace std;
int main() {
	int sum = 0, N;
	for (int i = 1; i <= 100; i++){
		if (sum >= 1000){
			printf("%d\n", i-1);
			break;
		} else 
			sum += i;
	}
	return 0;
}
