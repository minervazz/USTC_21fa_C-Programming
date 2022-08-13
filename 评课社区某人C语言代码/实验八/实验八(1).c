#include<stdio.h> 
#include<math.h> 
struct complex{
	double re,im; 
}; 
void add(struct complex s1,struct complex s2){
	printf("和为%f%+fi\n",s1.re+s2.re,s1.im+s2.im);
}
void mul(struct complex s1,struct complex s2){
	printf("积为%f%+fi\n",s1.re*s2.re-s1.im*s2.im,s1.re*s2.im+s2.re*s1.im);
}
double mod(struct complex s){  
	return sqrt(pow(s.re,2)+pow(s.im,2)); 
}
main(){
	struct complex z1,z2; 
	printf("输入复数1的实虚部：");
	scanf("%lf%lf",&z1.re,&z1.im); 
	printf("输入复数2的实虚部：");
	scanf("%lf%lf",&z2.re,&z2.im);
	add(z1,z2);
	mul(z1,z2);
	printf("|z1|=%f，|z2|=%f",mod(z1),mod(z2)); 
}
