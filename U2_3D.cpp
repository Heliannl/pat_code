#include<stdio.h>
#include<math.h>
using namespace std;
int main(){
	int a, b, c, res;
	scanf("%d%d%d", &a, &b, &c);
	res = a > b ? a > c ? a : c : b < c ? c : b;
	printf("%d\n", res);
	return 0; 
}
