#include<iostream>
using namespace std;

int main(){
    freopen("imptmp1.txt","w",stdout);

    cout<<1<<"\n";
    cout<<"99999 99999\n";

    for(int i=1;i<100000;i++){
        if(i&1) cout<<(0-i)<<" ";
        else cout<<(i)<<" ";
    }
    cout<<"\n";
    for(int i=1;i<100000;i++){
        if(i&1) cout<<(i)<<" ";
        else cout<<(0-i)<<" ";
    }

    return 0;
}