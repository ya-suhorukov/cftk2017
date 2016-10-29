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

ll opr(string s){
	if(s=="S") return 0;
	if(s=="M") return 1;
	if(s=="L") return 2;
	if(s=="XL") return 3;
	if(s=="XXL") return 4;
	if(s=="XXXL") return 5;
	return 6;
}

void gg(){
	cout<<"NO";
	exit(0);
}

int main(){
#ifdef The_Fusy 
    freopen("input","r",stdin);  
    freopen("output","w",stdout);
#endif
    ll r[6];
    for(ll i=0;i<6;i++){
    	cin>>r[i];
    }
    ll bb=0;
    ll n;
    cin>>n;
    vector<ll> ans;
    vector<pair<ll,ll>> jk;
    ll ons=n;
    for(ll i=0;i<n;i++){
    	string s;
    	cin>>s;
    	ll npr = opr(s);
    	if(npr!=6){
    		ans.push_back(npr);
    		r[npr]--;
    		if(r[npr]<0) gg();
    		jk.push_back({-1,-1});
    		ons--;
    	}
    	else{
    		string b1,b2;
    		bool u=0;
    		ll ind=0;
    		while(ind<s.length()){
    			if(s[ind]==',') u=1;
    			else if(!u) b1+=s[ind];
    			else b2+=s[ind];
    			ind++;
    		}
    		jk.push_back({opr(b1),opr(b2)});
    		ans.push_back(-1);
    	}
    }
    for(ll i=0;i<n;i++){
    	if(ans[i]!=-1) continue;
    	if(jk[i].first==0){
    		if(r[0]){
    			r[0]--;
    			ans[i]=0;
    		}
    		else if(r[1]){
    			r[1]--;
    			ans[i]=1;
    		}
    		else gg();
    	}
    }
    for(ll i=0;i<n;i++){
    	if(ans[i]!=-1) continue;
    	if(jk[i].first==1){
    		if(r[1]){
    			r[1]--;
    			ans[i]=1;
    		}
    		else if(r[2]){
    			r[2]--;
    			ans[i]=2;
    		}
    		else gg();
    	}
    }
    for(ll i=0;i<n;i++){
    	if(ans[i]!=-1) continue;
    	if(jk[i].first==2){
    		if(r[2]){
    			r[2]--;
    			ans[i]=2;
    		}
    		else if(r[3]){
    			r[3]--;
    			ans[i]=3;
    		}
    		else gg();
    	}
    }
    for(ll i=0;i<n;i++){
    	if(ans[i]!=-1) continue;
    	if(jk[i].first==3){
    		if(r[3]){
    			r[3]--;
    			ans[i]=3;
    		}
    		else if(r[4]){
    			r[4]--;
    			ans[i]=4;
    		}
    		else gg();
    	}
    }
    for(ll i=0;i<n;i++){
    	if(ans[i]!=-1) continue;
    	if(jk[i].first==4){
    		if(r[4]){
    			r[4]--;
    			ans[i]=4;
    		}
    		else if(r[5]){
    			r[5]--;
    			ans[i]=5;
    		}
    		else gg();
    	}
    }
    cout<<"YES"<<endl;
    for(ll i=0;i<n;i++){
    	if(ans[i]==0) cout<<"S";
		else if(ans[i]==1) cout<<"M";
		else if(ans[i]==2) cout<<"L";
		else if(ans[i]==3) cout<<"XL";
		else if(ans[i]==4) cout<<"XXL";
		else if(ans[i]==5) cout<<"XXXL";
		cout<<endl;
    }
}
