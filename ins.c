#include<stdio.h>

int main()
{
int arr[7]={4,23,43,38,15,10,30};
 int i, key, j;
   for (i = 1; i < 7; i++)
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
printf("SORTED ARRAY:");
for(i=1;i<7;i++)
  printf(" %d",arr[i]);
 printf("\n");
}
