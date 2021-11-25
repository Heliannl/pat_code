#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<iostream>
#include<algorithm>
using namespace std;

const int maxn=1000005;
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

int randSelect(int A[], int left, int right, int K){
	if(left==right)
		return A[left];
	int p=randPartition(A, left, right);
	int M=p-left+1;
	if(M==K)
		return A[p];
	if(K<M)
		return randSelect(A, left, p-1, K);
	else
		return randSelect(A, p+1, right, K-M);
}

int main(){
	int m, n;
	while(scanf("%d %d", &m, &n)!=EOF){
		for(int i=0; i<m; i++)
			scanf("%d", &num[i]);
			//这里我不理解为什么不是n+1而是m-n+1 
			/*这道题中的第K大是指从大到小排序取第K个，书中的第K大是指从小到大排序取第K个
				因此按照书中的程序要求第m-n+1大*/ 
		printf("%d\n", randSelect(num, 0, m-1, m-n+1));
	}
	return 0;
}
