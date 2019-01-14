#include <stdio.h>
int r;
int year, month,day;
void print(int dday,int times)
{
	switch(month)
	{
		case 1:printf("January %d\n",year);break; 
		case 2:printf("February %d\n",year);break; 
		case 3:printf("March %d\n",year);break; 
		case 4:printf("April %d\n",year);break; 
		case 5:printf("May %d\n",year);break; 
		case 6:printf("June %d\n",year);break; 
		case 7:printf("July %d\n",year);break; 
		case 8:printf("August %d\n",year);break; 
		case 9:printf("September %d\n",year);break; 
		case 10:printf("October %d\n",year);break; 
		case 11:printf("November %d\n",year);break; 
		case 12:printf("December %d\n",year);break; 
	}
	printf("     Sun     Mon     Tue     Wed     Thu     Fri     Sat\n");
    int temp=times%7;
    day+=temp;
    if(day>=7)
    day%=7;
	for(int i=0;i<=day-1;++i)
	{
	   printf("        ");
	}
	for(int i=1;i<=dday;++i)
	{
		printf("%8d",i);
		if((day+i)%7==0&&(i!=dday))
		printf("\n");
	}
	printf("\n");
}
int main()
{
	
	scanf("%d%d%d",&year,&day,&month);
	if(year%100==0)
		 {
		 	if(year%400==0) r=0;
		    else r=1;
		 }
	else if(year%4==0) r=0;
		 else r=1;
	if(month==1) print(31,0);
	if(month==2) 
	{
		if(r)
		print(28,31);
		else print(29,31);
	}
	if(month==3)
	{
		if(r)
		print(31,31+28);
		else print(31,31+29);
	}
	if(month==4) 
	{
		if(r)
		print(30,31+28+31);
		else print(30,31+29+31);
	}
	if(month==5) 
	{
		if(r)
		print(31,31+28+31+30);
		else print(31,31+29+31+30);
	}
	if(month==6) 
	{
		if(r)
		print(30,31+28+31+30+31);
		else print(30,31+29+31+30+31);
	}
	if(month==7) 
	{
		if(r)
		print(31,31+28+31+30+31+30);
		else print(31,31+29+31+30+31+30);
	}
	if(month==8) 
	{
		if(r)
		print(31,31+28+31+30+31+30+31);
		else print(31,31+29+31+30+31+30+31);
	}
	if(month==9) 
	{
		if(r)
		print(30,31+28+31+30+31+30+31+31);
		else print(30,31+29+31+30+31+30+31+31);
	}
	if(month==10) 
	{
		if(r)
		print(31,31+28+31+30+31+30+31+31+30);
		else print(31,31+29+31+30+31+30+31+31+30);
	}
	if(month==11) 
	{
		if(r)
		print(30,31+28+31+30+31+30+31+31+30+31);
		else print(30,31+29+31+30+31+30+31+31+30+31);
	}
	if(month==12) 
	{
		if(r)
		print(31,31+28+31+30+31+30+31+31+30+31+30);
		else print(31,31+29+31+30+31+30+31+31+30+31+30);
	}
}
