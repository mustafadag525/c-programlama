#include <stdio.h>
#include <stdlib.h>



int main()
{
 int i,i2,m=0;

    gi1 : for(i=0;i<=6;i++)
    {
        printf("*\t\t*\n");
    }
    m++; // Alt kisim tekrarlandiktan sonra devam etmesini �nleyen saya�
    if(m==2)
        return 0;
    for(i2=0;i2<=16;i2++)
    {
        printf("*");
    }
    printf("\n");
    goto gi1; //Hnin alt kismi �st ile ayn� tekrar etmek i�in

    return 0;

}
