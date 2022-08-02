#include<stdio.h>
int main(){
	float GPA;
	int i;
	for(i=0;i<3;i++)
	{
		scanf("%f",&GPA);
		if(GPA>4.3){
		    printf("兄弟，你是不是卷过头了");
	    }
	    else if(GPA>=4.0&&GPA<=4.3){
	        printf("给别人一点机会吧，别卷了");
	    }
	    else{
	    	printf("你还可以再卷一点");
		} 
	}
	return 0; 
} 
