#include<bits/stdc++.h>
using namespace std;
int ar[10002][10];
void ans(){
    int i,j,n,m;
    for(i=1;i<=10000;i++){
            n=i;
            for(j=0;j<10;j++) ar[n][j]=ar[n-1][j];
        while(n){
            m=n%10;
            ar[i][m]++;
            n/=10;
        }
    }
}
int main()
{
    int i,t,n,r,m;
    ans();
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<10;i++){
             cout<<ar[n][i];
             if(i!=9) cout<<" ";
        }

        cout<<endl;
    }

}
