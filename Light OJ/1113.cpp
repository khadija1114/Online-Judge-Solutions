#include<bits/stdc++.h>
using namespace std;

int next(string s)
{
    if(s=="VISIT") return 0;
    else if(s=="BACK")  return 1;
    else return 2;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int t,i;
    string choice,url;
    stack <string> f;
    stack<string> b;

    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>choice;
        url="http://www.lightoj.com/";
        while(!b.empty())
            {
                b.pop();
            }
            while(!f.empty())
            {
                f.pop();
            }
            cout<<"Case "<<i<<":"<<endl;
        while(choice!="QUIT")
        {
            int m=next(choice);

            if(m==0)
            {
                b.push(url);
                cin>>url;
                cout<<url<<endl;
                while(!f.empty())
                {
                    f.pop();
                }

            }
            else if(m==2)

            {

                if(f.empty()) cout<<"Ignored\n";
                else{
                    b.push(url);
                    url=f.top();
                    f.pop();
                    cout<<url<<"\n";
                    }
            }
            else
            {
                if(b.empty()) cout<<"Ignored\n";
                else
                {
                    f.push(url);
                    url=b.top();
                    b.pop();
                    cout<<url<<"\n";
                }
            }
            cin>>choice;
        }
    }

}
