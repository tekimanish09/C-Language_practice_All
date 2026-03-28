/**
 * @file problem_08.c
 * @brief Problem 08: Define a structure for a bank account.
 *
 * This program demonstrates how to create a structure for storing bank
 * customer information, including functions to input and display data.
 */

#include <stdio.h>
#include <string.h>

/**
 * @struct BankCustomer
 * @brief Represents a bank customer's basic information.
 */
typedef struct
{
    char name[50];      /**< Name of the customer */
    int age;            /**< Age of the customer */
    char address[100];  /**< Address of the customer */
    int account_number; /**< Unique account number */
    float balance;      /**< Current bank balance */
} BankCustomer;

/**
 * @brief Displays the details of all customers.
 * @param customers Array of BankCustomer structures to be displayed.
 * @param size Number of customers in the array.
 */
void display_customers(BankCustomer customers[], int size);

/**
 * @brief Inputs data for multiple customers from the user.
 * @param customers Array of BankCustomer structures to store the data.
 * @param size Number of customers to input.
 */
void input_customer_data(BankCustomer customers[], int size);

int main()
{
    int num_customers;

    // Ask user for the number of customers to register
    printf("Enter the number of bank customers to register: ");
    if (scanf("%d", &num_customers) != 1 || num_customers <= 0)
    {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    // Declare an array of structures using variable-length array (VLA)
    BankCustomer customer_list[num_customers];

    printf("\n--- Input Customer Data ---\n");
    input_customer_data(customer_list, num_customers);

    printf("\n--- Displaying Customer Records ---\n");
    display_customers(customer_list, num_customers);

    return 0;
}

/**
 * @brief Inputs data for multiple customers from the user.
 * @param customers Array of BankCustomer structures to store the data.
 * @param size Number of customers to input.
 */
void input_customer_data(BankCustomer customers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\nCustomer Registration #%d\n", i + 1);

        // Consume any leftover newline characters from the buffer
        getchar();

        printf("  Enter Customer Name: ");
        // Using %49[^\n] to allow names with spaces and prevent buffer overflow
        scanf("%49[^\n]", customers[i].name);

        printf("  Enter Customer Age: ");
        scanf("%d", &customers[i].age);

        // Consume the newline after age input
        getchar();

        printf("  Enter Customer Address: ");
        // Using %99[^\n] to allow addresses with spaces and prevent buffer overflow
        scanf("%99[^\n]", customers[i].address);

        printf("  Enter Account Number: ");
        scanf("%d", &customers[i].account_number);

        printf("  Enter Bank Balance: ");
        scanf("%f", &customers[i].balance);
    }
}

/**
 * @brief Displays the details of all customers.
 * @param customers Array of BankCustomer structures to be displayed.
 * @param size Number of customers in the array.
 */
void display_customers(BankCustomer customers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Customer Details #%d\n", i + 1);
        printf("  Name           : %s\n", customers[i].name);
        printf("  Age            : %d\n", customers[i].age);
        printf("  Address        : %s\n", customers[i].address);
        printf("  Account Number : %d\n", customers[i].account_number);
        printf("  Bank Balance   : $%.2f\n", customers[i].balance);
        printf("--------------------------\n");
    }
}
