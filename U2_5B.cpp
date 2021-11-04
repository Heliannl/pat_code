#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
int main() {
	int a[10];
	for (int i=0; i<10; i++)
		scanf("%d", &a[i]);
	for (int i=0; i<5; i++) {
		int temp = a[i];
		a[i] = a[9-i];
		a[9-i] = temp;
	}
	for (int i=0; i<10; i++)
		printf("%d\n", a[i]);
	return 0;
} 
