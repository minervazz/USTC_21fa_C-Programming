#include<stdio.h>
struct student
{	char id[20];
	char name[10];
	float grade[3];
	float ave; 
}stu[5]; 
main()
{	FILE *fp=fopen("stud_dat","wb"); 
	int i; 
	printf("输入学号、姓名、三次成绩:\n");
	for(i=0;i<5;i++)
	{	scanf("%s %s %f%f%f",stu[i].id,stu[i].name,&stu[i].grade[0],&stu[i].grade[1],&stu[i].grade[2]);	
		stu[i].ave=(stu[i].grade[0]+stu[i].grade[1]+stu[i].grade[2])/3;
		fprintf(fp,"%s %s %f %f %f %f\n",stu[i].id,stu[i].name,stu[i].grade[0],stu[i].grade[1],stu[i].grade[2],stu[i].ave);
	}	
	fclose(fp);
} 
/*
PB01 白雪飞 67 79 89
PB02 杨一帆 99 100 94
PB03 林佳滢 11 22 33 
PB04 任欢 66 77 83
PB05 吴文轩 95 40 12
*/
