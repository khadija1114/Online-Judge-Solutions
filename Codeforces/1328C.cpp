#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,c;
    int n,t,i,j;
    cin>>t;
    while(t--){
            string s1,c1;
            cin>>n;
        cin>>s;
        for(i=0;i<n;i++){
            if(s[i]=='2'){
                s1+='1';
                c1+='1';
            }
            else if(s[i]=='0'){
                s1+="0";
                c1+="0";
            }
            else if(s[i]=='1'){
                    s1+="1";
                    c1+="0";
                for(j=i+1;j<n;j++){
                    s1+="0";
                    c1+=s[j];
                }
                break;
            }
        }
        cout<<s1<<"\n"<<c1<<"\n";

    }
}
