#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define LF(a,b) a<b?a:b
#define HF(a,b) a>b?a:b

bool compareVectors(vector<double> v1, vector<double> v2) {
    return v1[0]<v2[0];
}

int main(){

    freopen ("inp837.txt","r",stdin);
    freopen ("out837.txt","w",stdout);
    int T,t;

    scanf("%d",&T);

    for(t=0;t<T;t++){
        double x1,x2,y1,y2,r;
        int N;
        scanf("%d",&N);
        vector<double> tmp(3,0);
        vector<vector<double>> mat(2*N,tmp);
        for(int n=0;n<N;n++) {
            scanf("%lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&r);
            mat[2*n][0]=LF(x1,x2);
            mat[2*n][1]=0;
            mat[2*n][2]=r;

            mat[2*n+1][0]=HF(x1,x2);
            mat[2*n+1][1]=1;
            mat[2*n+1][2]=r;
        }

        sort(mat.begin(), mat.end(),compareVectors);

        printf("%d\n",2*N+1);
        printf("-inf %.3lf %.3lf\n",mat[0][0],1.000);
        r=1.0;
        for(int n=1;n<2*N;n++){
            printf("%.3lf ",mat[n-1][0]);
            printf("%.3lf ",mat[n][0]);
            if(mat[n-1][1]==0) r*=mat[n-1][2];
            else r/=mat[n-1][2];
            printf("%.3lf\n",r);
        }
        printf("%.3lf ",mat[2*N-1][0]);
        if(t!=T-1)
            printf("+inf 1.000\n\n");
        else
            printf("+inf 1.000\n");
    }

    return 0;
}
