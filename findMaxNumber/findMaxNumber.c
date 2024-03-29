#include <stdio.h>

void sortMaxArray(int arr[], int arrSize)
{
   // Find the max number by going through each and comparing and replacing at the first spot
   for (int i = 0; i < arrSize; i++) {
      int grabMax = arr[i];
      int maxAtIndex;
      int isMax = 0;
      for (int j = i+1; j < arrSize; j++) {
         if (grabMax < arr[j]) {
            isMax = 1;
            grabMax = arr[j];
            maxAtIndex = j;
         }
      }
      if (isMax) {
         arr[maxAtIndex] = arr[i];
         arr[i] = grabMax;
      }
      for (int z = 0; z < arrSize; z++) {
      }
   }
}

int main()
{
   int array[] = { 34, 12, 23, 56, 45};
   size_t arraySize = sizeof(array) / sizeof(array[0]);
   sortMaxArray(array, arraySize);
   for(int i = 0; i < arraySize; i++) {
      printf("%d: %d\n", i, array[i]);
   }
   return 0;
}
