#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _Aaaaaaaaaaaaaaaaa, _Aaaaaaaaaaaaaaaa2, _Bbbbbbbbbbbbbbbbb, _Xxxxxxxxxxxxxxxxx, _Cccccccccccccccc1, _Cccccccccccccccc2;
   printf("Enter _Aaaaaaaaaaaaaaaaa:");
   scanf("%d", &_Aaaaaaaaaaaaaaaaa);
   printf("Enter _Bbbbbbbbbbbbbbbbb:");
   scanf("%d", &_Bbbbbbbbbbbbbbbbb);
   for (int _Aaaaaaaaaaaaaaaa2 = _Aaaaaaaaaaaaaaaaa; _Aaaaaaaaaaaaaaaa2 <= _Bbbbbbbbbbbbbbbbb; _Aaaaaaaaaaaaaaaa2++)
   printf("%d\n", _Aaaaaaaaaaaaaaaa2 * _Aaaaaaaaaaaaaaaa2);
   for (int _Aaaaaaaaaaaaaaaa2 = _Bbbbbbbbbbbbbbbbb; _Aaaaaaaaaaaaaaaa2 <= _Aaaaaaaaaaaaaaaaa; _Aaaaaaaaaaaaaaaa2++)
   printf("%d\n", _Aaaaaaaaaaaaaaaa2 * _Aaaaaaaaaaaaaaaa2);
   _Xxxxxxxxxxxxxxxxx = 0;
   _Cccccccccccccccc1 = 0;
   while (_Cccccccccccccccc1 < _Aaaaaaaaaaaaaaaaa)
   {
   {
   _Cccccccccccccccc2 = 0;
   while (_Cccccccccccccccc2 < _Bbbbbbbbbbbbbbbbb)
   {
   {
   _Xxxxxxxxxxxxxxxxx = _Xxxxxxxxxxxxxxxxx + 1;
   _Cccccccccccccccc2 = _Cccccccccccccccc2 + 1;
   }
   }
   _Cccccccccccccccc1 = _Cccccccccccccccc1 + 1;
   }
   }
   printf("%d\n", _Xxxxxxxxxxxxxxxxx);
   _Xxxxxxxxxxxxxxxxx = 0;
   _Cccccccccccccccc1 = 1;
   do
   {
   _Cccccccccccccccc2 = 1;
   do
   {
   _Xxxxxxxxxxxxxxxxx = _Xxxxxxxxxxxxxxxxx + 1;
   _Cccccccccccccccc2 = _Cccccccccccccccc2 + 1;
   }
   while (!(_Cccccccccccccccc2 > _Bbbbbbbbbbbbbbbbb));
   _Cccccccccccccccc1 = _Cccccccccccccccc1 + 1;
   }
   while (!(_Cccccccccccccccc1 > _Aaaaaaaaaaaaaaaaa));
   printf("%d\n", _Xxxxxxxxxxxxxxxxx);
   system("pause");
    return 0;
}
