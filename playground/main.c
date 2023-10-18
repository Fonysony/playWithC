#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void print_binary(unsigned int num)
{
	if (num > 1) {
		print_binary(num >> 1);
	}
	printf("%d", num & 1);
}

void bitwiseOP(int a, int b) {
	printf("\n%d is in binary ", a);
	print_binary(a);

	printf("\n%d is in binary ", b);
	print_binary(b);

	// The result is 00000001
	printf("\na = %d, b = %d\n", a, b);
	printf("a&b = %d\n", a & b);

	// The result is 00001101
	printf("a|b = %d\n", a | b);

	// The result is 00001100
	printf("a^b = %d\n", a ^ b);

	// The result is 11111010
	printf("~a = %d\n", a = ~a);

	// The result is 00010010
	printf("b<<1 = %d\n", b << 1);

	// The result is 00000100
	printf("b>>1 = %d\n", b >> 1);
}

void print_string(char names[]) {
	printf("%c\n", names);
}


int main()
{
	int binary = 0b1000001;
	printf("This is the letter %c which is %d\n", binary, binary, binary);
	printf("This is the binary number of %d ", binary);
	print_binary(binary);

	bitwiseOP(3, 4);

	char ch = 'A';
	char what = sizeof('a');

	int size = sizeof(ch);

	printf("\nSize of num is %i %i\n", size, what);
	int x = 5, y = 2;
	const char myFavoriteChar = 'F';

	float sum = (float)x / y;
	printf("%f\n", sum);

	int a = 5;
	int c = 3;

	int detector = !(a < 5 || c < 10);
	printf("%d is < 5 && %d is < 10 = %d\n", a, c, detector);

	int myInt;
	float myFloat;
	double myDouble;
	char myChar;

	

	printf("my int is %lu bytes\n", sizeof(myInt));
	printf("my float is %lu bytes\n", sizeof(myFloat));
	printf("my double is %lu bytes\n", sizeof(myDouble));
	printf("my character is %lu bytes\n", sizeof(myChar));

	int testInt = sizeof(int);
	float testFloat = sizeof(float);
	double testDouble = sizeof(double);
	char testChar = sizeof(char);

	printf("my int is %lu bytes\n", testInt);
	printf("my float is %lu bytes\n", testFloat);
	printf("my double is %lu bytes\n", testDouble);
	printf("my character is %lu bytes\n", testChar);

	// Create a boolean data type variables
	bool isProgrammingFun = true;
	bool isFishTasty = 0;

	printf("Is programming fun %d\n", isProgrammingFun);
	printf("Is fish tasty %d\n", isFishTasty);
	printf("Is programming better than Sushi? %d\n", isProgrammingFun > isFishTasty);

	int age = 22;
	int votingAge = 18;

	printf("Are you old enough to vote? %d\n", age >= votingAge);

	if (age >= votingAge) {
		printf("Old enough to vote!\n");
	}
	else {
		printf("Not old enough to vote.\n");
	}

	int matrix[2][3] = { { 1, 3, 5 }, { 2, 4, 6 } };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("array %d: %d\n", i, matrix[i][j]);
		}
	}

	char myString[] = "Hello Juice WRLD";

	// Tell printf() that we will be printing a string of characters %s
	printf("%s\n", myString);

	for (int i = 0; i < strlen(myString); i++) {
		printf("%c", myString[i]);
	}
	printf("\n");

	if (isProgrammingFun) {
		for (int i = 0; i < strlen(myString); i++) {
			(i % 2 == 0) ? printf("DICK ") : printf("YOUR MOM ");
		}
	}
	
	printf("\n");

	for (int i = 0; i < strlen(myString); i++) {
		myString[i] = (i % 2 == 0) ? 'R' : 'K';
		printf("%c", myString[i]);
	}

	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // Memory size in bytes is 27 because it auto detects 26 characters and adds 
														// the null terminator "\0" when using double quotes to let the complier know the string has ended
	printf("%zu\n", strlen(alphabet));   // 26
	printf("%zu\n", sizeof(alphabet));   // 27 memory size in bytes

	char alpha[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("%zu\n", strlen(alpha));   // 26 characters in the string
	printf("%zu\n", sizeof(alpha));   // 50 memory size in bytes

	char str1[10] = "Juice ";
	char str2[10] = "WRLD";

	// strcat(str1, str2);

	printf("%s", str1);

	// strcpy(str2, str1);
	printf("%s", str2);

	// copmare the two strings
	printf("Comparing the two strings %d\n", strcmp(str1, str2));

	char compare1[] = "Hello";
	char compare2[] = "Hello";

	printf("%d\n", strcmp(compare1, compare2));

	// create a variable to store the users age
	int userAge;

	// ask the user to print their age
	printf("What is your age my dude?\n");
	scanf("%d", &userAge);

	// print the users age
	printf("You are %d years old!!!\n", userAge);

	// create a user favorite number and character
	int userFavNum;
	char userFavChar;

	// Ask the user for their favorite number and character is
	printf("What is your favorite number and character in the alphabet?\n");

	// get and save the number AND character
	scanf("%d %c", &userFavNum, &userFavChar);

	// Print the users favorite number and character
	printf("Your favorite number is %d and character is %c\n", userFavNum, userFavChar);

	// Create a string to store what the user writes
	char userString[20];

	// Ask the user to type something
	printf("Type something here!!\n");
   getchar();

	// get and save the string to the variable
	fgets(userString, sizeof(userString), stdin);

	// print string length and it's byte size in memory
	printf("Your string length is %zu\n", strlen(userString));
	printf("Your string memory size in bytes is %zu", sizeof(userString));

	// print what the user typed
	printf("The user has said %sWow so smart!!\n", userString);

	// print the memory address of the users string
	printf("Your string in memory address is %p\n", &userString);

	// create a int variable of how many friends you have
	int friendCount = 5;
	// create a pointer variable in declartion/initialization
	int* pointerOfFriendCount = &friendCount; // The address memory of friendCount

	// print the address memory from friendCount
	printf("friendCount memory address is %p\n", &friendCount);

	// print the saved pointer or variable of the address memory from friendCount
	printf("This is the address memory of friendCount saved in a pointer variable is %p\n", pointerOfFriendCount);

	int justinAge = 22;
	int* pointerToJustin = &justinAge;

	// Reference the address in memory from the pointer variable
	printf("Justin's age in memory address is %p\n", pointerToJustin);

	// Dereference Justin's age in memory address to access the value
	printf("Dereferencing Justin's memory address to get the value which is %d\n", *pointerToJustin);

	// create an array
	int array[] = {25, 50, 75, 100};

	for (int i = 0; i < 4; i++) {
		// print each element in the array
		printf("%d ", array[i]);
	}

	// print each array's element address memory
	printf("\nPRINT EACH MEMORY ADDRESS IN THE ARRAY\n");
	for (int i = 0; i < 4; i++) {
		printf("%p ", &array[i]);
	}

	// print the first element's memory address
	printf("\n%p First element's memory address\n", &array[0]);

	// get the size of the array in memory
	printf("\nThe memory size of the array is %lu\n", sizeof(array));

	// Dereference each elemetnt's address memory to get their values
	printf("A %p\n", &array);
	printf("A %p + 1\n", &array + 1);
	printf("A %p + 2\n", &array + 2);
	printf("H %p\n", array);
	printf("H %p + 1\n", array + 1);
	printf("H %p + 2\n", array + 2);

	printf("%p\n", &array);
	printf("%p\n\n", (int *)&array + 1);

	// Print the entire arrays values by dereferencing the memory address/pointer
	for (int i = 0; i < sizeof(array)/sizeof(int); i++) {
		printf("%d\n", (int)*(array + i));
	}

	

}
