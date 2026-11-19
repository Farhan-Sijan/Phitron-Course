#include<stdio.h>
int main()
{
    int r,c;

    scanf("%d %d",&r,&c);

    int a[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int flag =0;

    if(r==c)
    {
        for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           if(i!=j)
            {
              
            if(a[i][j]!=0)
               {
                flag=1;
               
               }
            }
        }    
    

               

               
        
    }
 if(flag==0)
    {
        printf("This is a primary diagonal matrix");
    }

    else{
          printf("This is not a diagonal matrix\n");
    }
    
    }


   
   
    else{
        printf("NO! this is not a diagonal matrix");
    }
}