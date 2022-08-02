#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	int a,b;
	for(a=0;a<=11;a++){
		system("cls");
		for(b=1;b<a;b++) printf("...");
		printf("%2d%%",(b-1)*10);
		Sleep(400);
		}
	printf("\n congratulations,you have finished downloading!\n ");
    
	return 0;
}
