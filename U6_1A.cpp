#include<stdio.h>
#include<vector>
#include<string.h>
using namespace std;

struct stuInfo{
	char name[5];
	vector<int> cour_list;
};

int main(){
	int n, k, i;  //‘À––≥¨œﬁ 
	while(scanf("%d %d", &n, &k)!=EOF){
		stuInfo stu[n];
		int num=0;
		char str[5];
		while(k--){
			int x, y;
			scanf("%d %d", &x, &y);
			while(y--){
				scanf("%s", str);
				for(i=0; i<num; i++){
					if(strcmp(str, stu[i].name)==0){
						vector<int>::iterator a=stu[i].cour_list.end()-1;
						if(x>*(a))
							stu[i].cour_list.push_back(x);
						else
							stu[i].cour_list.insert(a,x);
						break;
					}		
				}
				if(i==num){
					strcpy(stu[num].name, str);
					stu[num++].cour_list.push_back(x);
				}
			}
		}
		while(n--){
			scanf("%s", str);
			for(i=0; i<num; i++){
				if(strcmp(str, stu[i].name)==0){
					printf("%s %d", str, stu[i].cour_list.size());
					for(int it=0; it<stu[i].cour_list.size(); it++)
						printf(" %d", stu[i].cour_list[it]);
					printf("\n");
					break; 
				}
			}
			if(i==num)
				printf("%s 0\n", str);
		}
	} 
	return 0;
}
