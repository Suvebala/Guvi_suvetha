#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[350],b[350];
	scanf("%s %s",a,b);
	int m,n,i,j,u,k,l,x,y,z,flag=0;
	m=strlen(a);
	n=strlen(b);
	if(m==n)
	{
	for(i=0;i<m;i++)
	{
	for(j=i+1;j<m;j++)
	{
	u=a[i];
	k=a[j];
	l=b[i];
	x=b[j];
  y=u-k;
	z=l-x;
	if(y==z)
			{
				flag=1;
			}
			else
			{
				flag=0;
				break;
			}
		}
	}
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
