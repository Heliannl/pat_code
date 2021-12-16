#include<stdio.h>
#include<iostream>
#include<stack>
#include<string> 
using namespace std;

int main(){
	string str;
	string::iterator it;
	int n, flag;
	stack<char> st;
	while(scanf("%d", &n)!=EOF){
		getchar();
		while(n--){
			getline(cin,str);
			for(it=str.begin(); it!=str.end();){
				if(*it!='(' && *it!=')' && *it!='[' && *it!=']' && *it!='{' && *it!='}')
					str.erase(it);
				else
					it++;
			}
			if(str.length()==0){
				printf("no\n");
				continue;
			}
			while(!st.empty())
				st.pop();
			flag=true;
			for(it=str.begin(); it!=str.end(); it++){
				if(*it=='(' || *it=='[' || *it=='{')
					st.push(*it);
				else if(*it==')'){
					if(st.empty() || st.top()!='('){
						printf("no\n");
						flag=false;
						break;
					}
					else
						st.pop();
				}
				else if(*it==']'){
					if(st.empty() || st.top()!='['){
						printf("no\n");
						flag=false;
						break;
					}
					else
						st.pop();
				}
				else if(*it=='}'){
					if(st.empty() || st.top()!='{'){
						printf("no\n");
						flag=false;
						break;
					}
					else
						st.pop();
				}
			}
			if(st.empty() && flag==true)
				printf("yes\n");
			if(!st.empty() && flag==true)
				printf("no\n");
		}
	}
	return 0;
}
