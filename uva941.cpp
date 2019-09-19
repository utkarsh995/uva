#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
long long int fact[21];
long long int f1(int n) {
    if(fact[n]!=-1) return fact[n];
    long long int ans= 1;
    while(n>0) ans=ans*n--;
    fact[n]=ans;
    return ans;
    }

char g1(int* arr, int k){
    int i=0,j;
    while(k>=0){
        j=arr[i++];
        if(j!=0) k--;
    }
    arr[--i]=0;
    return j;
}

int main(){
    freopen("inp941.txt","r",stdin);
    memset(fact,-1,sizeof fact);
    int T;
    long long int x;
    scanf("%d",&T);

    for(int t=0;t<T;t++){
        char s[21];
        // scanf("%s",&s);
        // scanf("%lld",&x);
        scanf("%s\n%lld",&s,&x);
        int i=0,siz=0,arr[20];
        for(i=0;s[i]!=0;i++){
            arr[siz++]=s[i];
        }
        sort(arr,arr+siz);
        char ans[21];
        i=0;
        while(siz>0){
            long long int p=f1(siz-1);
            int j= x/p;
            ans[i++]=g1(arr,j);
            siz--;
            x=x-p*j;
        }
        ans[i]=0;
        
        printf("%s\n",ans);
    }

    return 0;
}