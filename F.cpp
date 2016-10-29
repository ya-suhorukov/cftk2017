#include <bits/stdc++.h>
using namespace std;
#define fo(i,a,b) for(int i=(a);i<(b);i++)
#define MOD 1000000007
#define MT make_tuple
#define PB push_back
typedef long long ll;

int N, M;
ll a[1100], mxlo[1100][1100];

int main () {
	scanf("%d %d", &N, &M);
	fo(i, 0, N) scanf("%lld", &a[i]);
	for (int i = N; i--; ) fo(j, 0, N-i+1) {
		//you haven't done this yet...
		//mxlo[i][j] is
		//you have already decided work for a[i]
		//and j is how many including a[i] you just skipped
		//comes from mxlo[i+1][j] or mxlo[i+1][j-1] ???
		//if you keep same... then you do it
		mxlo[i][j] = -1e18;
		if (j != N-i) {
			//you have to use a[i]
			//the lowest point is either 0 or old max point + a[i]
			mxlo[i][j] = max(mxlo[i][j], min(0ll, mxlo[i+1][j] + a[i]));
		}
		if (j) {
			//skip this one
			mxlo[i][j] = max(mxlo[i][j], mxlo[i+1][j-1]);
		}
	}
	fo(z, 0, M) {
		ll b;
		scanf("%lld", &b);
		int res = int(lower_bound(mxlo[0], mxlo[0] + N, -b) - mxlo[0]);
		printf("%d\n", res);
	}
	return 0;
}
