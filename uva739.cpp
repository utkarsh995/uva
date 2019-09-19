#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){

freopen ("inp739.txt","r",stdin);
freopen ("out739.txt","w",stdout);

string line;
int dic[26];
memset(dic,0, sizeof dic);
dic['B'-'A']=1;dic['P'-'A']=1;dic['F'-'A']=1;dic['V'-'A']=1;
dic['C'-'A']=2;dic['S'-'A']=2;dic['K'-'A']=2;dic['G'-'A']=2;
dic['J'-'A']=2;dic['Q'-'A']=2;dic['X'-'A']=2;dic['Z'-'A']=2;
dic['D'-'A']=3;dic['T'-'A']=3;dic['L'-'A']=4;
dic['M'-'A']=5;dic['N'-'A']=5;dic['R'-'A']=6;

cout<<"         NAME                     SOUNDEX CODE"<<endl;
while(getline(cin, line)) {
    string ans="";
    ans+=line[0];

    for(int i=1;i<line.length() && ans.length()<4;i++){
        if(dic[line[i]-'A']==0) continue;
        if(dic[line[i]-'A']==dic[line[i-1]-'A']) continue;
        ans+=(char) (dic[line[i]-'A']+'0');
    }
    while(ans.length()<4) ans+='0';
    cout<<"         "<<line;
    for(int i=10+line.length();i<35;i++) cout<<" ";
    cout<<ans<<endl;
}

cout<<"                   END OF OUTPUT"<<endl;

return 0;
}