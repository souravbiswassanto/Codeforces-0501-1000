#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  1000006

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

int a[MAX];
int b[MAX];
int c[MAX];

int main ()
{

    ///freopen("output.txt","w",stdout);

    fastIO();
    int n;
    int m;
    int cnt=0;
    int p,q,r;
    int cntr=0;
    int v=0;
    int check=0;
    int x,y,z;
    string s,s1,s2;

    cin>>n;

    for (int i=0;i<n;i++){
        cin>>a[i];
    }

    sort (a,a+n);

    for (int i=n-1;i>=0;i--){

        p=sqrt(a[i]);
        if ((p*p)!=a[i]){
            cntr=a[i];
            break;
        }
    }

    cout<<cntr<<endl;

    return 0;
}



