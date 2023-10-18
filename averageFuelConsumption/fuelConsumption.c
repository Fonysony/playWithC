#include <stdio.h>

float avFuelConsumption(int totalDistance, float totalFuelSpent) {
   return totalDistance / totalFuelSpent;
}

int main()
{
   float consumption = avFuelConsumption(350, 5);
   return 0;
}
