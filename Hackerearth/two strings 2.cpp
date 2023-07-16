#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t;
    string s;
    cin>>t;
    cin.ignore();
    while(t--){
        getline(cin,s);

        stringstream str(s);
        string word,ar[2];
        int k=0;
        while(str>>word){
            sort(word.begin(),word.end());
            ar[k++]=word;
        }
        if(ar[0]==ar[1]) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}
