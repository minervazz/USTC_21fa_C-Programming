#include <stdio.h>
int main(){
char a,b,c,d,e,f;
scanf("%c%c",&a,&b);//a=a，b=b
getchar();
c=getchar();
d=getchar();//c=d，d=e
printf("%c%c%c%c\n",a,b,c,d);
printf("%c%d\n",a,a);
scanf("%c%c",&e,&f);//e=(char)f（值为102），f=LF(换行ASCII值为10)
printf("%6d%6d\n",e,f);
printf("%8d%8d\n",sizeof(a),sizeof(b));//字符型1字节
putchar(a);putchar(c);
return 0;}

