#include<iostream>
#include<stdio.h>
#include<string>
#include<stack>
#include<queue>
#include<map>
using namespace std;

struct node{
	double num;
	char op;
	bool flag;
};

string str;
stack<node> st;
queue<node> q;
map<char,int> op;

void change(){
	node temp;
	for(int i=0; i<str.length();){
		if(str[i]>='0' && str[i]<='9'){
			temp.flag=true;
			temp.num=str[i++]-'0';
			while(i<str.length() && str[i]>='0' && str[i]<='9')
				temp.num=temp.num*10+str[i++]-'0';
			q.push(temp);
		}else{
			temp.flag=false;
			while(!st.empty() && op[str[i]]<=op[st.top().op]){
				q.push(st.top());
				st.pop();
			}
			temp.op=str[i];
			st.push(temp);
			i++;
		}
	}
	while(!st.empty()){
		q.push(st.top());
		st.pop();
	}
}

double cal(){
	double num1, num2;
	node cur, temp;
	while(!q.empty()){
		cur=q.front();
		q.pop();
		if(cur.flag==true)
			st.push(cur);
		else{
			num2=st.top().num;
			st.pop();
			num1=st.top().num;
			st.pop();
			temp.flag=true;
			if(cur.op=='+')
				temp.num=num1+num2;
			else if(cur.op=='-')
				temp.num=num1-num2;
			else if(cur.op=='*')
				temp.num=num1*num2;
			else
				temp.num=num1/num2;
			st.push(temp);
		}
	}
	return st.top().num;
}

int main(){
	op['+']=op['-']=1;
	op['*']=op['/']=2;
	while(getline(cin,str), str!="0"){
		string::iterator it;
		for(it=str.begin(); it!=str.end(); it++){
			if(*it==' ')
				str.erase(it);
		}
		while(!st.empty())
			st.pop();
		change();
		printf("%.2f\n", cal());
	}
	return 0;
}
