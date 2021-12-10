#include<stdio.h>
#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int ma, mi, maxTemp, minTemp;
void input(int& n, queue<int>& q){
	while(!q.empty())
		q.pop();
	q.push(n);
	mi=n, ma=n;
	for(int i=1; i<10; i++){
		scanf("%d", &n);
		q.push(n);
		if(n>ma)
			ma=n;
		if(n<mi)
			mi=n;
	}
	minTemp=q.front();
	maxTemp=q.back();
}

void print(queue<int> q){
	while(!q.empty()){
		printf("%d ", q.front());
		q.pop();
	}
	printf("\n");
}

void deal(queue<int>& q){
	queue<int> temp;
	temp.push(mi);
	q.pop();
	for(int i=1; i<9; i++){
		if(q.front()==mi)
			q.front()=minTemp;
		temp.push(q.front());
		q.pop();
	}
	temp.push(ma);
	while(!q.empty()){
		q.pop();
	}
	temp.pop(); 
	q.push(mi);
	for(int i=1; i<9; i++){
		if(temp.front()==ma)
			temp.front()=maxTemp;
		q.push(temp.front());
		temp.pop();
	}
	q.push(ma);
}

int main(){
	int num;
	while(scanf("%d", &num)!=EOF){
		queue<int> qu;
		input(num, qu);
		deal(qu);
		print(qu);
	}
	return 0;
}
