#include<stdio.h>
int main()
{
	printf("Array size: ");
	int n,a[10],num,arr[10];
	scanf("%d",&n);
	printf("\nArray: \t");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nEnter num:\t");
	scanf("%d",&num);	
	for(int i=0;i<n;i++)
		arr[i]=a[i]%num;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(arr[i]>arr[j])
			{
				int temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;

				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
	for(int i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
}