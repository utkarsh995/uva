#include<iostream>
#include<cstring>
using namespace std;
int main(){
    freopen("inp10921.txt","r",stdin);
    char str[31],ans[31];
    char* dic="22233344455566677778889999";
    while (scanf("%s",str)!=EOF)
    {
        int n=0;
        memset(ans,0,sizeof ans);
        while(str[n]){
            char c=str[n];
            if(c>='A' && c<='Z') ans[n++]=dic[c-'A'];
            else ans[n++]=c;
        }    
        printf("%s\n",ans);
    }    
    return 0;
}