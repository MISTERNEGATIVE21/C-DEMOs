# include <stdio.h>
# include <string.h>
struct student
{
	char name[50];
	int rollno;
	float marksinphysics,marksinchemistry,marksinmathematics,total;
}s[50],temp;

void main()
{
	int i, n, j;

	printf("Enter number of students data you want to enter:\n");
	scanf("%d",&n);
	for(i=0;i < n;i++)
	{
		printf("Enter name of student %d\n",(i+1));
		scanf("%s", &s[i].name);
		printf("Enter Roll No of student %d\n",(i+1));
		scanf("%d",&s[i].rollno);
		
		printf("Enter marks for Physics of student %d\n",(i+1));
		scanf("%f",&s[i].marksinphysics);
		 printf("Enter marks for chemistry of student %d\n",(i+1));
                scanf("%f",&s[i].marksinchemistry);

		printf("Enter marks for Mathematics of student %d\n",(i+1));
		scanf("%f",&s[i].marksinmathematics);
		s[i].total = (s[i].marksinphysics+s[i].marksinchemistry+s[i].marksinmathematics);
		printf("Total Marks of %d student = %f\n",(i+1),s[i].total);
	}

	for(i=0; i < n;i++)
	{
		printf("\nName of student: %s",s[i].name);
		printf("\nRoll No of student: %d",s[i].rollno);
		printf("\nTotal of student: %f\n",s[i].total);
	}
}
