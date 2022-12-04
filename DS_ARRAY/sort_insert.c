
#include <stdio.h>
int insertSorted(int arr[], int n, int ele, int x)
{
	int i;
	if (n >= x)
		return n;
		for(i=n-1;i>=0&&arr[i]>ele;i--)
				arr[i+1]=arr[i];
		arr[i+1]=ele;
	return (n + 1);
    }

int main()
{
	int arr[20];
	int ele,n,i,x;
	printf("enter the size of the array\n");
    scanf("%d",&n);
	printf("enter the elements of the array\n");
	for (i = 0; i < n; i++)
		scanf("%d",&arr[i]);
	printf("enter the number to be inserted \n  ");
	    scanf("%d",&ele);
		x=sizeof(arr)/sizeof(arr[0]);
		printf("\nBefore Insertion: ");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	n = insertSorted(arr, n, ele, x);
	printf("\nAfter Insertion: ");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	return 0;
}

