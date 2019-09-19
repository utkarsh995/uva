#include<iostream>
using namespace std;

int main(){
    freopen("inp10281.txt","r",stdin);
    long long int h,m,s,sp;
    char st[100];
    long long int curSpeed=0,oldTime=0;
    double dist=0.0;
    while(fgets(st,100,stdin))
    {
        sp=-1;
        sscanf(st,"%lld:%lld:%lld %lld",&h,&m,&s,&sp);
        long long int curTime=60*(60*h+m)+s;
        if(sp!=-1){
            dist+=curSpeed*(curTime-oldTime)*1.0/3600;
            oldTime=curTime;
            curSpeed=sp;
        }
        else{
            double curDist=dist+curSpeed*(curTime-oldTime)*1.0/3600;
            printf("%02lld:%02lld:%02lld %.2lf km\n",h,m,s,curDist);
        }
    }
    return 0;
}