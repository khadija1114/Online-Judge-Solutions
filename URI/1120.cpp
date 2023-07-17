#include<stdio.h>
#include<math.h>
#include<string.h>
int main ()
{
    int a,D,i=0,k=0,j;
    char N[100],n[100];
    while(1)
    {
        scanf("%d",&D);
        scanf("%s",&N);
        j=strlen(N);

        for(i=0 ;i<j;i++)
        {

            if(D==N[i])
            {
                break;
            }
            else
            {
                n[k]=N[i];
                k++;
            }



        }
        printf(" %s",N[k]);
    }
    return 0;


}
