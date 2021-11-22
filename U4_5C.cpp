#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int binarySearch(int A[], int left, int right, int y){
	int mid;
	while(left<=right){
		mid=(left+right)/2;
		if(A[mid]==y)
			return mid;
		else if(A[mid]>y)	
			right=mid-1;
		else
			left=mid+1; 
	}
	return -1; 
}

int main(){
	int n, m, x;
	while(scanf("%d", &n)!=EOF){
		int num[n];
		for(int i=0; i<n; i++)
			scanf("%d", &num[i]);
		sort(num, num+n);
		scanf("%d", &m);
		while(m--){
			scanf("%d", &x);
			if(binarySearch(num, 0, n-1, x)==-1)
				printf("NO\n");
			else
				printf("YES\n");
		}
	}
	return 0;
}
