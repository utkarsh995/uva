#include <iostream>
#include <bits/stdc++.h>

typedef long long int ll;
#define const 1000000007

using namespace std;


// Returns modulo inverse of a with respect 
// to m using extended Euclid Algorithm 
// Assumption: a and m are coprimes, i.e., 
// gcd(a, m) = 1 
ll modInverse(ll a, ll m) 
{ 
    ll m0 = m; 
    ll y = 0, x = 1; 
  
    if (m == 1) 
      return 0; 
  
    while (a > 1) 
    { 
        // q is quotient 
        ll q = a / m; 
        ll t = m; 
  
        // m is remainder now, process same as 
        // Euclid's algo 
        m = a % m, a = t; 
        t = y; 
  
        // Update y and x 
        y = x - q * y; 
        x = t; 
    } 
  
    // Make x positive 
    if (x < 0) 
       x += m0; 
  
    return x; 
}


int main() {
	// your code goes here
	//freopen("inptmp0.txt","r",stdin);
	int T;
	cin>>T;
	
	while(T--){
	    int N;
	    string s;
	    cin>>N>>s;
	    int cur=0,x=-1;
	    long long int sum=0,psum=0;
	    vector<int> premat(N,0);
	    for(int i=0;i<N;i++){
	        sum+=psum;
	        if(s[i]=='('){
	            premat[i]=x;
	            x=i;
	        }
	        else if(s[i]==')'){
	            cur=(i-x+1)>>1;
	            sum+=cur;psum+=cur;
	            x=(x<0)?(-1):premat[x];
	        }
	    }
	    
	    ll ans=(sum*modInverse((N*(N+1))/2,const))%const;
	    cout<<ans<<endl;
	}
	return 0;
}
