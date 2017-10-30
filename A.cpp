#include <bits/stdc++.h>
#include <sys/time.h>

#define X first
#define Y second
#define forn(i,n) for(ll i=0;i<n;i++)
#define d(x) cerr<<#x<<": "<<x<<endl;
#define dv(x) cerr<<#x<<": ";forn(i,x.size())cerr<<x[i]<<((i+1==x.size())?'\n':' ');

using namespace std;

typedef long long ll;
typedef long double ld;

void solve();

int main(){
#ifdef The_Fusy 
    freopen("input","r",stdin);  
    freopen("output","w",stdout);
#endif
    ll a,b;
    cin>>a>>b;
    vector<ll> k;
    k.push_b
    	if(b==0){
    		cout<<"NO";
    		return 0;
    	}
    	if(b%2==0) b/=2;
    	else if(b%10!=1){
    		cout<<"NO";
    		return 0;
    	}
    	else b/=10;
    	k.push_back(b);
    	if(b<=a){
    		break;
    	}
    }
    reverse(k.begin(),k.end());
    if(b==a){
    	cout<<"YES\n";
    	cout<<k.size()<<endl;
    	for(ll i=0;i<k.size();i++){
    		cout<<k[i]<<' ';
    	}
    }
    else cout<<"NO";
}
