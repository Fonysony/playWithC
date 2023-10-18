#include <stdio.h>

void sortMaxArray(int arr[], int arrSize)
{
   int loopsInTotal = 0;
   // Find the max number by going through each and comparing and replacing at the first spot
   for (int i = 0; i < arrSize; i++) {
      printf("\n------- Loop %d Started -------\n", i);
      int grabMax = arr[i];
      int maxAtIndex;
      int isMax = 0;
      int jLoops = 0;
      printf("Start grabMax to %d\n", grabMax);
      for (int j = i+1; j < arrSize; j++) {
         printf("j is %d, Check: %d < %d, bool: %d\n", j, grabMax, arr[j], grabMax < arr[j]);
         if (grabMax < arr[j]) {
            isMax = 1;
            grabMax = arr[j];
            maxAtIndex = j;
            printf("grabMax = %d at index %d\n", arr[j], maxAtIndex);
         }
         jLoops++;
         loopsInTotal++;
      }
      if (isMax) {
         arr[maxAtIndex] = arr[i];
         arr[i] = grabMax;
      }
      printf("------- Loop %d Ended J loops %d -------\n", i, jLoops);
      for (int z = 0; z < arrSize; z++) {
         printf("%d ", arr[z]);
      }
      printf("\n");
      loopsInTotal++;
      printf("loopsInTotal++ from i, %d\n", loopsInTotal);
   }
   printf("Loops in total %d\n", loopsInTotal);
}

int main()
{
   int array[] = { 34, 12, 23, 56, 45};
   size_t arraySize = sizeof(array) / sizeof(array[0]);
   sortMaxArray(array, arraySize);
   for(int i = 0; i < arraySize; i++) {
      printf("%d ", array[i]);
   }
   printf("\n");
   return 0;
}
