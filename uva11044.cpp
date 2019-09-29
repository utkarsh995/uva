#include<iostream>
using namespace std;

int main(){
    freopen("inp11044.txt","r",stdin);
    int T;
    scanf("%d",&T);

    while(T--){
        int a,b,i,j;
        scanf("%d %d",&a,&b);
        a=a-2;
        b=b-2;
        i=(a%3)?a/3+1:a/3;
        j=(b%3)?b/3+1:b/3;
        printf("%d\n",i*j);
    }
}