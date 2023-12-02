  #include <stdio.h>
  
  main() {
  	  int array[100], search, i, size,k=0;
  printf("Enter number of elements: ");
  scanf("%d", &size);
  printf("Enter %d integer(s): ", size);
  for (i = 0; i < size; i++)
    scanf("%d", &array[i]);
  printf("Enter a number to search: ");
  scanf("%d", &search);
  for(i=0;i< size; i++)
  {
    if (array[i] == search)  
    {
      printf("\n%d is present at index %d.\n", search, i);
      break;
    }k++;
  }if(k==size) {
  	printf("\n%d isn't present in the array.\n\n\n", search);
  }
  	
  }

