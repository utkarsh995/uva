#include<iostream>
using namespace std;

int main(){

    freopen("inp10812.txt","r",stdin);
    int s,d,a2,b2,a,b,T;

    scanf("%d\n",&T);

    for(int t=0;t<T;t++){
        scanf("%d %d\n",&s,&d);

        if(s<d) {printf("impossible\n");continue;}
        a2=s+d;
        if(a2&1) {printf("impossible\n");continue;}
        b2=s-d;
        if(b2&1) {printf("impossible\n");continue;}
        printf("%d %d\n",a2/2,b2/2);
    }
    return 0;
}