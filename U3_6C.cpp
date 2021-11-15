#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

char str[10], s[100];
int main()
{
	cin.getline(str,10);
	int len=strlen(str);
	while(cin.getline(s,100)){
		int l=strlen(s);
		if(l==0){
			printf("\n");
			continue; 
		} 
		for(int i=0; i<l;){
			if(s[i]==' ')
				i++;
			else if(fabs(s[i]-str[0])==0 || fabs(s[i]-str[0])==32)
			{
				int j, p=0;
				char temp[len+1]="";
				for(j=0; j<len&&j+i<l; j++){
					if(fabs(s[j+i]-str[j])==0 || fabs(s[j+i]-str[j])==32)
						temp[p++]=s[j+i];
					else
						break;		
				}
				if(j==len)
					i+=len;
				else{
					//错误的地方在这里 aab aaabaac->aaac 但会输出aaabaac 
					for(int m=0; m<p; m++)
						printf("%c", temp[m]);
					i+=p;
				}
			}
			else{
				printf("%c", s[i]);
				i++;
			}
		}
		printf("\n");
	}
	return 0;
}
