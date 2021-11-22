#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

const int maxn=200;
int num[maxn], temp[maxn];

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
	int n, x, ans;
	while(scanf("%d", &n)!=EOF){
		for(int i=0; i<n; i++){
			scanf("%d", &num[i]);
			temp[i]=num[i];
		}	
		sort(temp, temp+n);
		scanf("%d", &x);
		ans=binarySearch(temp, 0, n-1, x);
		if(ans==-1)
			printf("-1\n");
		else{
			for(int i=0; i<n; i++){
				if(num[i]==temp[ans]){
					printf("%d\n", i);
					break;
				}
			}
		}
	}
	return 0;
}
