#include <stdio.h>
int main()
{
 int i, j, size, temp,array[100],k=0,search,middle,last,first;	
  printf("Sample program:\n\nEnter number of elements: ");
  scanf("%d",&size);
  printf("Enter %d element/s: ", size);
   for(i=0;i<size;i++) 
     scanf("%d", &array[i]); 	
   for(i=1;i<size;i++) {
      temp=array[i];
      j=i-1;
      while((temp<array[j])&&(j>=0)){
         array[j+1]=array[j];
         j=j-1;
         k++;
      }
      array[j+1]=temp;
   }printf("Enter the value to find: ");
     scanf("%d",&search);
   printf("\nSorted array[]: ");
   for(i=0;i<size;i++) {
   	printf(" %d",array[i]);
}
   first = 0;
   last = size - 1;
   middle = (first+last)/2;
   while (first <= last) {
      if (array[middle] < search)
         first = middle + 1;    
      else if (array[middle] == search) {
         printf("\n%d is present at index %d.\n", search, middle);
         break;
      }
      else
         last = middle - 1;
      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! %d is not present in the list.\n", search);

 
}



