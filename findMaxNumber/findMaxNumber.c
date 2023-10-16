#include <stdio.h>

void maxNumbers(int arr[], int arrSize)
{
   for (int i = 0; i < arrSize; i++) {
      printf("%d\n", arr[i]);
   }
}

int main()
{
   int array[] = { 1, 2, 3, 4, 5};
   size_t arraySize = sizeof(array) / sizeof(array[0]);
   maxNumbers(array, arraySize);
   return 0;
}
