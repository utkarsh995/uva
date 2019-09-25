#include<iostream>
#include<cstring>
using namespace std;
#define itera(n) (n>11)?(n%12):n

int geti(char* str){
    int val=-1;
    if(str[0]=='C') val=str[1]=='#'? 1: 0;
    if(str[0]=='D') val=str[1]=='#'? 3: 2;
    if(str[0]=='E') val=4;
    if(str[0]=='F') val=str[1]=='#'? 6: 5;
    if(str[0]=='G') val=str[1]=='#'? 8: 7;
    if(str[0]=='A') val=str[1]=='#'? 10: 9;
    if(str[0]=='B') val=11;

    return val;
}

char* getstr(int i){

    char* ans;
    switch (i)
    {
    case 0:
        ans="C";
        break;
    case 1:
        ans="C#";
        break;
    case 2:
        ans="D";
        break;
    case 3:
        ans="D#";
        break;
    case 4:
        ans="E";
        break;
    case 5:
        ans="F";
        break;
    case 6:
        ans="F#";
        break;
    case 7:
        ans="G";
        break;
    case 8:
        ans="G#";
        break;
    case 9:
        ans="A";
        break;
    case 10:
        ans="A#";
        break;    
    default:
        ans="B";
        break;
    }

    return ans;
}

int main(){
    freopen("uva10528/inp10528.txt","r",stdin);
    freopen("uva10528/out10528.txt","w",stdout);

    int arr[12][12];
    memset(arr,0,sizeof arr);
    int skip[5]={1,3,6,8,10};
    for(int i=0;i<12;i++){
        for(int j=0;j<5;j++){
            int n=i+skip[j];
            arr[itera(n)][i]=1;
        }
    }

    
    char ans[12];
    while(true){
        char line2[1002];
        char* line=line2;
        fgets(line,1002,stdin);
        memset(ans,0,sizeof ans);
        char word[3];
        int pos=0;
        while(sscanf(line,"%s %n",&word,&pos)>0){
            line=line+pos;
            if (word[0]=='E' && word[1]=='N' && word[2]=='D')
            {
                return 0;
            }
            int ind=geti(word);
            for(int i=0;i<12;i++){
                if(arr[ind][i]) ans[i]=1;
            }            
        }
        int n=0;
        for(int i=0;i<12;i++){
            if(ans[i]==0) n++;
        }
        for(int i=0;i<12;i++){
            if(ans[i]==0) {
                printf("%s",getstr(i));
                if(--n) printf(" ");
            }
        }
        printf("\n");
    }
}