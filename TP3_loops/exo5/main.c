#include <stdio.h>

// A main function to generate the multiplication table
int main() {
  // Declare three variables to store the input number, the range, and a flag
  int num, range, flag;
  // Initialize the flag to 1
  flag = 1;
  // Use a loop to repeat the process until the user wants to exit
  while (flag == 1) {
    // Prompt the user to enter an integer for which they want to generate the multiplication table
    printf("Enter an integer for which you want to generate the multiplication table: ");
    // Read the input number from the standard input
    scanf("%d", &num);
    // Ask the user to enter the range up to which they want to generate the multiplication table
    printf("Enter the range up to which you want to generate the multiplication table (e.g., up to 10): ");
    // Read the range from the standard input
    scanf("%d", &range);
    // Print a message to indicate the start of the table
    printf("Multiplication Table for %d up to %d:\n", num, range);
    // Use a loop to iterate through the numbers from 1 to the range and calculate the product of the input number with each of these numbers
    for (int i = 1; i <= range; i++) {
      // Print the product in a readable format
      printf("%d x %d = %d\n", num, i, num * i);
    }
    // Print a blank line to separate the tables
    printf("\n");
    // Ask the user if they want to generate the table for another number
    printf("Do you want to generate the table for another number? Enter 1 for yes, 0 for no: ");
    // Read the flag from the standard input
    scanf("%d", &flag);
  }
  // Print a message to indicate the end of the program
  printf("Thank you for using the program. Goodbye!\n");
  // Return 0 to indicate successful termination
  return 0;
}
