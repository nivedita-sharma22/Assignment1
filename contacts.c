/* -------------------------------------------
Name:Nivedita Sharma
Student number:138647201
Email:nansharma@myseneca.ca
Section:ZCC
Date:01-07-2021
----------------------------------------------
Assignment: 1
Milestone:  4
---------------------------------------------- */
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:
#include "contacts.h"

void getName(struct Name *name) {

    char option[10];

    printf("Please enter the contact's first name: ");
    gets(name->firstName);

    printf("\nDo you want to enter a middle initial(s)? (y or n): \n");
    scanf("%c", option);

    if ((*option == 'n') || (*option == 'N')) {
        name->middleInitial[0] = '\0';
    }
    else {
        printf("Please enter the contact's middle initial(s): ");
        gets(name->middleInitial);
        fgets(name->middleInitial, 7, stdin);
    }

    printf("Please enter the contact's last name: ");
    gets(name->lastName);

}

void getAddress(struct Address *address)
{
    char option[2] = "n";

    printf("Please enter the contact's street number: ");
    scanf("%d", &address->streetNumber);

    printf("Please enter the contact's street name: ");
    gets(address->street);
    fgets(address->street, 41, stdin);

    printf("Do you want to enter an appartment number? (y or n): ");
    scanf("\n%c", option);

    if ((*option == 'n') || (*option == 'N')) {
        address->apartmentNumber = -1;
    }
    else {
        printf("Please enter the contact's appartment number: ");
        scanf("%d", &address->apartmentNumber);
    }

    printf("Please enter the contact's postal code: ");
    gets(address->postalCode);
    fgets(address->postalCode, 8, stdin);

    printf("Please enter the contact's city: ");
    gets(address->city);
    fgets(address->city, 41, stdin);
}

void getNumbers(struct Numbers *numbers)
{
    char option[2] = "n";

    //CELL
    printf("Do you want to enter a cell phone number? (y or n): ");
    scanf("\n%c", option);

    if ((*option == 'n') || (*option == 'N')) {
        numbers->cell[0] = '\0';
    }
    else {
        printf("Please enter the contact's cell phone number: ");
        gets(numbers->cell);
        fgets(numbers->cell, 21, stdin);
    }

    //HOME
    printf("Do you want to enter a home phone number? (y or n): ");
    scanf("\n%c", option);

    if ((*option == 'n') || (*option == 'N')) {
        numbers->home[0] = '\0';
    }
    else {
        printf("Please enter the contact's home phone number: ");
        gets(numbers->home);
        fgets(numbers->home, 21, stdin);
    }
    //BUSINESS
    printf("Do you want to enter a business phone number? (y or n): ");
    scanf("\n%c", option);

    if ((*option == 'n') || (*option == 'N')) {
        numbers->business[0] = '\0';
    }
    else {

        printf("Please enter the contact's business phone number: ");
        gets(numbers->business);
        fgets(numbers->business, 21, stdin);
    }
    printf("\n");
}