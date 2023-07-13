#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define ws(x) scanf("%d",&x);getchar();while(x--)
#define rep(i,b) for(i=0;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
#define endl "\n"
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<int> vi;

const int N=1e6+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,ar[N];
string s;

void merge( int st, int mid, int en) {

int p = st ,q = mid+1;
int Arr[en-st+1] , k=0;

for(int i = st ;i <= en ;i++) {
    if(p > mid)
       Arr[ k++ ] = ar[ q++] ;

   else if ( q > en)
       Arr[ k++ ] = ar[ p++ ];

   else if( ar[ p ] < ar[ q ])
      Arr[ k++ ] = ar[ p++ ];

   else
      Arr[ k++ ] = ar[ q++];
 }
  for (int p=0 ; p< k ;p ++) {
     ar[ st++ ] = Arr[ p ] ;
  }
}

void merge_sort ( int st , int en )
   {
           if( st < en ) {
           int mid = (st + en ) / 2 ;
           merge_sort (st , mid ) ;
           merge_sort (mid+1, en) ;

          merge(st, mid , en);
   }
}


int main()
{
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ar[i];

    merge_sort(0,n-1);

    for(i=0;i<n;i++)
        cout<<ar[i]<<" ";
    cout<<endl;
}

