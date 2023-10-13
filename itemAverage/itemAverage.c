#include <stdio.h>

struct Product {
	int weight;
	int numberOfItems;
   int totalWeight;
};

float itemWeightAverage(struct Product item1, struct Product item2) {
   item1.totalWeight = item1.weight * item1.numberOfItems;
   item2.totalWeight = item2.weight * item2.numberOfItems;

   return (float)(item1.totalWeight + item2.totalWeight) / (item1.numberOfItems + item2.numberOfItems);


}

int main()
{
	struct Product item1;
	item1.weight = 15;
	item1.numberOfItems = 5;

	struct Product item2;
	item2.weight = 25;
	item2.numberOfItems = 4;

   float average = itemWeightAverage(item1, item2);
   printf("Average = %f\n", average);
}
