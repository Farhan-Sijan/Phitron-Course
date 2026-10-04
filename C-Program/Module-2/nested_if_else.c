#include <stdio.h>
int main()
{
    int  tk;
    printf("Enter your amount : ");
    scanf("%d", &tk);
    
    if(tk>=5000)
    {
        printf("I will go to Cox's Bazar\n");

        if(tk>=10000)
    {
        printf("I will go to Sylhet\n");

     
    }

       else{
        printf("i come back from Cox's Bazar\n");

    }

    }

    else{
        printf("I won't go anwhare\n");
    }
}