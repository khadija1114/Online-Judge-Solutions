#include<bits/stdc++.h>
using namespace std;
/*struct node{
    char data;
    struct node* link;
};
struct node* head;

void abc()
{
    //head=NULL;
    head=(struct node*) malloc (sizeof(struct node));
    head->data='a';
    head->link=(struct node*) malloc(sizeof(struct node));
    head->link->data='b';
    head->link->link=(struct node*) malloc (sizeof(struct node ));
    head->link->link->data='c';
    head->link->link->link=head;

    cout<<head->link->data;
}

void print()
{
    struct node* temp;
    temp=head;
    int t=10;
    while(t--)
    {
        cout<<temp->data<<"\n";
        temp=temp->link;
    }
}*/
int main()
{
    string  ch;
    int t,i,j,k=0;
    cin>>t;
    while(t--)
    {
        int flag=0;
        cin>>ch;
        for(i=0;i<ch.length()-1;i++)
            if(ch[i]==ch[i+1]&&ch[i]!='?')
            {
                cout<<"-1\n";

                flag=1;
                break;
            }
        if(flag)
            continue;


        bool bl[3];

        for(i=0;i<ch.length();i++)
        {

            if(ch[i]=='?')
            {
                 memset(bl,true,sizeof(bl));
                if(i==0&&ch[i+1]!='?')
                    bl[ch[i+1]-'a']=false;
                else if(i==ch.length()-1&&ch[i-1]!='?')
                    bl[ch[i-1]-'a']=false;
                else
                {
                    if(ch[i+1]!='?')
                     bl[ch[i+1]-'a']=false;
                     if(ch[i-1]!='?')
                    bl[ch[i-1]-'a']=false;
                }

                for(j=0;j<3;j++)
                {
                    if(bl[j])
                    {
                        cout<<char(j+'a');
                        ch[i]=j+'a';
                        break;
                    }
                }
            }
            else
                cout<<ch[i];

        }
        cout<<"\n";


    }
}
