#include <stdio.h>
#include <string.h>

int main()
{
 int T;
 int x;
 char y;
 int angka;
 scanf("%d",&T); getchar();
 for(int i = 1; i<=T; i++)
 {
  scanf("%c %d",&y,&x); getchar();
  if(y == 'a' && x == 8 || y == 'a' && x == 7 || y == 'a' && x == 6 ||y == 'a' && x == 5 || y == 'a' && x == 4 ||y == 'a' && x == 3 || y == 'a' && x ==  2||y == 'a' && x == 1 ||
  y == 'b' && x == 8 || y == 'b' && x == 1 ||
  y == 'c' && x == 8 || y == 'c' && x == 1 ||
  y == 'd' && x == 8 || y == 'd' && x == 1 ||
  y == 'e' && x == 8 || y == 'e' && x == 1 || 
  y == 'f' && x == 8 || y == 'f' && x == 1 ||
  y == 'g' && x == 8 || y == 'g' && x == 1 ||
  y == 'h' && x == 8 || y == 'h' && x == 7 || y == 'h' && x == 6 ||y == 'h' && x == 5 || y == 'h' && x == 4 ||y == 'h' && x == 3 || y == 'h' && x ==  2||y == 'h' && x == 1 )
  {
   angka = 7;
  }
  if(y == 'b' && x == 7 || y == 'b' && x ==  6 ||y == 'b' && x ==  5 || y == 'b' && x ==  4 || y == 'b' && x ==  3 || y == 'b' && x ==  2|| 
  y == 'c' && x == 7 || y == 'c' && x == 2 || 
  y == 'd' && x == 7 || y == 'd' && x == 2 ||
  y == 'e' && x == 7 || y == 'e' && x == 2 ||
  y == 'f' && x == 7 || y == 'f' && x == 2 || 
  y == 'g' && x == 7 || y == 'g' && x ==  6 || y == 'g' && x == 5 || y == 'g' && x == 4 || y == 'g' && x == 3 || y == 'g' && x == 2 )
  {
   angka = 6;
  }
  if(y == 'c' && x == 6 || y == 'c' && x == 5 || y == 'c' && x == 4 || y == 'c' && x == 3 ||
  y == 'd' && x == 6 || y == 'd' && x == 3 ||
  y == 'e' && x == 6 || y == 'e' && x == 3 || 
  y == 'f' && x == 6 || y == 'f' && x == 5 || y == 'f' && x == 4 || y == 'f' && x == 3 )
  {
   angka = 5;
  }
  if(y == 'd' && x == 5 || y == 'd' && x == 4 || y == 'e' && x == 5 || y == 'e' && x == 4)
  {
   angka  = 4;
  }
  printf("Case #%d: %d\n",i,angka);
  angka = 0;
 }
}
