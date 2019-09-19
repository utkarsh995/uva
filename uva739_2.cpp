#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){

freopen ("inp739.txt","r",stdin);
freopen ("out739.txt","w",stdout);

char line[21];
int dic[26];
memset(dic,0, sizeof dic);
dic['B'-'A']=1;dic['P'-'A']=1;dic['F'-'A']=1;dic['V'-'A']=1;
dic['C'-'A']=2;dic['S'-'A']=2;dic['K'-'A']=2;dic['G'-'A']=2;
dic['J'-'A']=2;dic['Q'-'A']=2;dic['X'-'A']=2;dic['Z'-'A']=2;
dic['D'-'A']=3;dic['T'-'A']=3;dic['L'-'A']=4;
dic['M'-'A']=5;dic['N'-'A']=5;dic['R'-'A']=6;

printf("         NAME                     SOUNDEX CODE\n");
char ans[5];
while(scanf("%s",&line) != EOF) {
    int len=0;
    while(line[len]!=0) len++;    
    ans[0]=line[0];
    int lans=1;

    for(int i=1;i<len && lans<4;i++){
        if(dic[line[i]-'A']==0) continue;
        if(dic[line[i]-'A']==dic[line[i-1]-'A']) continue;
        ans[lans++]=(dic[line[i]-'A']+'0');
    }
    while(lans<4) ans[lans++]='0';
    printf("         %s",line);
    for(int i=10+len;i<35;i++) printf(" ");
    printf("%s\n",ans);
}

printf("                   END OF OUTPUT\n");

return 0;
}