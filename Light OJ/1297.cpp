#include<stdio.h>
#include<math.h>
int main()
{
    double l,w,x;
    int i=0,t;
    scanf("%d",&t);
    while(t--){
        scanf("%lf%lf",&l,&w);
        x=(l+w-sqrt(w*w+l*l*w))/6.0;
        printf("Case %d: %0.9lf\n",++i,x*(w-2*x)*(l-2*x));

    }

    return 0;
}
