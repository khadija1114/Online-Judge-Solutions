#include<stdio.h>
int main()
{
    int i,n,a;
    int count1=0,count2=0,count3=0,count4=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==4) count4++;
        else if(a==3) count3++;
        else if(a==2) count2++;
        else count1++;
    }
    count4=count4+count3;
    if(count3>count1)
    {
        count1=0;
    }
    else{
        count1=count1-count3;
    }

    count2=(count2*2)+count1;
    if(count2%4==0){
                count4=(count2/4)+count4;

    }
    else if(count2%4!=0){
        count4=count4+1+(count2/4);
    }


    printf("%d\n",count4);

    return 0;
}
