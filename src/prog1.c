#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _Aaaaaaaaaaaaaaaaa, _Bbbbbbbbbbbbbbbbb, _Xxxxxxxxxxxxxxxxx, _Yyyyyyyyyyyyyyyyy;
   printf("Enter _Aaaaaaaaaaaaaaaaa:");
   scanf("%d", &_Aaaaaaaaaaaaaaaaa);
   printf("Enter _Bbbbbbbbbbbbbbbbb:");
   scanf("%d", &_Bbbbbbbbbbbbbbbbb);
   printf("%d\n", _Aaaaaaaaaaaaaaaaa + _Bbbbbbbbbbbbbbbbb);
   printf("%d\n", _Aaaaaaaaaaaaaaaaa - _Bbbbbbbbbbbbbbbbb);
   printf("%d\n", _Aaaaaaaaaaaaaaaaa * _Bbbbbbbbbbbbbbbbb);
   printf("%d\n", _Aaaaaaaaaaaaaaaaa / _Bbbbbbbbbbbbbbbbb);
   printf("%d\n", _Aaaaaaaaaaaaaaaaa % _Bbbbbbbbbbbbbbbbb);
   _Xxxxxxxxxxxxxxxxx = (_Aaaaaaaaaaaaaaaaa - _Bbbbbbbbbbbbbbbbb) * 10 + (_Aaaaaaaaaaaaaaaaa + _Bbbbbbbbbbbbbbbbb) / 10;
   _Yyyyyyyyyyyyyyyyy = _Xxxxxxxxxxxxxxxxx + (_Xxxxxxxxxxxxxxxxx % 10);
   printf("%d\n", _Xxxxxxxxxxxxxxxxx);
   printf("%d\n", _Yyyyyyyyyyyyyyyyy);
   system("pause");
    return 0;
}
