#include <stdio.h>
int main()
{
	int year,month,day,days;
	while (scanf ("%d/%d/%d",&year,&month,&day)!=EOF)
	
	{
		days=0;
		int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		if((year%4==0&&year%100!=0)||year%400==0)
			a[1]=29;
		for (int i=1;i<month;i++)
			days+=a[i];
		printf ("%d\n",days+day);
	}
		
}
