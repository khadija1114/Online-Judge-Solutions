#include<bits/stdc++.h>
#define mp make_pair
#define ff first
#define ss second
#define bg begin()
#define en end()
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define ws(x) scanf("%d",&x);getchar();while(x--)
#define rep(i,b) for(i=0;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
#define endl "\n"
using namespace std;
typedef long long ll;

const int N=1e5+2;
long long  mod=1e9+9;
int t,j,cs=0,n,a,b,i,dxx[]={1,0,0,-1},dyy[]={0,-1,1,0},k,m,bit1[N],bit2[N],q;
char s[N];

void allclear()
{
    rep(i,n+1){
        bit1[i]=bit2[i]=0;
    }
}

void update1(int index,int value)
{
    while(index<=n){
        bit1[index]+=value;
        index+=(index & -index);
    }
}

void update2(int index,int value)
{
    while(index<=n){
        bit2[index]+=value;
        index+=(index & -index);
    }
}

int getsum1(int index)
{
    int sum=0;
    while(index){
        sum+=bit1[index];
        index-=(index & -index);
    }
    return sum;
}

int getsum2(int index)
{
    int sum=0;
    while(index){
        sum+=bit2[index];
        index-=(index & -index);
    }
    return sum;
}

int main()
{
   // ios
    ws(t){
        scanf("%s", s);
        n=strlen(s);
        allclear();
        printf("Case %d:\n",++cs);
        scanf("%d",&q);
      //  getchar();
        while(q--){
            char ch;
            scanf(" %c",&ch);
          // cout<<ch<<endl;
            if(ch=='I'){
                scanf("%d%d",&a,&b);
                update1(a,1);
               // update1(b+1,1);
                update2(b+1,1);
//                for(i=1;i<=n;i++){
//                    cout<<i<<" ";
//                }
//                cout<<endl;
//                for(i=1;i<=n;i++){
//                    cout<<bit1[i]<<" ";
//                }
//                cout<<endl;
//                for(i=1;i<=n;i++){
//                    cout<<bit2[i]<<" ";
//                }
//                cout<<endl;
            }
            else{
                scanf("%d",&a);
                m=getsum1(a)-getsum2(a);
              //  cout<<getsum1(a)<<" "<<getsum2(a)<<endl;
                if(m&1){
                    b=s[a-1]-'0';
                    b=(b^1);
                    printf("%d\n",b);
                }
                else{
                    b=s[a-1]-'0';
                    printf("%d\n",b);
                }
            }
        }
    }
}
