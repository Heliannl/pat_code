#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

/*ע�⣺1. ��������ƽṹ������Ҫ�㹻��
2.�ж��Ǻ�'0'������0 
*/

char mod(char str[]){
	int div, temp=0;
	for(int i=0; i<strlen(str); i++){
		div=((str[i]-'0')+temp*10)/2;
		temp=((str[i]-'0')+temp*10)%2;
		str[i]=div+'0';
	}
	return temp+'0';
}

int isEmpty(char str[]){
	int i;
	for(i=0; i<strlen(str); i++){
		if(str[i]!='0')
			return 0;
	}
	if(i==strlen(str))
		return 1;
}

int main(){
	char str[35], res[200]="";
	int i;
	while(scanf("%s", str)!=EOF){
		i=0;
		do{
			res[i++]=mod(str);	
		}while(!isEmpty(str));
		res[i]='\0';
		for(int i=strlen(res)-1; i>=0; i--)
			printf("%c", res[i]);
		printf("\n");
	}
	return 0;
}
