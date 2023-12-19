#include <stdio.h>
#include <stdlib.h>

union paylasim_kontrol{
    int x;
    int y;


        }kontrol;
int main()
{
    int *X,*Y;
    kontrol.x=100;

    X=&kontrol.x;
    printf("Tam sayi(x)=%d bellek adresi %X\n",kontrol.x,X);
    kontrol.y=200;
    Y=&kontrol.y;
    printf("Tam sayi(y)=%d bellek adresi %X\n",kontrol.y,Y);
}
