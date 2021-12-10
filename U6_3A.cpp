#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>
using namespace std;

long long deal(string str, int& aa){
	int fg=0, bb=0, cc=0;
	long long ss=0; 
	for(int i=0; i<str.length(); i++){
		if(str[i]=='-')
			fg=1;
		else if(str[i]=='.')
			cc=1;
		else if(str[i]=='e' || str[i]=='E'){
			if(str[i+1]=='-'){
				string temp=str.substr(i+2,str.length()-i-2);
				for(int i=0; i<temp.length(); i++)
					bb=bb*10+(temp[i]-'0');
				bb=-bb;
			}
			else{
				string temp=str.substr(i+1,str.length()-i-1);
				for(int i=0; i<temp.length(); i++)
					bb=bb*10+(temp[i]-'0');
			}
			aa+=bb;
			break;
		}
		else{
			ss=ss*10+str[i]-'0';
			aa-=cc;
		}
	}
	if(fg==1)
		ss=-ss;
	return ss;
}

int main(){
	string str1, str2;
	int a, a1, a2, flag, w;
	long long s, s1, s2, ans;
	while(cin>>str1>>str2){
		a=a1=a2=flag=w=0;
		s1=deal(str1, a1);
		s2=deal(str2, a2);
		if(a1<a2){
			for(;a1<a2;a2--)
				s2*=10;
		}else if(a1>a2){
			for(;a2<a1;a1--)
				s1*=10;
		}
		a=a1;
		s=s1+s2;
		if(!s){
			printf("0\n");
			continue;
		}
		while(a<0 && s%10==0){
			s/=10;
			a++;
		}
		if(a>=0){
			printf("%lld", s);
			for(int i=0; i<a; i++)
				printf("0");
			printf("\n");
			continue;
		}
		flag=0;
		if(s<0){
			s=-s;
			flag=1;
		}
		ans=1;
		w=0;
		while(ans<=s){
			ans*=10;
			w++;
		} 
		if(ans>1){
			ans/=10;
			w--;
		}
		if(flag)
			printf("-");
		printf("%lld", s/ans);
		if(ans>1){
			printf(".");
			char t[50]="";
			for(int i=w; i>=0; i--){
				t[i]=s%10+'0';
				s/=10;
			}
			for(int i=1; i<10 && i<strlen(t); i++)
				printf("%c", t[i]);
		}
		
		printf("e%d\n", a+w);
	}
	return 0;
}
