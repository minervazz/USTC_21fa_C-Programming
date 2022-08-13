#include<stdio.h> 
struct student
{	char id[20];
	char name[10];
	float grade[3];
	float ave; 
}stu[5],temp; 
main()
{	int i,j;
	FILE *fp=fopen("stud_dat","r"); 
	if(fp!=NULL) 
	{	for(i=0;i<5;i++)
			fscanf(fp,"%s %s %f%f%f%f",stu[i].id,stu[i].name,&stu[i].grade[0],&stu[i].grade[1],&stu[i].grade[2],&stu[i].ave); 
		fclose(fp);
	}
	else 
	{printf("Can not find the stud_dat");exit(0);
	}
	
	for(i=0;i<5;i++)
		for(j=i+1;j<5;j++) 
			if(stu[j].ave>stu[i].ave)
			{	temp=stu[i];
				stu[i]=stu[j];
				stu[j]=temp;
			}
	
	fp=fopen("stu_sort","w");
	for(i=0;i<5;i++)
		fprintf(fp,"%s %s %f %f %f %f\n",stu[i].id,stu[i].name,stu[i].grade[0],stu[i].grade[1],stu[i].grade[2],stu[i].ave); 
	fclose(fp);
	printf("sort succeed!");
}             
