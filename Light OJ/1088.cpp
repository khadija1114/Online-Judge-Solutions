#include<bits/stdc++.h>
using namespace std;
 long long s[100005];
int bs(long long s[],long long pos,int siz){
    int upper=siz-1,lower=0,middle;
    middle= (upper+lower)/2;
    while(upper>lower){
        if(s[middle]==pos) return middle;
        else if(s[middle]<pos) lower=middle+1;
        else upper = middle-1;
        middle=(upper+lower)/2;
//     /   cout<<upper<<" "<<lower<<endl;
    }
    return lower;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,i,j,b,c,ss=0,k=1;
    long long n,m;
    cin>>a;
    while(a--)
    {

        cin>>b>>c;
         cout<<"Case "<<k++<<":"<<"\n";

        for(i=0; i<b; i++)
        {
            cin>>s[i];
        }

        for(j=0; j<c; j++)
        {
            cin>>m>>n;

            cout<<bs(s,n,b)-bs(s,m,b)+1<<"\n";
           // ss=0;
        }

    }
}
