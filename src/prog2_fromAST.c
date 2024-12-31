#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int _Aaaaaaaaaaaaaaaaa;
   int _Bbbbbbbbbbbbbbbbb;
   int _Ccccccccccccccccc;
   printf("Enter _Aaaaaaaaaaaaaaaaa:");
   scanf("%d", &_Aaaaaaaaaaaaaaaaa);
   printf("Enter _Bbbbbbbbbbbbbbbbb:");
   scanf("%d", &_Bbbbbbbbbbbbbbbbb);
   printf("Enter _Ccccccccccccccccc:");
   scanf("%d", &_Ccccccccccccccccc);
   if (_Aaaaaaaaaaaaaaaaa > _Bbbbbbbbbbbbbbbbb) 
   {
   if (_Aaaaaaaaaaaaaaaaa > _Ccccccccccccccccc) 
   {
   goto Abigger;
   }
   else
   {
   printf("%d\n", _Ccccccccccccccccc);
   goto OutofIF;
Abigger:
   printf("%d\n", _Aaaaaaaaaaaaaaaaa);
   goto OutofIF;
   }
   }
   if (_Bbbbbbbbbbbbbbbbb < _Ccccccccccccccccc) 
   {
   printf("%d\n", _Ccccccccccccccccc);
   }
   else
   {
   printf("%d\n", _Bbbbbbbbbbbbbbbbb);
   }
OutofIF:
   if (((_Aaaaaaaaaaaaaaaaa == _Bbbbbbbbbbbbbbbbb && _Aaaaaaaaaaaaaaaaa == _Ccccccccccccccccc) && _Bbbbbbbbbbbbbbbbb == _Ccccccccccccccccc)) 
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((_Aaaaaaaaaaaaaaaaa < 0 || _Bbbbbbbbbbbbbbbbb < 0) || _Ccccccccccccccccc < 0)) 
   {
   printf("%d\n", (0 - 1));
   }
   else
   {
   printf("%d\n", 0);
   }
   if (!(_Aaaaaaaaaaaaaaaaa < (_Bbbbbbbbbbbbbbbbb + _Ccccccccccccccccc))) 
   {
   printf("%d\n", 10);
   }
   else
   {
   printf("%d\n", 0);
   }
   system("pause");
    return 0;
}
