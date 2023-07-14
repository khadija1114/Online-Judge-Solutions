#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, cs = 0;
    scanf("%d", &t);

    while (t--) {
        int day, people = 0;
        scanf("%d", &day);

        double NotSameDayProbability = 1;
        while (NotSameDayProbability > 0.5) {
            people++;
            NotSameDayProbability *= (day-people)*1.0/day;
         //   cout << people << " " << fixed << setprecision(4) << NotSameDayProbability << endl;
        }

        printf("Case %d: %d\n", ++cs, people);
    }

}

