#include <stdio.h>
void bubbleSort(int array[], int size)
{
for (int step = 0; step < size - 1; ++step) 
{
for (int i = 0; i < size - step - 1; ++i)
{
if (array[i] > array[i + 1])
{
int temp = array[i];
array[i] = array[i + 1];
array[i + 1] = temp;
}
}
}
}
void printArray(int array[], int z)
{
for (int i = 0; i < z; ++i)
{
printf("%d ", array[i]);
}
printf("\n");
}
int main()
{
int n;
printf("How many elements are to be sorted?: ");
scanf("%d",&n);
int data[n];
printf("Enter the elements in the array: ");
for(int i=0;i<n;i++)
{
scanf("%d",&data[i]);
}
printf("Entered elements:\n");
printArray(data,n);
bubbleSort(data, n);
printf("\nSorted Array in Ascending Order:\n");
printArray(data, n);
return 0;
}