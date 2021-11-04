#include<stdio.h>
#include<math.h>
using namespace std;
int main() {
	int N, A[50]; 
	scanf("%d", &N);
	A[0] = A[1] =1;
	for (int i=2; i<50; i++)
		A[i] = A[i-1] + A[i-2];
	printf("%d\n", A[N-1]); 
	return 0;
}
