#include <iostream>
#include <vector>
using namespace std;

int main() {
	freopen("codechef_oct_2019_a_marm.txt","r",stdin);
	int N,K;
	int arr[500000];
	scanf("%d %d",&N,&K);
	for(int n=0;n<N;n++){
	    scanf("%d",&arr[n]);
	}
	int i=1,j=0,k=0;
	
	K-=2;
	
	while(K>0 && i<=N){
	    if(arr[i-1]!=i){
	        K--;
	    }
	    printf("%d ",i);
	    i++;
	}
	
	for(j=0;j<N;j++){
	    if(arr[j]>=i) printf("%d ",arr[j]);
	}
}
