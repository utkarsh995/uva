#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main(){
    freopen ("test_uva661.txt","r",stdin);

    int n,m,c,t=0;
    int arr[20];
    int mat[20];

    while(true){
        t++;
        scanf("%d",&n);scanf("%d",&m);scanf("%d",&c);
        if((n|m|c)==0) break;
        memset(arr,0,sizeof arr);
        int ma=0,j,k=0;
        for(int i=0;i<n;i++){
            scanf("%d",&mat[i]);
        }

        for(int i=0;i<m;i++){
            scanf("%d",&j);
            j--;
            if(arr[j]==0){
                k+=mat[j];
                arr[j]=1;
                if(k>ma) ma=k;
            }
            else{
                k-=mat[j];
                arr[j]=0;
            }
        }

        printf("Sequence %d\n",t);
        if(ma>c){
            printf("Fuse was blown.\n\n");
        }
        else{
            printf("Fuse was not blown.\nMaximal power consumption was %d amperes.\n\n",ma);
        }
    }
}