/*
function:
	struct exercise(struct embedding)
@Author : QuinnChuh
Date : 2018-01-21
*/

#include<stdio.h>

struct personal{
	char name[20];
	int day;
	char month[10];
	int year;
	struct{
		int num;
		char nicename[20];
	}others;
	float salary;
};

int main()
{
	struct personal person;
	printf("Input Values:\n");
	scanf("%s %d %s %d %f %d %s",
			person.name,&person.day,
			person.month,&person.year,
			&person.salary,&person.others.num,
			person.others.nicename);
	printf("%s %d %s %d %f %d %s\n",
			person.name,person.day,
			person.month,person.year,
			person.salary,person.others.num,
			person.others.nicename);
	return 0;
}
