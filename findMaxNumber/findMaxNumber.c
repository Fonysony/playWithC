#include <stdio.h>

void maxNumbers(int arr[], int arrSize)
{
   // Find the max number by going through each and comparing and replacing at the first spot
   int max = arr[0];
   for (int i = 0; i < arrSize; i++) {
      for (int j = i; j < arrSize; j++) {
         if (max < arr[j]) {
            printf("%d\n", arr[j]);
         }
      }
   }
}

int main()
{
   int array[] = { 1, 2, 3, 4, 5};
   size_t arraySize = sizeof(array) / sizeof(array[0]);
   maxNumbers(array, arraySize);
   return 0;
}
