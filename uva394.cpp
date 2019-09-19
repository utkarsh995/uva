#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
    string line="";
    while(getline(cin,line)){
        int ini=0;
        int space=0;
        while(ini<line.length()){
            space=line.find(" ",ini);
            for(int i=(space!=string::npos)?space-1:line.length()-1;i>=ini;i--){
                printf("%c",line[i]);
            }
            ini=space+1;
            if (space==string::npos)
                break;
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }

    return 0;
}