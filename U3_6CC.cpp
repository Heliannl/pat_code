#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main()
{
	char str[50], s[300];
	cin.getline(str,50);
	int len=strlen(str);
	while(cin.getline(s,300)){
		int l=strlen(s);
		for(int i=0; i<l;){
			if(s[i]==' ')
				i++;
			else if(fabs(s[i]-str[0])==0 || fabs(s[i]-str[0])==32){
				int j;
				for(j=1; j<len&&j+i<l; j++){
					if(fabs(s[j+i]-str[j])!=0 && fabs(s[j+i]-str[j])!=32)
						break;	
				}
				if(j==len)
					i+=len;
				else{
					printf("%c", s[i]);
					i++;
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
