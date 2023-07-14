#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,t,a,n,m;
    string s;

    scanf("%d",&t);
    while(t--){
        deque <int> deq;
        printf("Case %d:\n",++i);
        scanf("%d%d",&n,&m);
        while(m--){
            cin>>s;
            if(s=="pushLeft"){
                scanf("%d",&a);
                if(deq.size()==n){
                    printf("The queue is full\n");
                }
                else{
                    printf("Pushed in left: %d\n",a);
                    deq.push_front(a);
                }
            }
            else if(s=="pushRight"){
                scanf("%d",&a);
                if(deq.size()==n){
                    printf("The queue is full\n");
                }
                else{
                    printf("Pushed in right: %d\n",a);
                    deq.push_back(a);
                }
            }
            else  if(s=="popLeft"){
                if(deq.size()==0){
                    printf("The queue is empty\n");
                }
                else{
                    a=deq.front();
                    printf("Popped from left: %d\n",a);
                    deq.pop_front();
                }
            }
            else if(s=="popRight"){
                if(deq.size()==0){
                    printf("The queue is empty\n");
                }
                else{
                    a=deq.back();
                    printf("Popped from right: %d\n",a);
                    deq.pop_back();
                }
            }
        }
    }
}
