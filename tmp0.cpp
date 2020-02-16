#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define MAXN   100001 
  
// stores smallest prime factor for every number 
int spf[MAXN]; 
  
// Calculating SPF (Smallest Prime Factor) for every 
// number till MAXN. 
// Time Complexity : O(nloglogn) 
void sieve() 
{ 
    spf[1] = 1; 
    for (int i=2; i<MAXN; i++) 
  
        // marking smallest prime factor for every 
        // number to be itself. 
        spf[i] = i; 
  
    // separately marking spf for every even 
    // number as 2 
    for (int i=4; i<MAXN; i+=2) 
        spf[i] = 2; 
  
    for (int i=3; i*i<MAXN; i++) 
    { 
        // checking if i is prime 
        if (spf[i] == i) 
        { 
            // marking SPF for all numbers divisible by i 
            for (int j=i*i; j<MAXN; j+=i) 
  
                // marking spf[j] if it is not  
                // previously marked 
                if (spf[j]==j) 
                    spf[j] = i; 
        } 
    } 
} 
  
// A O(log n) function returning primefactorization 
// by dividing by smallest prime factor at every step 
vector<int> getPrimeFactorization(int x) 
{ 
    vector<int> ret; 
    while (x != 1) 
    { 
        ret.push_back(spf[x]); 
        x = x / spf[x]; 
    } 
    return ret; 
}

vector<int> getFactorsofSquare(int x){
    vector<int> primes=getPrimeFactorization(x);
    primes.insert(primes.end(),primes.begin(),primes.end());
    
    vector<long long int> ans(1,1);
    
    for(int i=0;i<primes.size();i++){
        int siz=ans.size();
        long long int p= (long long int) primes[i];
        for(int j=0;j<siz;j++){
            long long int a=p * ans[j];
            if(a>100000) continue;
            ans.push_back(a);
        }
        sort( ans.begin(), ans.end() );
        ans.erase( unique( ans.begin(), ans.end() ), ans.end() );
    }
    
    vector<int> ans2(ans.size(),0);
    for(int i=0;i<ans.size();i++) ans2[i]=(int) ans[i];
    
    return ans2;
}

int f1(vector<int>& v, vector<bool>& vpos, vector<bool>& vneg){
    int N=v.size();
    int ans=0;
    
    for(int i=0;i<N;i++){
        int x=v[i];
        if(x==0) continue;
        if(x<0) x=0-x;
        vector<int> factors=getFactorsofSquare(x);
        int N1=factors.size();
        long long int sq=x*x,y,z;
        for(int j=0;j<N1;j++){
            z=factors[j];
            y=sq/z;
            if(y>100000 || z>100000) continue;
            if(vpos[y] && vneg[z]) ans++;
        }
    }
    
    return ans;
}


int main() {
	// your code goes here
	freopen("inptmp0.txt","r",stdin);
	int T;
	scanf("%d",&T);
	sieve();
	while(T--){
	    int N1,N2;
	    cin>>N1>>N2;
	    vector<int> v1(N1,0),v2(N2,0);
		vector<bool> vpos1(100001,0),vneg1(100001,0),vpos2(100001,0),vneg2(100001,0);
	    
	    for(int i=0;i<N1;i++){
	        scanf("%d",&v1[i]);
	        if(v1[i]>=0) vpos1[v1[i]]=1;
	        else vneg1[0-v1[i]]=1;
	    }
	    
	    for(int i=0;i<N2;i++){
	        scanf("%d",&v2[i]);
	        if(v2[i]>=0) vpos2[v2[i]]=1;
	        else vneg2[0-v2[i]]=1;
	    }
	    
	    int ans=0;
	    ans+=f1(v1,vpos2,vneg2);
	    ans+=f1(v2,vpos1,vneg1);
	    
	    if(vpos1[0]) ans+=(N1-1)*N2;
	    if(vpos2[0]) ans+=(N2-1)*N1;
	    
	    cout<<ans<<endl;
	    
	}
	return 0;
}
