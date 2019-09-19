#include <iostream>
#include <cstring>
using namespace std;

int main() {
    freopen("inp10141_2.txt","r",stdin);
    freopen("out10141.txt","w",stdout);
    int N,P,Nmax,t=0;
    while(true){
        t++;
        scanf("%d %d\n",&N,&P);
        if((N|P)==0) break;
        char s[82];
        for(int i=0;i<N;i++) {
            fgets(s,82,stdin);
        }
        float f,fmax=-1.0;
        char smax[81];
        Nmax=-1;
        for(int i=0;i<P;i++) {
            fgets(s,82,stdin);
            scanf("%f %d\n",&f,&N);
            if(N>Nmax || (N==Nmax && f<fmax)) {
                strcpy(smax,s);
                fmax=f;
                Nmax=N;
            }
            while(N>0) {
                fgets(s,82,stdin);
                N--;
            }
        }
        if(t>1) printf("\n");
        printf("RFP #%d\n%s",t,smax);
    }
    return 0;
}