#include <stdio.h>
int isTriangleValid(int angle1, int angle2, int angle3) {
return (angle1 + angle2 + angle3 == 180) ? 1 : 0;
}
int decimalToOctal(int n) {
if (n == 0) {
return 0;
} else {
return (n % 8 + 10 * decimalToOctal(n / 8));
}
}
int isLeapYear(int year) {
return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? 1 : 0;
}
int main() {
int choice;
printf("Menu:\n");
printf("1. Check if triangle is valid (angles given)\n");
printf("2. Convert decimal to octal (using recursion)\n");
printf("3. Check if a year is leap (using ternary)\n");
printf("Enter your choice (1-3): ");
scanf("%d"
, &choice);
switch (choice) {
case 1: {
int angle1, angle2, angle3;
printf("Enter three angles of the triangle: ");
scanf("%d %d %d"
, &angle1, &angle2, &angle3);
if (isTriangleValid(angle1, angle2, angle3)) {
printf("The triangle is valid.\n");
} else {
printf("The triangle is not valid.\n");
}
break;
}
case 2: {
int decimal;
printf("Enter a decimal number: ");
scanf("%d"
, &decimal);
printf("Octal equivalent: %d\n"
, decimalToOctal(decimal));
break;
}
case 3: {
int year;
printf("Enter a year: ");
scanf("%d"
, &year);
if (isLeapYear(year)) {
printf("%d is a leap year.\n"
, year);
} else {
printf("%d is not a leap year.\n"
, year);
}
break;
}
default:
printf("Error: Invalid choice. Exiting...\n");
return -1;
}
return 0;
}