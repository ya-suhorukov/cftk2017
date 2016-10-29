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

int main(){
#ifdef The_Fusy 
    freopen("input","r",stdin);  
    freopen("output","w",stdout);
#endif
    string s;
    cin>>s;
    ll ind=0;
    ll ans=0;
    ll sans=0;
    while(1){
    	// d(ind);
    	if(ind>=s.length()) break;
    	char t;
    	t = s[ind];
    	while(t<'0' || t>'9'){
    		// d(t);
    		if(ind>=s.length()) break;
    		ind++;
    		t=s[ind];
    	}
    	ll now=0;
    	ll snow=0;
    	// d(s[ind]);
    	while(1){
    		t=s[ind];
    		if(t=='.'){
    			// d(ind+3);
    			if(ind+3 >= s.length() || (s[ind+3]>'9' || s[ind+3]<'0')){
    				snow+=s[ind+1]-'0';
    				snow*=10;
    				snow+=s[ind+2]-'0';
    				ind+=3;
    				break;
    			}
    			else ind++;
    		}
    		else if(t<'0' || t>'9') break;
    		else{
    			now*=10;
    			now+=t-'0';
    			ind++;
    		}
    	}
    	// d(now);
    	// d(snow);
    	ans+=now;
    	sans+=snow;
    }
    ans+=(sans/100);
    sans%=100;
    string an = to_string(ans);
    string na;
    ll kk=0;
    for(ll i=an.length()-1;i>=0;i--){
    	na+=an[i];
    	kk++;
    	if(i!=0 && kk%3==0) na+='.';
    }
    reverse(na.begin(),na.end());
    cout<<na;
    if(sans!=0){
    	cout<<'.';
    	if(sans/10==0) cout<<0;
    	cout<<sans;
    }
    
    
    //cout<<endl<<ans<<' '<<sans;
}
