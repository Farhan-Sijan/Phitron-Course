#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);

      int a[1001],b[1001],c[1001];
   
     for(int i=0;i<t;i++)
     {
        scanf("%d",&n);

        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

         for(int i=0;i<n;i++)
        {
           b[i]=a[i];
        }

        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
               if(b[i]>b[j])
               {
                int temp=b[i];
                b[i]=b[j];
                b[j]=temp;
               }
            }
        }
  
         for(int i=0;i<n;i++)
         {
            c[i]=a[i]-b[i];
         }

          for(int i=0;i<n;i++)
         {
            printf("%d ",abs(c[i]));
         }
         printf("\n");

     }

    
}