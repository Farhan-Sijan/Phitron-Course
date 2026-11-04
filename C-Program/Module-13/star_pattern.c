#include<stdio.h>
int main()
{
	int n ,star=1;
	scanf("%d", &n);

	for (int i = 0; i <= n; i++)
	{

        for(int i=0;i<=star;i++)
        {
            printf("*");
			
        }
		printf("\n");
		star++;
	}

	
}

