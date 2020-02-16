#include<iostream>
using namespace std;

int main(){
    freopen("inp11150.txt","r",stdin);
    int N;
    while(scanf("%d",&N)!=EOF){

        int ans=N;

        while(N>1){
            if(N==2) N=3;
            ans+=N/3;
            N=(N/3)+(N-3*(N/3));
        }

        printf("%d\n",ans);
    }
}