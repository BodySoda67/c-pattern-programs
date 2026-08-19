#include <stdio.h>
#include <string.h>
int main()

{
  char name[50];
  int i,j,k,l,m,n;
  scanf("%[^\n]",&name);
  n=strlen(name);
  for(i=0;i<=1;i++)
  { 
     if(i==0)
     {
        for(j=0;j<n;j++)
        {
          for(k=0;k<j;k++) 
          {
              printf("%c",name[k]);
              
          }
          printf("\n");
        }
     }
       else if(i==1)
       {
         for(j=0;j<=n-1;j++)
         {
             for(m=n-1;m>=j;m--)
             {
                 printf("%c",name[(n-1)-m]);
                 
             }
             printf("\n");
         }
      }
  }

    return 0;
}
