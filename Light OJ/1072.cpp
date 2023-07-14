#include<bits/stdc++.h>
#define w(x) scanf("%d",&x);while(x--)
#define pi 2*acos(0.0)
using namespace std;

int main()
{
    int t, cs = 0;
    w(t){
        double x1, x2, y1, y2, r1, r2, theta, area, dis;

        scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);

        dis = sqrt ((x1-x2) * (x1-x2) + (y1-y2) * (y1-y2));

        if (dis >= r1+r2){
            area = 0;
        }
        else if (dis <= abs(r1-r2)){
            area = min (r1, r2);
            area *= area;
            area *= pi;
        }
        else {
            theta = 2 * acos((r1*r1 + dis*dis - r2*r2) / (2*r1*dis));
            area = 0.5 * r1 * r1 * (theta - sin (theta));

            theta = 2 * acos((r2*r2 + dis*dis - r1*r1) / (2*r2*dis));
            area += 0.5 * r2 * r2 * (theta - sin (theta));
        }

        printf ("Case %d: %0.7lf\n", ++cs, area);
    }
}



