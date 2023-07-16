#include<bits/stdc++.h>
using namespace std;

int Max=60002,k=0;
int sum[60005];

void sieve(){
    int i,j;
    for(i=1;i<Max;i++){
            for(j=i+i;j<Max;j+=i){
                 sum[j]+=i;
        }
    }
}

int main()
{
    int i,t,n;
    sieve();
    cout<<"PERFECTION OUTPUT"<<endl;
    while(1){
        cin>>n;
        if(!n) break;
        printf("%5d  ",n);
        if(n==sum[n]) cout<<"PERFECT"<<endl;
        else if(n<sum[n]) cout<<"ABUNDANT"<<endl;
        else cout<<"DEFICIENT"<<endl;
    }
    cout<<"END OF OUTPUT"<<endl;
}


