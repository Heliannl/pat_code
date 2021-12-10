#include<stdio.h>
#include<iostream>
#include<queue>
#include<string>
#include<map>
using namespace std;

map<string, int> mp;
int range;
struct task{
	string name;
	int priority;
	friend bool operator < (const task &a, const task &b){
		if(a.priority!=b.priority)
			return a.priority<b.priority;
		return a.name>b.name;
	}
};

void deal(string str){
	string word, task0;
	int i=0;
	while(i<str.length() && str[i]!='('){
		word+=str[i];
		i++;
	}
	task0=word;
	if(mp.find(word)==mp.end())
		mp[word]=range--;
	word.clear();
	i++;
	while(i<str.length()){
		while(i<str.length() && str[i]!=',' && str[i]!=')'){
			word+=str[i];
			i++;	
		}
		if(word=="NULL")
			return;
		if(mp.find(word)!=mp.end())
			mp[word]=mp[word]<(mp[task0]-1)?mp[word]:mp[task0]-1;
		else
			mp[word]=mp[task0]-1;
		word.clear();
		i++;
	}
}

int main(){
	int n;
	priority_queue<task> q;
	string str;
	while(scanf("%d", &n)!=EOF){
		range=n;
		while(n--){
			cin>>str;
			deal(str);
		}
		for(map<string, int>::iterator it=mp.begin(); it!=mp.end(); it++){
			task t;
			t.name=it->first;
			t.priority=it->second;
			q.push(t);
			}
		while(!q.empty()){
			cout<<q.top().name;
			if(q.size()>1)
				cout<<" ";
			else
				cout<<endl;
			q.pop();
		}
	}
	return 0;
}
