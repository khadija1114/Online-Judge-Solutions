#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,t,n,m,x,j;
    string s;

    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>m;
        cout<<"Case "<<i<<":\n";
         deque <int > deq;
        while(m--)
        {
         getchar();
         cin>>s;

            if(s=="pushLeft") {
                    if(deq.size()==n) cout<<"The queue is full\n";
                    else{
                cin>>x;
                deq.push_front(x);
                cout<<"Pushed in left: "<<x<<"\n";
                    }
            }
            else if(s=="pushRight"){
                if(deq.size()==n) cout<<"The queue is full\n";
            else{
                cin>>x;
                deq.push_back(x);
                cout<<"Pushed in right: "<<x<<"\n";
                }
            }
            else if(s=="popLeft")
            {
                if(deq.size()==0) cout<<"The queue is empty\n";
                else
                {
                    x=deq.front();
                deq.pop_front();
                cout<<"Popped from left: "<<x<<"\n";
                }

            }
             else if(s=="popRight")
            {
                if(deq.size()==0) cout<<"The queue is empty\n";
                else{
                x=deq.back();
                deq.pop_back();
                cout<<"Popped from right: "<<x<<"\n";
                }
            }
        }
    }
}
