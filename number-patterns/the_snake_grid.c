#include <stdio.h>

int main()
{
    
  int i,j,k=1,n,m,p;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    if(i%2==1)
    {
        
      for(j=0;j<n;j++)
      {
          printf("%d ",k);
          k++;
      }
      k--;
      printf("\n");
    }
    else if(i%2==0)
    {
        k+=n;
        for(m=0;m<n;m++)
        {
            
            printf("%d ",k);
            k--;
        }
        k+=(n+1);
        printf("\n");
    }
  }
    return 0;
}
