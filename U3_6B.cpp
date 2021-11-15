#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
/*1.cin.hetline(str,105)不用加!=EOF
2.puts()会自动换行
3.str[0]也需要先判断是否为小写再转换*/
 
int main(){
	char str[105];
	while(cin.getline(str, 105)){
		int len=strlen(str);
		if(str[0]>='a' && str[0]<='z')
			str[0]=str[0]-'a'+'A';
		for(int i=1; i<len; i++){
			if(str[i]==' '||str[i]=='\t'||str[i]=='\r'){
				if(str[i+1]>='a' && str[i+1]<='z')
					str[i+1]=str[i+1]-'a'+'A';
			}
		}
		puts(str);
	}
	
	return 0;
}
