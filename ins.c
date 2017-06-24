#include<stdio.h>
int n;
void read(int *arr)
{
 
  int i;
  printf ("Enter the no. of elements:");
  scanf("%d",&n);
  printf("Enter the elements:");
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
}
int sort(int *arr)
{

 int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
 
       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}
int main()
{
  int arr[50];
  int i;
  read(arr);
 sort(arr);
printf("SORTED ARRAY:");
for(i=0;i<n;i++)
  printf(" %d",arr[i]);
 printf("\n");

}
