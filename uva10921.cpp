#include<iostream>
#include<cstring>
using namespace std;
int main(){
    freopen("inp10921.txt","r",stdin);
    char str[31],ans[31];
    while (scanf("%s",str)!=EOF)
    {
        int n=0;
        memset(ans,0,sizeof ans);

        while(str[n]){
            char c=str[n];

            switch (c)
            {
            case 'A': ans[n++]='2';
                      break;
            case 'B': ans[n++]='2';
                      break;
            case 'C': ans[n++]='2';
                      break;
            case 'D': ans[n++]='3';
                      break;
            case 'E': ans[n++]='3';
                      break;
            case 'F': ans[n++]='3';
                      break;
            case 'G': ans[n++]='4';
                      break;
            case 'H': ans[n++]='4';
                      break;
            case 'I': ans[n++]='4';
                      break;
            case 'J': ans[n++]='5';
                      break;
            case 'K': ans[n++]='5';
                      break;
            case 'L': ans[n++]='5';
                      break;
            case 'M': ans[n++]='6';
                      break;
            case 'N': ans[n++]='6';
                      break;
            case 'O': ans[n++]='6';
                      break;
            case 'P': ans[n++]='7';
                      break;
            case 'Q': ans[n++]='7';
                      break;
            case 'R': ans[n++]='7';
                      break;
            case 'S': ans[n++]='7';
                      break;
            case 'T': ans[n++]='8';
                      break;
            case 'U': ans[n++]='8';
                      break;
            case 'V': ans[n++]='8';
                      break;
            case 'W': ans[n++]='9';
                      break;
            case 'X': ans[n++]='9';
                      break;
            case 'Y': ans[n++]='9';
                      break;
            case 'Z': ans[n++]='9';
                      break;
            
            default: ans[n++]=c;
                break;
            }
        }
        printf("%s\n",ans);
    }
    
    return 0;
}