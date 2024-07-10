#include <stdio.h>
#include <string.h>

#define FILE_NAME "fitness_data.txt"
#define DATE_LENGTH 11  

typedef struct {
    int steps;
    int calories;
    float progress;
    char date[DATE_LENGTH];
} FitnessData;

void viewData();
void addData();
void updateData();
void saveData(FitnessData data);
void displayMenu();
int loadData(FitnessData *data, const char *date);

int main() {
    int choice;
    printf("\n");
    printf("--------------------------------------------------------\n");
    printf("|                                                      |\n");
    printf("|            Welcome to Your Fitness Tracker App       |\n");
    printf("|                                                      |\n");
    printf("--------------------------------------------------------\n");
    printf("\n");

    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                viewData();
                break;
            case 2:
                addData();
                break;
            case 3:
                updateData();
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

void viewData() {
    FILE *file = fopen(FILE_NAME, "r");
    FitnessData data;

    if (file == NULL) {
        printf("No data found.\n");
        return;
    }

    printf("\n%-15s%-15s%-15s%-15s\n", "Date", "Steps", "Calories", "Progress (%)");
    printf("----------------------------------------------------------\n");

    while (fscanf(file, "%d %d %f %s", &data.steps, &data.calories, &data.progress, data.date) != EOF) {
        printf("%-15s%-15d%-15d%-15.2f\n", data.date, data.steps, data.calories, data.progress);
    }

    fclose(file);
    printf("\n");
}

void addData() {
    FitnessData data;

    printf("\nEnter steps taken: ");
    scanf("%d", &data.steps);
    printf("Enter calories burned: ");
    scanf("%d", &data.calories);
    printf("Enter progress (in percentage): ");
    scanf("%f", &data.progress);
    printf("Enter the date (YYYY-MM-DD): ");
    scanf("%s", data.date);

    saveData(data);
    printf("Data added successfully.\n\n");
}

void updateData() {
    FitnessData data;
    char date[DATE_LENGTH];

    printf("Enter the date of the data to update (YYYY-MM-DD): ");
    scanf("%s", date);

    if (loadData(&data, date)) {
        printf("\nEnter new steps taken: ");
        scanf("%d", &data.steps);
        printf("Enter new calories burned: ");
        scanf("%d", &data.calories);
        printf("Enter new progress (in percentage): ");
        scanf("%f", &data.progress);
        strcpy(data.date, date);

        FILE *file = fopen(FILE_NAME, "r+");
        if (file == NULL) {
            printf("Error opening data file.\n");
            return;
        }

        FitnessData temp;
        long pos;
        while (fscanf(file, "%d %d %f %s", &temp.steps, &temp.calories, &temp.progress, temp.date) != EOF) {
            if (strcmp(temp.date, date) == 0) {
                pos = ftell(file);
                fseek(file, pos - sizeof(temp), SEEK_SET);
                fprintf(file, "%d %d %.2f %s\n", data.steps, data.calories, data.progress, data.date);
                break;
            }
        }

        fclose(file);
        printf("Data updated successfully.\n\n");
    } else {
        printf("Data for the given date is not available.\n");
    }
}

void saveData(FitnessData data) {
    FILE *file = fopen(FILE_NAME, "a");
    if (file == NULL) {
        printf("Error saving data.\n");
        return;
    }
    fprintf(file, "%d %d %.2f %s\n", data.steps, data.calories, data.progress, data.date);
    fclose(file);
}

void displayMenu() {
    printf("Fitness Tracker Menu:\n");
    printf("1. View Fitness Data\n");
    printf("2. Add Fitness Data\n");
    printf("3. Update Fitness Data\n");
    printf("4. Exit\n");
}

int loadData(FitnessData *data, const char *date) {
    FILE *file = fopen(FILE_NAME, "r");
    if (file == NULL) {
        return 0;
    }

    while (fscanf(file, "%d %d %f %s", &((*data).steps), &((*data).calories), &((*data).progress), (*data).date) != EOF) {
        if (strcmp((*data).date, date) == 0) {
            fclose(file);
            return 1;
        }
    }

    fclose(file);
    return 0;
}

