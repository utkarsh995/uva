#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    freopen("inp10082.txt","r",stdin);
    string ss="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    unordered_map<char,char> map;
    int N=ss.length();

    for(int i=1;i<N;i++) {
        map[ss[i]]=ss[i-1];        
    }
    map[' ']=' ';
    string line;
    while(getline(cin,line)){
        N=line.length();

        for(int i=0;i<N;i++){
            printf("%c",map[line[i]]);
        }
        printf("\n");
    }
}