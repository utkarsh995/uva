#include<iostream>
using namespace std;

int sameX(char* r1, char* r2, char* r3, char c){
    int same=0;
    if(r1[0]==r1[1] && r1[1]==r1[2] && r1[0]==c) same++;
    if(r2[0]==r2[1] && r2[1]==r2[2] && r2[0]==c) same++;
    if(r3[0]==r3[1] && r3[1]==r3[2] && r3[0]==c) same++;
    if(r1[0]==r2[0] && r1[0]==r3[0] && r1[0]==c) same++;
    if(r1[1]==r2[1] && r1[1]==r3[1] && r1[1]==c) same++;
    if(r1[2]==r2[2] && r1[2]==r3[2] && r1[2]==c) same++;
    if(r1[0]==r2[1] && r1[0]==r3[2] && r1[0]==c) same++;
    if(r1[2]==r2[1] && r1[2]==r3[0] && r1[2]==c) same++;
    return same;
}

int main(){
    freopen("inp10363.txt","r",stdin);
    freopen("out10363.txt","w",stdout);
    char r1[5],r2[5],r3[5];
    int T;
    scanf("%d",&T);
    for(int t=0;t<T;t++){
        if(t==9953) 
            int xx=0;
        scanf("%s\n%s\n%s\n",&r1,&r2,&r3);
        int samex=sameX(r1,r2,r3,'X');
        int sameo=sameX(r1,r2,r3,'O');
        int same=samex+sameo;
        int nX=0,nO=0;
        for(int i=0;i<3;i++){
            if(r1[i]=='O') nO++;
            if(r2[i]=='O') nO++;
            if(r3[i]=='O') nO++;

            if(r1[i]=='X') nX++;
            if(r2[i]=='X') nX++;
            if(r3[i]=='X') nX++;
        }
        if((nX-nO)<0 || (nX-nO)>1) {
            printf("no\n");
            continue;
        }

        if((sameo>0 && nX>nO)||(samex>0 && nO==nX)){
            printf("no\n");
            continue;
        }

        printf("yes\n");
    }
    return 0;
}