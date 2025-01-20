#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int   _Aaaaaaaaaaaaaaa, _Aaaaaaaaaaaaaae, _Bbbbbbbbbbbbbbb, _Xxxxxxxxxxxxxxx, _Cccccccccccccci, _Cccccccccccccck;
   printf("Enter _Aaaaaaaaaaaaaaa:");
   scanf("%d", &_Aaaaaaaaaaaaaaa);
   printf("Enter _Bbbbbbbbbbbbbbb:");
   scanf("%d", &_Bbbbbbbbbbbbbbb);
   for (_Aaaaaaaaaaaaaae = _Aaaaaaaaaaaaaaa; _Bbbbbbbbbbbbbbb >= _Aaaaaaaaaaaaaae; _Aaaaaaaaaaaaaae++)
   {
   printf("%d\n", _Aaaaaaaaaaaaaae * _Aaaaaaaaaaaaaae);
   }
   for (_Aaaaaaaaaaaaaae = _Bbbbbbbbbbbbbbb; _Aaaaaaaaaaaaaaa <= _Aaaaaaaaaaaaaae; _Aaaaaaaaaaaaaae--)
   {
   printf("%d\n", _Aaaaaaaaaaaaaae * _Aaaaaaaaaaaaaae);
   }
   _Xxxxxxxxxxxxxxx = 0;
   _Cccccccccccccci = 0;
   while (_Cccccccccccccci < _Aaaaaaaaaaaaaaa)
   {
   {
   _Cccccccccccccck = 0;
   while (_Cccccccccccccck < _Bbbbbbbbbbbbbbb)
   {
   {
   _Xxxxxxxxxxxxxxx = _Xxxxxxxxxxxxxxx + 1;
   _Cccccccccccccck = _Cccccccccccccck + 1;
   }
   }
   _Cccccccccccccci = _Cccccccccccccci + 1;
   }
   }
   printf("%d\n", _Xxxxxxxxxxxxxxx);
   _Xxxxxxxxxxxxxxx = 0;
   _Cccccccccccccci = 1;
   do 
   { 
    {
   _Cccccccccccccck = 1;
   do 
   { 
    {
   _Xxxxxxxxxxxxxxx = _Xxxxxxxxxxxxxxx + 1;
   _Cccccccccccccck = _Cccccccccccccck + 1;
   }
 
   }  while (!(_Cccccccccccccck > _Bbbbbbbbbbbbbbb));
   _Cccccccccccccci = _Cccccccccccccci + 1;
   }
 
   }  while (!(_Cccccccccccccci > _Aaaaaaaaaaaaaaa));
   printf("%d\n", _Xxxxxxxxxxxxxxx);
   system("pause");
    return 0;
}
