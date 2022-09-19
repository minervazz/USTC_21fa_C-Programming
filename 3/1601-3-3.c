#include<stdio.h>     
int main(){
	int a,b,temp,r,m,n,m1,n1;
	
	printf("请输入两个正整数（分子 分母）：");
	scanf("%d%d",&n,&m);
	
	if((m<=0)||(n<=0)||(n>=m)){    //判断分子分母是否满足正确关系 
		printf("你输入的数不对");
	}
	
	else {                  //用辗转相除求最大公因数 
    m1=m;
 	n1=n;
 	while(temp=(m%n)){
 		m=n;
 		n=temp;
 	}
 	r=n;
 	a=n1/r;b=m1/r;         //除掉最大公约数，化简 
    
	printf("分数%d/%d 化简后为%d/%d",n1,m1,a,b);
	}
    
	return 0;
} 
