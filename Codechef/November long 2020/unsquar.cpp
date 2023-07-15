#include<bits/stdc++.h>
#define ff first
#define ss second
#define bg begin()
#define en end()
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define rep(i,b) for(i=0;i<=b;i++)
#define endl "\n"
using namespace std;
typedef pair<int,int> pii;
typedef vector<int> vi;

const int N=1e5+2;
int t,j,cs=0,n,a,b[N],i,k,m,s,q,x,y,l,r,ar[N],inf=1e9,ng[N],f[N];
bool vis[N];
vi tree(3*N,-1),mxar(3*N,-1),mxf(3*N,-1),mxb(3*N,-1);;

void next_greater()
{
    stack<int> st;
    for(i=1;i<=n;i++){
        while(!st.empty() && ar[st.top()]<ar[i]){
            ng[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
}

void buildf()
{
    for(i=n;i>0;i--){
        f[i]=f[ng[i]]+1;
    }
}

void buildb()
{
    for(i=1;i<=n;i++){
        if(b[i]==0) b[i]=1;
        if(ar[i]==ar[i-1]) b[i]=b[i-1];
        b[ng[i]]=max(b[ng[i]],b[i]+1);
    }
}

void seg_tree(int l,int r,int pos,int flag)
{
    if(l==r){
        if(flag==1) tree[pos]=l;
        else if(flag==2) tree[pos]=f[l];
        else tree[pos]=b[l];
        return ;
    }

    int mid=(l+r)/2,left,right;
    seg_tree(l,mid,2*pos+1,flag);
    seg_tree(mid+1,r,2*pos+2,flag);
    left=tree[2*pos+1],right=tree[2*pos+2];
   // if(flag==1) cout<<pos<<" "<<left<<" "<<right<<endl;
    if(flag==1){
        if(ar[left]>ar[right])
            tree[pos]=left;
        else if(ar[left]<ar[right])
            tree[pos]=right;
        else
            tree[pos]=max(left,right);
            return ;
    }
    tree[pos]=max(tree[2*pos+1],tree[2*pos+2]);
    return ;
}

int query(int low,int high,int pos,int flag)
{
    if(high<l || low>r) return -1;
    if(high<=r && low>=l){
     //   cout<<pos<<" "<<mxar[pos]<<endl;
        if(flag==1) return mxar[pos];
        else if(flag==2) return mxf[pos];
        else return mxb[pos];
    }
    int mid=(high+low)/2;
    int left=query(low,mid,2*pos+1,flag),right=query(mid+1,high,2*pos+2,flag);
    if(flag==1){
        if(left==-1) return right;
        if(right==-1) return left;
        else{
            if(ar[left]>ar[right]) return left;
            else return right;
        }
    }
    return max(left,right);
}

int main()
{
    cin>>n>>q>>s;
    for(i=1;i<=n;i++)
        cin>>ar[i];
    int last=0;

    next_greater();
//    for(i=1;i<=n;i++) cout<<ar[i]<<" "<<ar[ng[i]]<<endl;
    buildf();
    buildb();
//    for(i=1;i<=n;i++) cout<<i<<" ";
//    cout<<endl;
//    for(i=1;i<=n;i++) cout<<f[i]<<" ";
//    cout<<endl;
//    for(i=1;i<=n;i++) cout<<b[i]<<" ";
//    cout<<endl;

    seg_tree(1,n,0,1);

    for(i=0; i<3*n ;i++){
        mxar[i]=tree[i];
//        cout<<mxar[i]<<" ";
        tree[i]=-1;
    }
//    cout<<endl;
    seg_tree(1,n,0,2);
    for(i=0;i<3*n;i++){
        mxf[i]=tree[i];
//        cout<<mxf[i]<<" ";
        tree[i]=-1;
    }
//    cout<<endl;
    seg_tree(1,n,0,3);
    for(i=0; i<3*n;i++){
        mxb[i]=tree[i];
//        cout<<mxb[i]<<" ";
        tree[i]=-1;
    }
//    cout<<endl;

//    rep(i,2*n) cout<<i<<" "<<mxar[i]<<endl;
   while(q--){
    cin>>x>>y;
    l=(x+s*last-1)%n+1,r=(y+s*last-1)%n+1;
    if(l>r) swap(l,r);

    int ans1,ans2,hval;
//    cout<<l<<" "<<r<<endl;
    hval=query(1,n,0,1);
    a=r;
    r=hval;
    ans1=query(1,n,0,2)-f[hval]+1;
    l=hval+1;
    r=a;
    if(l>r) ans2=-1;
    else ans2=query(1,n,0,3);
//    cout<<hval<<" "<<ans1<<" "<<ans2<<endl;
    last=max(ans1,ans2);
    cout<<last<<endl;

   }
}



