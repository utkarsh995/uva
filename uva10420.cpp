#include<iostream>
#include<map>
#include<string>
#include <sstream>
using namespace std;

int main(){
    freopen("inp10420.txt","r",stdin);
    int T;
    scanf("%d\n",&T);
    map<string,int> mp;
    for(int t=0;t<T;t++){
        string line;
        getline(cin,line);
        stringstream ss(line);
        string country;
        ss>>country;
        if(mp.find(country)==mp.end()){
            mp[country]=1;
        }
        else{
            mp[country]=mp[country]+1;
        }
    }

    for(map<string,int>::iterator it=mp.begin();it!=mp.end();it++){
        cout<<(it->first)<<" "<<it->second<<endl;
    }
}