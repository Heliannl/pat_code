#include<stdio.h>
#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

const int maxn=5005;
int num[maxn];

int randPartition(int A[], int left, int right){
	int p=round(1.0*rand()/RAND_MAX*(right-left)+left);
	swap(A[p], A[left]);
	int temp=A[left];
	while(left<right){
		while(right>left && A[right]>temp)
			right--;
		A[left]=A[right];
		while(left<right && A[left]<=temp)
			left++;
		A[right]=A[left];
	}
	A[left]=temp;
	return left;
}

void quickSort(int A[], int left, int right){
	if(left<right){
		int pos=randPartition(A, left, right);
		quickSort(A, left, pos-1);
		quickSort(A, pos+1, right);
	}
}

int main(){
	int n;
	while(scanf("%d", &n)!=EOF){
		for(int i=0; i<n; i++)
			scanf("%d", &num[i]);
		quickSort(num, 0, n-1);
		for(int i=0; i<n; i++)
			printf("%d\n", num[i]);
	}
	return 0;
} 
