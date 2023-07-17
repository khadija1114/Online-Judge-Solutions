#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,i,c,d,j=0;
    scanf("%d%d",&n,&m);
    char a[n],arr[200],b[m],swap;

    for(i=0;i<n;i++)
  {
      scanf("%c ",&a[i]);
  }
  for(i=0;i<m;i++)
  {
      scanf("%c",&b[i]);
  }


    for(i=0;i<n+m;i++)
    {
        if(i<n)
        arr[i]=a[i];
        else
       {
           arr[i]=b[j];
            j++;
       }
       printf("d");
    }
   // printf("%s",arr);
    n=strlen(arr);
    for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (arr[d] > arr[d+1])
      {
        swap  = arr[d];
        arr[d]   = arr[d+1];
        arr[d+1] = swap;
      }
    }
  }
  for(i=0;i<n;i++)
  {
      printf("%c ",arr[i]);
  }
}
