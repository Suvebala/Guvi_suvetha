#include <stdio.h>
#include<string.h>
int main(void) 
{
	char p[350],q[350];
	scanf("%s %s",p,q);
	int m,n,i,j,u,k,l,x,y,z,flag=0;
	m=strlen(p);
	n=strlen(q);
	if(m==n)
	{
	for(i=0;i<m;i++)
	{
	for(j=i+1;j<m;j++)
	{
	u=p[i];
	k=p[j];
	l=q[i];
	x=q[j];
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
