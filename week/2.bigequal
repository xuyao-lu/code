#include<string.h>
#include <stdio.h>
int main()
{
	char str1[100000],str2[100000];
	int a1,a2,b1,b2,m,n,flag1=1,flag2=1,fflag=1,len;
	while(scanf ("%s %s",str1,str2)!=EOF)
	{
		flag1=1,flag2=1,fflag=1;
		m=strlen(str1);
		n=strlen(str2);
	
		for (int i=0;i<m;i++)
			if(str1[i]=='.')
				flag1=0;
		if(flag1)
		{
			str1[m]='.';
			m++;
		}
	
		
		for (int i=0;i<n;i++)
			if(str2[i]=='.')
				flag2=0;
		if(flag2)
		{
			str2[n]='.';
			n++;
		}

		for (int i=0;i<m;i++)
			if(str1[i]!='0')
			{
				a1=i;
				break;
			}
		for (int i=m-1;i>=0;i--)
			if(str1[i]!='0')
			{
				a2=i;
				break;
			}

		for (int i=0;i<n;i++)
			if(str2[i]!='0')
			{
				b1=i;
				break;
			}
		for (int i=n-1;i>=0;i--)
			if(str2[i]!='0')
			{
				b2=i;
				break;
			}


		if((a1-a2)!=(b1-b2))
		{
			printf ("NO\n");
			continue;
		}


		len =a2-a1+1;
		for (int i=0;i< len ;i++)
			if(str1[a1]!=str2[b1])
			{
				printf ("NO\n");
				fflag=0;
				a1++;
				b1++;
			}
		if(fflag==1)
			printf ("YES\n");

		memset(str1,'\0',sizeof(str1));
		memset(str2,'\0',sizeof(str2));
	}
}
