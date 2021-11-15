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
		//注：gets()函数会读取换行符（读取了换行符就不会读取后面的内容）
		/*当我们输入回车键时是输入了换行回车两个字符进去的，先输入回车字符后输入换行字符
		但是gets()函数不接受回车字符，把它当作结束符，即遇到回车就读取之前的数据
		后面的换行符并没有读取，后面的gets()函数就会读取换行符，且把它转换为终止符
		一般使用getchar()接受换行符 
		*/ 
		getchar();
	}
	return 0;
}
