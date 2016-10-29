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

ll qu(ll a, ll b){
	cout<<"? "<<a<<' '<<b<<endl;
	ll temp;
	cin>>temp;
	return temp;
}

int main(){
#ifdef The_Fusy 
    freopen("input","r",stdin);  
    freopen("output","w",stdout);
#endif
    ll n;
    cin>>n;
    vector<ll> a(n,0);
    ll q = qu(1,2);
    ll w = qu(1,3);
    ll e = qu(2,3);
    a[0]=(q+w-e)/2;
    a[1]=q-a[0];
    a[2]=w-a[0];
    for(ll i=3;i<n;i++){
    	ll tmp = qu(1,i+1);
    	a[i]=tmp-a[0];
    }
    cout<<"! ";
    for(ll i=0;i<n;i++){
    	cout<<a[i]<<' ';
    }
    cout<<endl;
}
