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

// Structure type Name declaration (Milestone 1)
struct Name {
    char firstName[31];
    char middleInitial[7];
    char lastName[36];
};

// Structure type Address declaration (Milestone 1)
// Place your code here...
struct Address {
    int streetNumber;
    char street[41];
    int apartmentNumber;
    char postalCode[8];
    char city[41];
};

// Structure type Numbers declaration (Milestone 1)
// Place your code here...
struct Numbers
{
    char cell[21];
    char home[21];
    char business[21];
};

// Structure type Contact declaration (Milestone 3)
// Place your code here...
struct Contact
{
    struct Name name;
    struct Address address;
    struct Numbers numbers;
};

//------------------------------------------------------
// Function Prototypes
//------------------------------------------------------

// ====== Milestone 4 =======

// Get and store from standard input the values for Name
// Place your code here...
void getName(struct Name *name);
{
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

// Get and store from standard input the values for Address
// Place your code here...
void getAddress(struct Address *address);
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

// Get and store from standard input the values for Numbers
// Place your code here...
void getNumbers(struct Numbers *numbers);
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
int main(void)
{
    // Declare variables here:

    // Create a variable of type Contact and call it something self-describing like "contact"
    // - HINT: Be sure to initialize the values to 0 and empty C strings
    // Declare variables here:
    struct Contacts sContacts = { { "" ,"" ,"" } ,{ 0,0,"","","" } ,{ "","","" } };

    // Display the title
    printf("Contact Management System\n");
    printf("-------------------------\n");

    // Call the Contact function getName to store the values for
    the Name member
        getName(&sContacts.name);

    // Call the Contact function getAddress to store the values for the Address member
    getAddress(&sContacts.address);

    // Call the Contact function getNumbers to store the values for the Numbers member
    getNumbers(&sContacts.numbers);

    // Display Contact summary details
    ////////////////////////////////////////////////////////////////////////
    printf("Contact Details\n");
    printf("---------------\n");

    printf("Name Details\n");
    printf("First name: %s\n", sContacts.name.firstName);
    printf("Middle initial(s): %s\n", sContacts.name.middleInitial);
    printf("Last name: %s\n", sContacts.name.lastName);
    printf("\n");

    printf("Address Details\n");
    printf("Street number: %d\n", sContacts.address.streetNumber);
    printf("Street name: %s\n", sContacts.address.street);
    printf("Apartment: %d\n", sContacts.address.apartmentNumber);
    printf("Postal code: %s\n", sContacts.address.postalCode);
    printf("City: %s\n", sContacts.address.city);
    printf("\n");

    printf("Phone Numbers:\n");
    printf("Cell phone number: %s\n", sContacts.numbers.cell);
    printf("Home phone number: %s\n", sContacts.numbers.home);
    printf("Business phone number: %s\n", sContacts.numbers.business);
    printf("\n");

    // Display Completion Message
    printf("Structure test for Contact using functions done!\n");
    return 0;
}