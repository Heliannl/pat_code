#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
int main() {
	char str[100];
	scanf("%s", str);
	int l = strlen(str);
	for (int i=0; i<l; i++){
		if(str[i]>='A' && str[i]<='Z')
			str[i] = 'A' + 'Z' - str[i];
		else if(str[i]>='a' && str[i]<='z')
			str[i] = 'a' + 'z' - str[i];
	}
	printf("%s\n", str);
	return 0;
} 
