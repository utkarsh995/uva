#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
    freopen ("input_uva573.txt","r",stdin);
    while(true){
        int H,D,U,F;
        scanf("%d",&H);scanf("%d",&U);scanf("%d",&D);scanf("%d",&F);
        if(H==0) break;
        double cur=0,u=U,f=u*(F)/100.0;
        int day=0;
        do{
            day++;
            if(u>0)
                cur=cur+u;
            if(cur>H) break;
            cur-=D;
            if(cur<0.0) break;
            if(u>0)
                u=u-f;
        }
        while(cur>=0.0 && cur<=H);

        if(cur>H) printf("success on day %d\n",day);
        else printf("failure on day %d\n",day);

    }
}