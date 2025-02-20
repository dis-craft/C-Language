// ---

// ### Code Implementation:

// c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITEMS 100
#define FILENAME "grocery_list.txt"

typedef struct {
    char name[50];
    int purchased; // 0 = not purchased, 1 = purchased
} GroceryItem;

GroceryItem groceryList[MAX_ITEMS];
int itemCount = 0;

// Function prototypes
void addItem(char *name);
void removeItem(char *name);
void displayList();
void markAsPurchased(char *name);
void saveListToFile();
void loadListFromFile();

int main() {
    int choice;
    char name[50];

    // Load the grocery list from file at the start
    loadListFromFile();

    while (1) {
        printf("\nGrocery List Management System\n");
        printf("1. Add Item\n");
        printf("2. Remove Item\n");
        printf("3. Display List\n");
        printf("4. Mark Item as Purchased\n");
        printf("5. Save and Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline character

        switch (choice) {
            case 1:
                printf("Enter item name to add: ");
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = '\0'; // Remove newline character
                addItem(name);
                break;
            case 2:
                printf("Enter item name to remove: ");
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = '\0'; // Remove newline character
                removeItem(name);
                break;
            case 3:
                displayList();
                break;
            case 4:
                printf("Enter item name to mark as purchased: ");
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = '\0'; // Remove newline character
                markAsPurchased(name);
                break;
            case 5:
                saveListToFile();
                printf("Grocery list saved to file. Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

// Add an item to the grocery list
void addItem(char *name) {
    if (itemCount >= MAX_ITEMS) {
        printf("Grocery list is full!\n");
        return;
    }

    // Check if the item already exists
    for (int i = 0; i < itemCount; i++) {
        if (strcmp(groceryList[i].name, name) == 0) {
            printf("Item already exists in the list.\n");
            return;
        }
    }

    // Add the new item
    strcpy(groceryList[itemCount].name, name);
    groceryList[itemCount].purchased = 0; // Default to not purchased
    itemCount++;
    printf("Item added successfully.\n");
}

// Remove an item from the grocery list
void removeItem(char *name) {
    int found = 0;

    for (int i = 0; i < itemCount; i++) {
        if (strcmp(groceryList[i].name, name) == 0) {
            // Shift remaining items to the left
            for (int j = i; j < itemCount - 1; j++) {
                strcpy(groceryList[j].name, groceryList[j + 1].name);
                groceryList[j].purchased = groceryList[j + 1].purchased;
            }
            itemCount--;
            found = 1;
            printf("Item removed successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("Item not found in the list.\n");
    }
}

// Display the current grocery list
void displayList() {
    if (itemCount == 0) {
        printf("The grocery list is empty.\n");
        return;
    }

    printf("\nGrocery List:\n");
    for (int i = 0; i < itemCount; i++) {
        printf("%d. %s [%s]\n", i + 1, groceryList[i].name, groceryList[i].purchased ? "Purchased" : "Not Purchased");
    }
}

// Mark an item as purchased
void markAsPurchased(char *name) {
    int found = 0;

    for (int i = 0; i < itemCount; i++) {
        if (strcmp(groceryList[i].name, name) == 0) {
            groceryList[i].purchased = 1;
            found = 1;
            printf("Item marked as purchased.\n");
            break;
        }
    }

    if (!found) {
        printf("Item not found in the list.\n");
    }
}

// Save the grocery list to a file
void saveListToFile() {
    FILE *file = fopen(FILENAME, "w");
    if (file == NULL) {
        printf("Error saving file!\n");
        return;
    }

    for (int i = 0; i < itemCount; i++) {
        fprintf(file, "%s,%d\n", groceryList[i].name, groceryList[i].purchased);
    }

    fclose(file);
}

// Load the grocery list from a file
void loadListFromFile() {
    FILE *file = fopen(FILENAME, "r");
    if (file == NULL) {
        printf("No existing grocery list found.\n");
        return;
    }

    char line[100];
    while (fgets(line, sizeof(line), file)) {
        char *name = strtok(line, ",");
        int purchased = atoi(strtok(NULL, ","));

        if (name && itemCount < MAX_ITEMS) {
            strcpy(groceryList[itemCount].name, name);
            groceryList[itemCount].purchased = purchased;
            itemCount++;
        }
    }

    fclose(file);
}


// ---

// ### Features:
// 1. *Add Item*: Users can add items to the grocery list.
// 2. *Remove Item*: Users can remove items from the grocery list.
// 3. *Display List*: Displays all items in the list along with their purchase status.
// 4. *Mark as Purchased*: Users can mark items as purchased.
// 5. *Save to File*: The grocery list is saved to a file (grocery_list.txt) for future reference.
// 6. *Load from File*: The program loads the grocery list from the file when it starts.

// ---

// ### File Format:
// The grocery list is stored in a text file (grocery_list.txt) in the following format:

// item1,0
// item2,1
// item3,0

// - item1, item2, etc., are the names of the items.
// - 0 means the item is not purchased, and 1 means it is purchased.

// ---

// ### How to Run:
// 1. Compile the program using a C compiler (e.g., gcc):
//    bash
//    gcc -o grocery_list grocery_list.c
   
// 2. Run the executable:
//    bash
//    ./grocery_list
   
// 3. Follow the on-screen menu to manage your grocery list.

// ---

// ### Example Usage:
// 1. Add items: Milk, Bread, Eggs.
// 2. Display the list:
   
//    1. Milk [Not Purchased]
//    2. Bread [Not Purchased]
//    3. Eggs [Not Purchased]
   
// 3. Mark Milk as purchased.
// 4. Remove Bread from the list.
// 5. Save and exit. The list will be stored in grocery_list.txt.

// ---

// This program is a simple yet functional implementation. You can extend it with additional features like sorting, searching, or a graphical user interface (GUI).