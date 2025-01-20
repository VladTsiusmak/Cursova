#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _Aaaaaaaaaaaaaaa;
   int _Bbbbbbbbbbbbbbb;
   int _Xxxxxxxxxxxxxxx;
   int _Yyyyyyyyyyyyyyy;
   printf("Enter _Aaaaaaaaaaaaaaa:");
   scanf("%d", &_Aaaaaaaaaaaaaaa);
   printf("Enter _Bbbbbbbbbbbbbbb:");
   scanf("%d", &_Bbbbbbbbbbbbbbb);
   printf("%d\n", (_Aaaaaaaaaaaaaaa + _Bbbbbbbbbbbbbbb));
   printf("%d\n", (_Aaaaaaaaaaaaaaa - _Bbbbbbbbbbbbbbb));
   printf("%d\n", (_Aaaaaaaaaaaaaaa * _Bbbbbbbbbbbbbbb));
   printf("%d\n", (_Aaaaaaaaaaaaaaa / _Bbbbbbbbbbbbbbb));
   printf("%d\n", (_Aaaaaaaaaaaaaaa % _Bbbbbbbbbbbbbbb));
   _Xxxxxxxxxxxxxxx = (((_Aaaaaaaaaaaaaaa - _Bbbbbbbbbbbbbbb) * 10) + ((_Aaaaaaaaaaaaaaa + _Bbbbbbbbbbbbbbb) / 10));
   _Yyyyyyyyyyyyyyy = (_Xxxxxxxxxxxxxxx + (_Xxxxxxxxxxxxxxx % 10));
   printf("%d\n", _Xxxxxxxxxxxxxxx);
   printf("%d\n", _Yyyyyyyyyyyyyyy);
   system("pause");
    return 0;
}
