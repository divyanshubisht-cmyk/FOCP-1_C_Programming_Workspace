#include <stdio.h>

int main() { 
    int studentID = 101;
    int age = 20;
    float percentage = 85.5;
    char grade = 'A';

    printf("Student ID: %d\n", studentID);
    printf("Age: %d\n", age);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}


int main() { 
    int age;
    float height;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("\n--- User Details ---\n");
    printf("Age: %d\n", age);
    printf("Height: %.2f meters\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}


int main() {
    float price, totalBill;
    int quantity;

    printf("Enter the price of one item: ");
    scanf("%f", &price);

    printf("Enter the quantity purchased: ");
    scanf("%d", &quantity);

    totalBill = price * quantity;

    printf("\n--- Bill Details ---\n");
    printf("Price: %.2f\n", price);
    printf("Quantity: %d\n", quantity);
    printf("Total Bill: %.2f\n", totalBill);

    return 0;
}


int main() {
    int a, b, c;
    float average;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    average = (a + b + c) / 3.0;

    printf("Average = %.2f\n", average);

    return 0;
}


int main() {
    int a, b, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: %d %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: %d %d\n", a, b);

    return 0;
}


int main() {
    int a, b;
    int quotient, remainder;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    quotient = a / b;
    remainder = a % b;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    return 0;
}


int main() {
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}


int main() {
    float basicSalary, allowance, bonus, finalSalary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    printf("Enter Allowance: ");
    scanf("%f", &allowance);

    printf("Enter Bonus: ");
    scanf("%f", &bonus);

    finalSalary = basicSalary + allowance + bonus;

    printf("Final Salary = %.2f\n", finalSalary);

    return 0;
}


int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("Fahrenheit = %.2f °F\n", fahrenheit);

    return 0;
}


int main() {
    int productID, quantity;
    float price, discountPercentage;
    float subtotal, discountAmount, finalAmount;

    printf("Enter Product ID: ");
    scanf("%d", &productID);

    printf("Enter Product Price: ");
    scanf("%f", &price);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Discount Percentage: ");
    scanf("%f", &discountPercentage);

    subtotal = price * quantity;
    discountAmount = subtotal * discountPercentage / 100;
    finalAmount = subtotal - discountAmount;

    printf("\n========== INVOICE ==========\n");
    printf("Product ID       : %d\n", productID);
    printf("Subtotal         : %.2f\n", subtotal);
    printf("Discount Amount  : %.2f\n", discountAmount);
    printf("Final Payable Amount: %.2f\n", finalAmount);
    printf("=============================\n");

    return 0;
}
