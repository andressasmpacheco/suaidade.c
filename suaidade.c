#include <stdio.h>
int main()
{
    int id;
     printf("Digite sua idade: \n\n");
    scanf("%d", &id);
    if (id>=18)
    {
       printf("\nVoce e maior de idade. \n",id);
    }
    else
    {
        printf("\nVoce e menor de idade. \n",id);
    }
    
}
