#include<bits/stdc++.h>
#define w(x) scanf("%d",&x);while(x--)
#define pi 2*acos(0.0)
using namespace std;

int main()
{
    int t, cs = 0;
    w(t){
        double a, b, c, d, h, base, area, tria, s;

        scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

        base = abs(a-c);
        s = base + b + d;
        s *= 0.5;
        tria = sqrt(s * (s-base) * (s-b) * (s-d));
        h = 2 * tria / base;

        area = h * (a+c) / 2;


        printf ("Case %d: %0.7lf\n", ++cs, area);
    }
}



