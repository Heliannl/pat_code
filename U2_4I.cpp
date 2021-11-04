#include<stdio.h>
#include<math.h>
using namespace std;
int main() {
	double sum, A[21];
	A[0] = 1, A[1] = 2, sum = A[1] / A[0];
	for (int i=2; i<=20; i++){
		A[i] = A[i-1] + A[i-2]; 
		sum += A[i]/A[i-1];
	}
	printf("%.6f\n", sum);
	return 0;
}
