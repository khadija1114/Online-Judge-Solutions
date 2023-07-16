#include<iostream>
#include<algorithm>
#include<set>
#include<map>

using namespace std;

struct book{
    string t,a;
    book(string _t, string _a) : t(_t),a(_a){}
};

bool operator < (const book &a, const book &b){
    if(a.a!=b.a) return a.a<b.a;
    return a.t<b.t;
}

pair<string,string> sep(string s){
    string t,r;
    int cnt = 0;
    for(int i=0; i<s.size();i++){
        if(cnt<2) t+=s[i];
        else r+=s[i];
        if(s[i]=='\"') cnt++;
        if(cnt==2) {
            i+=4;
            cnt++;
        }
    }
    return make_pair(t,r);
}

int main()
{
    bool flag = true;
    map<string,string> t2a;
    set<book> retu,buff;
    string s,t;
    while(true){
        getline(cin,s);
        if(s=="END") break;
        pair<string,string> ta=sep(s);
        t2a[ta.first]=ta.second;
    }

    while(true){
        char c;
        cin>>s;
        if(s=="END") break;
        if(s!="SHELVE"){
            cin.get(c);
            if(!getline(cin,t)) return 0;
        }
        if(s=="BORROW"){
            retu.erase(book(t,t2a[t]));
        }
        else if(s=="RETURN"){
            buff.insert(book(t,t2a[t]));
        }
        else if(s=="SHELVE"){
            set<book>:: iterator it=buff.begin();
            for( ;it!=buff.end();it++){
                retu.insert(*it);
                set<book>:: iterator itr=retu.find(*it);
                cout<<"Put "<<it->t;
                if(itr==retu.begin()) cout<<" first"<<endl;
                else cout<<" after "<<(--itr)->t<<endl;
            }
            buff.clear();
            cout<<"END"<<endl;

        }
    }
}
