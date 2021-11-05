#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

void input(int *a){
	for (int i=0; i<10; i++)
		scanf("%d", a+i);
}

void swap(int *a){
	int max = *a, min = *(a+9), mic = 0, mxc = 9;
	for (int i=0; i<10; i++){
		if (*(a+i)<min){
			min = *(a+i);
			mic = i;
		}	
		if (*(a+i)>max){
			max = *(a+i);
			mxc = i;
		}
	}
	int temp = *a;
	*a = *(a+mic);
	*(a+mic) = temp;
	temp = *(a+9);
	*(a+9) = *(a+mxc);
	*(a+mxc) = temp;
} 

void print(int *a){
	for (int i=0; i<10; i++)
		printf("%d ", *(a+i));
	printf("\n");
}

int main(){
	int a[10];
	int *p = a;
	input(p);
	swap(p);
	print(p);
	return 0;
}
