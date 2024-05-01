#include <stdio.h>

#define C_SIZE 50

union Address {
    char Name[C_SIZE];
    char HouseName[C_SIZE];
    char CityName[C_SIZE];
    char State[C_SIZE];
    char PinCode[C_SIZE];
};

int main() {
    union Address personAddress;

    printf("Enter Name: ");
    fgets(personAddress.Name, C_SIZE, stdin);

    printf("Enter House Name: ");
    fgets(personAddress.HouseName, C_SIZE, stdin);

    printf("Enter City Name: ");
    fgets(personAddress.CityName, C_SIZE, stdin);

    printf("Enter State: ");
    fgets(personAddress.State, C_SIZE, stdin);

    printf("Enter Pin Code: ");
    fgets(personAddress.PinCode, C_SIZE, stdin);

    printf("\nAddress Details:\n");
    printf("Name: %s", personAddress.Name);
    printf("House Name: %s", personAddress.HouseName);
    printf("City Name: %s", personAddress.CityName);
    printf("State: %s", personAddress.State);
    printf("Pin Code: %s", personAddress.PinCode);

    return 0;
}