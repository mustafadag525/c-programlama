#include <stdio.h>
#include <stdlib.h>



int main()
{
int sayi,i;
printf("say� gir:");
scanf("%d",&sayi);
if(sayi==1)
{
    printf("%d ssyısı asal degil",sayi);

}
else if(sayi==2)
{
    printf("%d sayisi asal sayidir",sayi);
}
else
{
    for(i=2;i<=sayi;i++)
    {
        if(sayi%i==0)
        {
            printf("%d sayisi asal degil",sayi);
            break;

        }

        else
        {
            printf("%d sayisi asald�r",sayi);
            break;
        }
    }
}

    return 0;

}
