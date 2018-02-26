#include <stdio.h>

float fx(float x)
{ return x*x*x*x; }

main()
{
 float a,b,h,m,n,sum=0,jl,p;

 printf("Masukkan batas a : ");scanf("%f",&a);
 printf("Masukkan batas b : ");scanf("%f",&b);
 printf("Masukkan nilai n : ");scanf("%f",&n);

 h = (b-a)/n;
 p = a ;
 do
{
  p = p+h ;
  jl = fx(p);
  sum = sum + jl;
 } while (p<b-h);
 
 m = (h/2)*(fx(a) + 2*sum + fx(b));
 printf("Hasil aproksimasi integral dg metoda trapesium : %.3f\n",m);
}