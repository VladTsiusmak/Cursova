#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int   _Aaaaaaaaaaaaaaa, _Bbbbbbbbbbbbbbb, _Xxxxxxxxxxxxxxx, _Yyyyyyyyyyyyyyy;
   printf("Enter _Aaaaaaaaaaaaaaa:");
   scanf("%d", &_Aaaaaaaaaaaaaaa);
   printf("Enter _Bbbbbbbbbbbbbbb:");
   scanf("%d", &_Bbbbbbbbbbbbbbb);
   printf("%d\n", _Aaaaaaaaaaaaaaa + _Bbbbbbbbbbbbbbb);
   printf("%d\n", _Aaaaaaaaaaaaaaa - _Bbbbbbbbbbbbbbb);
   printf("%d\n", _Aaaaaaaaaaaaaaa * _Bbbbbbbbbbbbbbb);
   printf("%d\n", _Aaaaaaaaaaaaaaa / _Bbbbbbbbbbbbbbb);
   printf("%d\n", _Aaaaaaaaaaaaaaa % _Bbbbbbbbbbbbbbb);
   _Xxxxxxxxxxxxxxx = (_Aaaaaaaaaaaaaaa - _Bbbbbbbbbbbbbbb) * 10 + (_Aaaaaaaaaaaaaaa + _Bbbbbbbbbbbbbbb) / 10;
   _Yyyyyyyyyyyyyyy = _Xxxxxxxxxxxxxxx + (_Xxxxxxxxxxxxxxx % 10);
   printf("%d\n", _Xxxxxxxxxxxxxxx);
   printf("%d\n", _Yyyyyyyyyyyyyyy);
   system("pause");
    return 0;
}
