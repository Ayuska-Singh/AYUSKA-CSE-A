#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void bubbleSort(int n)
{
int i, j,temp,arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for (i = 0; i < n-1; i++)
{
    for (j = 0; j < n-i-1; j++)
    {
        if (arr[j] > arr[j+1])
        swap(&arr[j],&arr[j+1]);
    }
}
printf("THE SORTED ARRAY AFTER BUBBLE SORTING :\n");
for(i=0;i<n;i++)
printf("%d ",arr[i]);
printf("\n");
}
void selectionSort(int n)
{
int i, j,min,temp,arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for (i = 0; i < n-1; i++)
	{
		min = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min])
			min = j;
		swap(&arr[min], &arr[i]);
	}
printf("THE SORTED ARRAY AFTER SELECTION SORTING :\n");
for(i=0;i<n;i++)
printf("%d ",arr[i]);
printf("\n");
}
void insertionSort(int n)
{
int i, j,key,arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
printf("THE SORTED ARRAY AFTER INSERTION SORTING :\n");
for(i=0;i<n;i++)
printf("%d ",arr[i]);
printf("\n");
}
void shellSort(int n)
{
int i,j,temp,arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for (int gap = n/2; gap > 0; gap /= 2)
	{		
		for (int i = gap; i < n; i += 1)
		{	
			int temp = arr[i];
			int j;		
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
				arr[j] = arr[j - gap];
			arr[j] = temp;
		}
	}
printf("THE SORTED ARRAY AFTER SHELL SORTING :\n");
for(i=0;i<n;i++)
printf("%d ",arr[i]);
printf("\n");
}
void input_array(int A[], int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
}
void print_array(int A[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf(" %d ",A[i]);
    }
    printf("\n");
}
void merge(int A[],int mid,int l,int h)
{
    int i,j,k,B[h-l];
    i=l;
    j=mid+1;
    k=l;
    while(j<=h&&i<=mid)
    {
        if(A[i]>A[j])
        {
            B[k++]=A[j++];
        }
        else if(A[i]<A[j])
        {
            B[k++]=A[i++];
        }
        else
            {
                B[k++]=A[i++];
                j++;
            }
    }
    while(i<=mid)
    {
        B[k++]=A[i++];
    }
    while(j<=h)
    {
        B[k++]=A[j++];
    }
        for(int i=l;i<=h;i++)
        {
            A[i]=B[i];
        }
}
void merge_sort(int A[],int l,int h)
{
    int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        merge_sort(A,l,mid);
        merge_sort(A,mid+1,h);
        merge(A,mid,l,h);
    }
}
int partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i= (low- 1); 
	for (int j = low; j <= high - 1; j++) 
	{	
		if (arr[j] < pivot) 
		{
			i++; 
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
	if (low < high) {
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}
int random_partition(int arr[], int low, int high)
{
	srand(time(0));
	int random = low + rand() % (high - low);

	int temp = arr[random];
	arr[random] = arr[low];
	arr[low] = temp;

	return partition(arr, low, high);
}
void random_quickSort(int arr[], int low, int high)
{
	if (low < high) {
		int pi = random_partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}
int getMax(int arr[], int n)
{
	int mx = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] > mx)
			mx = arr[i];
	return mx;
}
int C[101]={0};
void counting_sort(int A[],int N)
{
    int K= getMax(A, N);
    int B[20];
    int i,j;
    for(i=0;i<=N-1;i++)
    {
        C[A[i]]++;
    }
    for(i=1;i<=K;i++)
    {
        C[i]=C[i]+C[i-1];
    }
    for(j=N-1;j>=0;j--)
    {
        B[C[A[j]]-1]=A[j];
        C[A[j]]--; 
    }
    for(i=0;i<N;i++)
    printf("%d   ",B[i]);
    printf("\n");
}
void countSort(int arr[], int n, int exp)
{
	int output[n]; 
	int i, count[10] = { 0 };
	for (i = 0; i < n; i++)
		count[(arr[i] / exp) % 10]++;
	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];
	for (i = n - 1; i >= 0; i--) {
		output[count[(arr[i] / exp) % 10] - 1] = arr[i];
		count[(arr[i] / exp) % 10]--;
	}
	for (i = 0; i < n; i++)
		arr[i] = output[i];
}
void radixsort(int arr[], int n)
{
	int m = getMax(arr, n);

	for (int exp = 1; m / exp > 0; exp *= 10)
		countSort(arr, n, exp);
}
void heapify(int arr[], int N, int i)
{	
	int largest = i;	
	int left = 2 * i + 1;	
	int right = 2 * i + 2;	
	if (left < N && arr[left] > arr[largest])
		largest = left;	
	if (right < N && arr[right] > arr[largest])
		largest = right;	
	if (largest != i) {
		swap(&arr[i], &arr[largest]);
		heapify(arr, N, largest);
	}
}
void heapSort(int arr[], int N)
{
	for (int i = N / 2 - 1; i >= 0; i--)
		heapify(arr, N, i);
	for (int i = N - 1; i >= 0; i--) {
		swap(&arr[0], &arr[i]);
		heapify(arr, i, 0);
	}
}
int main()
{
    int n,A[100];
    printf("ENTER THE SIZE OF THE ARRAY FOR SORTING\n");
    scanf("%d",&n);
    printf("BUBBLE SORT\n");
    bubbleSort(n);
    printf("SELECTION SORT\n");
    selectionSort(n);
    printf("INSERTION SORT\n");
    insertionSort(n);
    printf("SHELL SORT\n");
    shellSort(n);
    printf("MERGE SORT\n");
    input_array(A,n);
    merge_sort(A,0,n-1);
    print_array(A,n);
    printf("QUICK SORT\n");
    input_array(A,n);
    quickSort(A,0,n-1);
    print_array(A,n);
    printf("RANDOMIZED QUICK SORT\n");
    input_array(A,n);
    random_quickSort(A,0,n-1);
    print_array(A,n);
    printf("COUNTING SORT\n");
    input_array(A,n);
    counting_sort(A,n);
    printf("RADIX SORT\n");
    input_array(A,n);
    radixsort(A,n);
    print_array(A,n);
    printf("HEAP SORT\n");
    input_array(A,n);
    heapSort(A,n);
    print_array(A,n);
}