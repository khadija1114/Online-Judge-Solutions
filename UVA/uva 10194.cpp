#include<bits/stdc++.h>
#define ff first
#define ss second
#define bg begin()
#define en end()
#define pb push_back
#define w(x) scanf("%d",&x);while(x--)
#define ws(x) scanf("%d",&x);getchar();while(x--)
#define rep(i,b) for(i=0;i<=b;i++)
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 2*acos(0.0)
#define endl "\n"

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

const int N=1e6+2;
long long  mod=1e9+9;
int t,cs=0, dxx[]={1,0,0,-1},dyy[]={0,-1,1,0};

class team {
public:
    int point, noGames, win, tie, loss, gd, gScored, gAgainst;
    string name;

    team() {
        team("");
    }
    team (string n) {
        name = n;
        point = 0;
        noGames = 0;
        win = 0;
        tie = 0;
        loss = 0;
        gd = 0;
        gScored = 0;
        gAgainst = 0;
    }

    void print(int pos) {
        printf("%d) ", pos);
        cout << name ;
        printf(" %dp, %dg (%d-%d-%d), %dgd (%d-%d)\n",
               this->point, this->noGames, this->win, this->tie, this->loss,
                this->gd, this->gScored, this->gAgainst);
    }

};


bool comp (pair <string, team> x, pair<string, team> y) {
    team a = x.ss;
    team b = y.ss;

    if (a.point != b.point) return a.point > b.point;
    if (a.win != b.win) return a.win > b.win;
    if (a.gd != b.gd) return a.gd > b.gd;
    if (a.gScored != b.gScored) return a.gScored > b.gScored;
    if (a.noGames != b.noGames) return a.noGames < b.noGames;

    for (int i = 0; i < a.name.size(); i++)
        a.name[i] = tolower(a.name[i]);
    for (int i = 0; i < b.name.size(); i++)
        b.name[i] = tolower(b.name[i]);

    return a.name < b.name;
}

void solve()
{
    string s;
    getline(cin, s);
    cout << s << endl;


    int n;
    cin >> n;
    cin.ignore();

    map <string, team> mp;

    for (int i = 0; i < n; i++){
        getline(cin, s);
        team a(s);
        mp[s] = a;
    }

    int m;
    cin >> m;
    cin.ignore();

    for (int i = 0; i < m; i++) {

        ///input sorting
        string team1 = "", team2 = "";
        int score1 = 0, score2 = 0;
        getline(cin, s);

        int j = 0;
        while (j < s.size() && s[j] != '#'){
            team1 += s[j++];
        } j++;

        while (j < s.size() && s[j] != '@'){
            score1 = score1*10 + (s[j++] - '0');
        } j++;
        while (j < s.size() && s[j] != '#'){
            score2 = score2*10 + (s[j++] - '0');
        } j++;

        while (j < s.size()){
            team2 += s[j++];
        }

//        cout << team1 << " " << score1 << endl;
//        cout << team2 << " " << score2 << endl;

        ///updating input
        if (score1 > score2) {
            mp[team1].point += 3;
            mp[team1].win++;
            mp[team2].loss++;
        }
        else if (score1 < score2){
            mp[team2].point += 3;
            mp[team2].win++;
            mp[team1].loss++;
        }
        else{
            mp[team1].point++;
            mp[team2].point++;
            mp[team1].tie++;
            mp[team2].tie++;
        }

        mp[team1].noGames++;
        mp[team2].noGames++;

        mp[team1].gAgainst += score2;
        mp[team2].gAgainst += score1;

        mp[team1].gScored += score1;
        mp[team2].gScored += score2;

        mp[team1].gd += (score1 - score2);
        mp[team2].gd += (score2 - score1);

    }

//    int i = 0;
//    for (auto it: mp) {
//        it.ss.print(++i);
//    }

    /// copyring scores in vector to sort

    vector <pair<string, team>> v;
    for (auto it: mp){
        v.pb({it.ff, it.ss});
    }

    sort (v.bg, v.en, comp);

    int i = 0;
    for (auto it: v) {
        it.ss.print(++i);
    }
    if (t)
        cout << endl;
}


int main()
{
    ws(t)
    solve();
}

