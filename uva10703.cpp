#include<iostream>
using namespace std;

#define MIN(a,b) (a<b)?a:b
#define MAX(a,b) (a>b)?a:b

int main(){
    freopen("inp10703.txt","r",stdin);
int W,H,N,X1,X2,Y1,Y2,x1,x2,y1,y2;
int mat[500][500];
while(true){
    scanf("%d %d %d\n",&W,&H,&N);
    if((W|H|N)==0) break;
    for(int h=0;h<H;h++){
        for(int w=0;w<W;w++){
            mat[h][w]=0;
        }
    }
    for(int n=0;n<N;n++){
        scanf("%d %d %d %d\n",&X1,&Y1,&X2,&Y2);
        X1--;X2--;Y1--;Y2--;
        x1=MIN(X1,X2);x2=MAX(X1,X2);y1=MIN(Y1,Y2);y2=MAX(Y1,Y2);
        for(int y=y1;y<=y2;y++){
            for(int x=x1;x<=x2;x++){
                mat[y][x]=1;
            }
        }
    }
    int cnt=0;
    for(int y=0;y<H;y++){
        for(int x=0;x<W;x++){
            if(mat[y][x]==0)cnt++;
        }
    }
    if(cnt==0) printf("There is no empty spots.\n");
    else if (cnt==1) printf("There is one empty spot.\n");
    else printf("There are %d empty spots.\n",cnt);
}
return 0;
}