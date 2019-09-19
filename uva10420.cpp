#include<iostream>
#include<map>
using namespace std;

int main(){
    freopen("inp10420.txt","r",stdin);
    int T;
    scanf("%d\n",&T);
    map<char*,int> mp;
    for(int t=0;t<T;t++){
        char line[77];
        fgets(line,75,stdin);
        char country[75];
        sscanf(line,"%s",country);
        if(mp.find(country)==mp.end()){
            mp[country]=1;
        }
        else{
            mp[country]=mp[country]+1;
        }
    }

    for(map<char*,int>::iterator it=mp.begin();it!=mp.end();it++){
        printf(it->first);
        printf(" %d\n",it->second);
    }
}