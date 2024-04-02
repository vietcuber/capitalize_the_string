#include <stdio.h>

int main() {
	char string[100];
	printf("Convert the entered string to uppercase letters\n");
	printf("Enter a string (less than 100 characters): ");
	fgets(string, 100, stdin);
	for (int i = 0; string[i] != '\0'; i++) {
		if ('a' <= string[i] && string[i] <= 'z')
			string[i] -= 32;
	}
	printf("The string entered after capitalization is: %s", string);
	return 0;
}