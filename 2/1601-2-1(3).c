#include<stdio.h>
int main()
{int a=2,b=3,c=4;
 int aa,ba,da,fa;
 float ca,ea;
 aa=a+=a+b;
 ba=a*=b%c;
 ca=a/=c-a;
 da=a+=a-=a*=a;
 ea=a=(a=++b,a+5,a/5);
 fa=a=(a>=b>=2)?1:0;
 printf("这五个数依次为：\na)=%d\nb)=%d\nc)=%f\nd)=%d\ne)=%f\nf)=%d\n",aa,ba,ca,da,ea,fa);
 return 0;
}

