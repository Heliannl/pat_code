#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
	char s[105], a[105], b[105], word[105][105];
	while(cin.getline(s,105)){
		int len=strlen(s), r=0, h=0;
		scanf("%s %s", a, b);
		for(int i=0; i<len; i++){
			if(s[i]!=' ')
				word[r][h++]=s[i];
			else{
				word[r][h]='\0';
				r++;
				h=0;
			}
		}
		word[r][h]='\0';
		for(int i=0; i<=r; i++){
			if(strcmp(word[i], a)==0) 	
				printf("%s", b);
			else
				printf("%s", word[i]);
			if(i==r)
				printf("\n");
			else
				printf(" ");
		}
		//ע��gets()�������ȡ���з�����ȡ�˻��з��Ͳ����ȡ��������ݣ�
		/*����������س���ʱ�������˻��лس������ַ���ȥ�ģ�������س��ַ������뻻���ַ�
		����gets()���������ܻس��ַ��������������������������س��Ͷ�ȡ֮ǰ������
		����Ļ��з���û�ж�ȡ�������gets()�����ͻ��ȡ���з����Ұ���ת��Ϊ��ֹ��
		һ��ʹ��getchar()���ܻ��з� 
		*/ 
		getchar();
	}
	return 0;
}
