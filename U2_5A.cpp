#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
int main() {
	int a[10];
	for (int i=0; i<10; i++)
		scanf("%d", &a[i]);
	for (int i=9; a[i]<a[i-1]; i--){
		int temp = a[i];
		a[i] = a[i-1];
		a[i-1] = temp;
	}
	for (int i=0; i<10; i++)
		printf("%d\n", a[i]);
	return 0;
} 
