#include<bits/stdc++.h>
using namespace std;
vector<int> zalgo(string s){
    int right =0 , left=0,k,n=s.size(),k1;
    vector<int> z(n+1);
    for(k=1;k<n;k++){
        if(k>right){
            left=k,right=k;
            while( right <n && s[right]==s[right-left])
                right++;
            z[k]=right-left;
            right--;
        }
        else{
            k1=k-left;
            if(z[k1]+k-1<right)
                z[k]=z[k1];
            else{
                left=k;
                while( right <n && s[right]==s[right-left])
                right++;
            z[k]=right-left;
            right--;
            }

        }
    }
    return z;
}


int main()
{
    int n;
    while(cin>>n){
            cin.ignore();
        string b,a,s;
        getline(cin,b);
        getline(cin,a);
        s=b+'$'+a;
        vector<int> z=zalgo(s);
        for(auto it=z.begin();it!=z.end();it++)
            if(*it==n) printf("%d\n",it-z.begin()-n-1);

       cout<<endl;
    }
}
