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
	int q[n],s,bfs[n],c=0;
	int v[n];
	for(i=0;i<n;i++)
		v[i]=0;
	q[0]=0;
	int f=0,r=1;
	while(f!=r)
	{
		if(v[q[f]]==0)
		{
			v[q[f]]=1;
			bfs[c]=q[f];
			c++;
			for(int i=0;i<n;i++)
			{
				if(a[q[f]][i]==1 && v[i]!=1)
				{
					q[r]=i;
					r++;	
				}
			}
		
		}
		f++;
	}
	printf("BFS traversal:\n");
	for(i=0;i<n;i++)
		printf("%d\t",bfs[i]);
	printf("\n");

}