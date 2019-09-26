#include<stdio.h>
int main()
{
	printf("Enter n\n");
	int n;
	scanf("%d",&n);
	int a[n][n],i,j;
	printf("Enter graph in adj matrix form\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	int q[n],s,e=0,dfs[n],c=0,flag=0,d;
	int v[n];
	for(i=0;i<n;i++)
		v[i]=0;
	printf("Enter Depth\n");
	scanf("%d",&d);
	q[0]=0;
	
	int f=-1,r=0;
	do
	{
		if(v[q[r]]==0)
		{
			v[q[r]]=1;
			dfs[c]=q[r];
			c++;
			flag=0;
		}
		if(e!=d)
		{
			for(int i=0;i<n;i++)
			{
				if(a[q[r]][i]==1 && v[i]!=1)
				{
					q[++r]=i;
					e++;
					flag=1;
					break;	
				}
			}
			if(flag==0)
			{
				r--;
				e--;
			}
		}
		else
		{
			r--;	
			e--;
		}
	}while(f!=r);
	printf("DFS Traversal:\n");
	for(i=0;i<c;i++)
		printf("%d\t",dfs[i]);
	printf("\n");

}