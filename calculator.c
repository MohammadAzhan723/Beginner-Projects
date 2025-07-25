#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    //declarations
int add, sub, mul, div;
double pi = 3.1415926535;
char operation[10];
char choice[10];
char again[10] = "yes";
char  sign;
float a, b, c, d, e, f;
int g, h;

//Greeting
printf("Welcome to the Calculator Program!\n");
printf("This program supports basic arithmetic operations and some complex mathematical functions.\n");
printf("enter the operation you want to perform: add, sub, mul, div, sqrt, log, pow, sin, cos, tan, aoc, aor, lin, exit\n");
scanf("%s", operation);

//Input
if (strcmp(operation, "add") == 0 || strcmp(operation, "sub") == 0 || strcmp(operation, "mul") == 0 || strcmp(operation, "div") == 0)
{
    printf("You chose a basic arithmetic operation.\n");
    printf("Enter two numbers(maximum 2 decimals and space them using a comma ','): ");
scanf("%f ,%f", &a, &b);
printf("You entered: %.2f and %.2f\n", a, b);
}else if (strcmp(operation, "sqrt") == 0 || strcmp(operation, "log") == 0) {
    printf("You chose a complex mathematical function.\n");
    printf("Enter a number: ");
scanf("%f", &c);
printf("You entered: %.2f\n", c);
} else if (strcmp(operation, "pow") == 0) {
    printf("You chose power function.\n");
    printf("Enter the base number: ");
scanf("%f", &d);
} else if(strcmp(operation, "tan") == 0 || strcmp(operation, "sin") == 0 || strcmp(operation, "cos") == 0 ){

    printf("you choose a trignometric function.\n");
} else if(strcmp(operation, "aoc") == 0){
    printf("You have picked the area of circle function.\n");
} else if(strcmp(operation, "aor") == 0){
    printf("You have picked the area of rectangle function.\n");
} else if(strcmp(operation, "lin") == 0){
    printf("You have picked the basic linear function.\n");
    printf("It may help you to solve some basic linear equations.\n");
}

else if (strcmp(operation, "exit") == 0) {
    printf("Exiting the calculator. Goodbye! :)\n");
    return 0;
}
else {
     printf("   :( Error ):  \n %s maybe an invalid operation.\n This is a simple mathematical calculator.\n Please restart and choose from add, sub, mul, div, sqrt, log.\n", operation);
    return 1;
}


//Operations

if (strcmp(operation, "add") == 0) {
    printf("You chose addition.\n");
    printf("here's your answer: ");
    // Perform addition
    printf("%.2f + %.2f = %.3f\n ;] ",  a,  b,  a + b);
} else if (strcmp(operation, "sub") == 0) {
    printf("You chose subtraction.\n");
    printf("here's your answer: ");
    // Perform subtraction
    printf("%.2f - %.2f = %.3f\n ;]",  a,  b,  a - b);
} else if (strcmp(operation, "mul") == 0) {
    printf("You chose multiplication.\n");
    printf("here's your answer: ");
    // Perform multiplication
    printf("%.2f * %.2f = %.3f\n ;]",  a,  b,  a * b);
} else if (strcmp(operation, "div") == 0) {
    if (b != 0) {
        printf("You chose division.\n");
        printf("here's your answer: ");
        // Perform division
        printf("%.2f / %.2f = %.3f\n ;]",  a,  b,  a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");    
    }
} else if (strcmp(operation, "sqrt") == 0) {
    if (a >= 0) {
        printf("You chose square root.\n");
        printf("here's your answer: ");
        // Perform square root
        printf("sqrt(%.2f) = %f\n ;]", c, sqrt(c));
    } else {
        printf("Error: Cannot compute square root of a negative number.\n");
}  
} else if (strcmp(operation, "log") == 0) {
    if (a > 0) {
        printf("You chose logarithm.\n");
        printf("here's your answer: ");
        // Perform logarithm
        printf("log(%.2f) = %f\n ;]", c, log(c));
    } else {
        printf("Error: Cannot compute logarithm of a non-positive number.\n");
    }
} else if (strcmp(operation, "pow") == 0) {
    printf("You chose power.\n");
    printf("Enter the exponent: ");
    scanf("%f", &e);
    printf("here's your answer: ");
    // Perform power
    printf("%.2f ^ %.2f = %.3f\n ;]", d, e, pow(d, e));   
} else if (strcmp(operation, "sin") == 0){
    printf("Enter the radian amount: ");
    scanf("%f", &f);
    printf("here's your answer: ");
    // Perform trigonometry
    printf("sin(%f) = %f \n ;]", f, sin(f));
} else if (strcmp(operation, "cos") == 0){
    printf("enter the radian amount: ");
    scanf("%f", &f);
    printf("here's your answer: ");
    //perform cos
    printf("cos(%f) = %f \n ;]", f, cos(f));
} else if (strcmp (operation, "tan") == 0){
    printf("Enter the radian amount: ");
    scanf("%f", &f);
    // perform tan
    printf("tan(%f) = %f \n ;]", f, tan(f));
} else if (strcmp(operation, "aoc") == 0){
    printf("Enter the radius of the circle: ");
    scanf("%f", &f);
    if (f < 0){
        printf("Error: radius must be non-negative.\n");
    }else{
        printf("Area of the circle is = ");
    // Area of Circle calculation
    printf("%.4f sq. units\n", pi * f* f);
        printf("Circumference of the circle is = %.4f units\n ;]", 2 * pi * f);

    }
} else if(strcmp(operation, "aor") == 0){
    printf("Enter the length and width of the rectangle(use comma to space them out): ");
    scanf("%f, %f", &a, &b);
    if (a < 0 || b < 0){
    printf("Error: Length and width must be non-negative.\n");
    } else {
       printf("Area of the rectangle is =  ");
    //Area of rectangle calculation
    printf("%.4f sq. units\n", a * b);
         printf("Perimeter of the rectangle is = %.4f units\n ;]", 2 * (a + b));
    }
} else if (strcmp(operation, "lin") == 0){
    printf("Enter the equation(in the form ax + b = 0): ");
    scanf("%fx %c %f = 0", &a, &sign, &b);
    if (sign == '-'){
        b = -b;
    } else if (sign == '+'){
        b = b;
    } else {
        printf("Error: Invalid sign. Please use '+' or '-'.\n");
        return 1;
    }
    if (a == 0){
        printf("no solution exists for this equation.\n");
    } else { if (b == 0){
        printf("the solution of the given equation is x = 0.\n ;]");
    } else {
        printf("the solution of the given equation is x= %.2f.\n ;]", -b / a);

    } 
    }
    }
}
