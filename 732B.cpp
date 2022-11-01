#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  100006
#define  Max(a,b,c) max(a,max(b,c))
#define  Min(a,b,c) min(a,min(b,c))
#define  mem(a,v)   memset(a,v,sizeof(a))
#define  rep        for (int i=0;i<n;i++)
#define  Rep        for (int i=0;i<m;i++)

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

ll A[MAX];
ll B[MAX];
ll C[MAX];

ll rev (ll a,ll b){

    return a>b;
}

int main ()
{

    fastIO();
    vector<ll> V;
    set<ll>S;
    set<ll>::iterator it;
    map<string,ll> M;
    map<string,ll>::iterator it1;

    ll a,b,c;
    ll n,m,k;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r;
    ll v=1;
    ll check=0;
    ll x,y,z;
    ll Max=0,Min=INT_MAX;
    string s,s1[MAX],s2[MAX],s3,s4;

    cin>>n>>k;

    for (int i=0;i<n;i++){
        cin>>A[i];
    }
    B[0]=A[0];

    for (int i=1;i<n;i++){
        if (A[i]+A[i-1]>=k){
            B[i]=A[i];
        }
        else {
            p=k-(A[i-1]+A[i]);
            B[i]=k-A[i-1];
            A[i]=B[i];
            sum+=p;
        }
    }

    cout<<sum<<endl;

    for (int i=0;i<n;i++){
        if (i==n-1)
        {
            cout<<B[i]<<endl;
            break;
        }
        cout<<B[i]<<" ";
    }

    return 0;
}
