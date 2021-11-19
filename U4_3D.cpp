#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;


const int maxn=11;
int n, m, co=1, P[maxn], hashTable[maxn]={false}, res[100];
void generateP(int index){
	if(index==9){
		int temp=0;
		for(int y=1; y<=8; y++)
			temp=temp*10+P[y];
		res[co++]=temp;
		return;
	}
	for(int x=1; x<=8; x++){
		if(hashTable[x]==false){
			bool flag=true;
			for(int pre=1; pre<index; pre++){
				if(abs(index-pre)==abs(x-P[pre])){
					flag=false;
					break;
				}
			}
			if(flag){
				P[index]=x;
				hashTable[x]=true;
				generateP(index+1);
				hashTable[x]=false; 
			}
		}
	}
}

int main(){
	generateP(1);
	sort(res+1, res+93);
	scanf("%d", &n);
	while(n--){
		scanf("%d", &m);
		printf("%d\n", res[m]);
	}
}
