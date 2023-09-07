#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    if (c == 'a')
        return true;
    if (c == 'e')
        return true;
    if (c == 'i')
        return true;
    if (c == 'o')
        return true;
    if (c == 'u')
        return true;
    if (c == 'y')
        return true;

    return false;
}

int main()
{
    string s;
    string word = "";
    while (getline(cin, s)) {
        s += " ";

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            if (isVowel(word[0])) {
                word += "yay";
            }
            else {
                string add1 = "", add2 = "";
                int j;
                for (j = 0; j < word.size(); j++) {
                    if (isVowel(word[j])) {
                        break;
                    }
                    else {
                        add1 += word[j];
                    }
                }

                for ( ; j < word.size(); j++)
                    add2 += word[j];

                word = add2 + add1 + "ay";
            }

            cout << word << " ";
            word = "";
        }
        else {
            word += s[i];
        }

       // cout << word << endl;
    }

    cout << endl;
    }


}

