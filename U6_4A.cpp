#include<stdio.h>
#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	string str, temp="";
	while(getline(cin,str)){
		map<string, int> mp;
		transform(str.begin(),str.end(),str.begin(),::tolower);
		for(int i=0, num=0; i<str.length(); i++){
			if(isalnum(str[i])){
				num++;
				if(i==str.length()-1){
					temp=str.substr(i-num+1,num);
					if(temp!=""){
						if(mp.find(temp)==mp.end())
							mp[temp]=1;
						else
							mp[temp]++;
						num=0;
						temp="";
					}
				}	
			}
			else{
				temp=str.substr(i-num,num);
				if(temp!=""){
					if(mp.find(temp)==mp.end())
						mp[temp]=1;
					else
						mp[temp]++;
					num=0;
				}
			}	
		}
		map<string, int>::iterator max=mp.begin(), it=mp.begin();
		for(; it!=mp.end(); it++){
			if(max->second<it->second)
				max=it;
		}
		cout<<max->first<<" "<<max->second<<endl;
	}
	return 0;
}
