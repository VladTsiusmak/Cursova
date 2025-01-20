#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int   _Aaaaaaaaaaaaaaa, _Bbbbbbbbbbbbbbb, _Ttttttttttttttt, _Ccccccccccccccc;
   printf("Enter _Aaaaaaaaaaaaaaa:");
   scanf("%d", &_Aaaaaaaaaaaaaaa);
   printf("Enter _Bbbbbbbbbbbbbbb:");
   scanf("%d", &_Bbbbbbbbbbbbbbb);
   printf("Enter _Ccccccccccccccc:");
   scanf("%d", &_Ccccccccccccccc);
   if ((_Bbbbbbbbbbbbbbb > _Aaaaaaaaaaaaaaa))
{
   goto Outofia;
}
   else
{
   _Ttttttttttttttt = _Aaaaaaaaaaaaaaa;
}
Outofib:
   if ((_Ccccccccccccccc > _Bbbbbbbbbbbbbbb && _Ccccccccccccccc > _Aaaaaaaaaaaaaaa))
{
   goto Outofic;
}
   else
{
   goto Outofif;
}
Outofia:
   _Ttttttttttttttt = _Bbbbbbbbbbbbbbb;
   goto Outofib;
Outofic:
   _Ttttttttttttttt = _Ccccccccccccccc;
   goto Outofif;
Outofif:
   printf("%d\n", _Ttttttttttttttt);
   if (((_Aaaaaaaaaaaaaaa == _Bbbbbbbbbbbbbbb) && (_Aaaaaaaaaaaaaaa == _Ccccccccccccccc) && (_Bbbbbbbbbbbbbbb == _Ccccccccccccccc)))
{
   printf("%d\n", 1);
}
   else
{
   printf("%d\n", 0);
}
   if (((_Aaaaaaaaaaaaaaa < 0) || (_Bbbbbbbbbbbbbbb < 0) || (_Ccccccccccccccc < 0)))
{
   printf("%d\n", -1);
}
   else
{
   printf("%d\n", 0);
}
   if ((!(_Aaaaaaaaaaaaaaa < (_Bbbbbbbbbbbbbbb + _Ccccccccccccccc))))
{
   printf("%d\n", (10));
}
   else
{
   printf("%d\n", (0));
}
   system("pause");
    return 0;
}
