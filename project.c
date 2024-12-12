#include<stdio.h>
#include<stdlib.h>

//function is the most used when you program an application or a system
//and to minimize the redeclaration of the variables and errorhandling
//function of the calculator
void Calculator() {

    //declaring variables
    double fNum, sNum;
    char choice;
    printf("\n");
    // Getting user data input
    printf("Enter a Number: ");
    scanf("%lf", &fNum);
    printf("Enter a Number: ");
    scanf("%lf", &sNum);

    // Choosing operators using switch case statement
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &choice);

    switch(choice) {
        case '+': // Addition
            printf("%.2lf + %.2lf = %.2lf\n", fNum, sNum, fNum + sNum);
            break;
        case '-': // Subtraction
            printf("%.2lf - %.2lf = %.2lf\n", fNum, sNum, fNum - sNum);
            break;
        case '*': // Multiplication
            printf("%.2lf * %.2lf = %.2lf\n", fNum, sNum, fNum * sNum);
            break;
        case '/': // Division
            // Condition for the second number input is equal to zero result is undefined
            if(sNum != 0) {
            printf("%.2lf / %.2lf = %.2lf\n", fNum, sNum, fNum / sNum);
            } else {
                printf( "Undefined... \n" );
            }
            break;
        default:
            printf("Invalid Operators...");
            break;
    }
    printf("\n");
}

//function of payroll
void Payroll() {

    char name[50];
    int hour;
    float rate, pay;

    printf("\n");
    printf("__________Pay Roll__________\n");
    printf("Enter employee's name: ");
    scanf("%s", name);
    printf("Enter number of hours worked: ");
    scanf("%d", &   hour);
    printf("Enter hourly pay rate: ");
    scanf("%f", &rate);

    pay = hour * rate;
    printf("____________________________\n");
    printf("\n");
    printf("Employee Name: %s\n", name);
    printf("Hours Worked: %d\n", hour);
    printf("Hourly Rate: %.2f\n", rate);
    printf("Total Pay: %.2f\n", pay);
    printf("\n");
    printf("____________________________\n");
    printf("\n");

}

//function of pyramid
void Pyramid() {

    int rows, k = 0;
    printf("Enter rows: ");
    scanf("%d", &rows);
    printf("\n");

    //this for loop represent the spacing in the pyramid rows
    for(int i = 1; i <= rows; ++i, k = 0){
        for(int j = 1; j <= rows - i; ++j ){
            printf(" ");
        }
        //this while loop represent the symbols that to print entire pyramid
        while(k != 2 * i - 1){
            printf("*");
            ++k;
        }
        printf("\n");
    }

}

//this is the function that used to shorten the main function codes
//function prototypes
void Calculator();
void Payroll();
void Pyramid();

//main function
int main () {
    int choice;
    int Menu;

    //this do while loop is reponsible for the endless loop while the condition is always true
    do{
        printf("====================\n");
        printf("1. Calculator\n");
        printf("2. Payroll\n");
        printf("3. Pyramid\n");
        printf("4. Exit\n");
        printf("====================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("====================\n");

        //this switch case loop is the responsible to bring the output of the function that the user want to display
        switch (choice) {
        case 1:
            Calculator();
            break;
        case 2:
            Payroll();
            break;
        case 3:
            Pyramid();
            break;
        case 4:
            printf("Exiting....\n");
            exit(0);
        }
    }while(Menu != 0);

    return 0;
}
