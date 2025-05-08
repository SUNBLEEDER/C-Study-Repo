#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTACTS 100
#define NAME_LENGTH 50
#define PHONE_LENGTH 15

typedef struct {
    char name[NAME_LENGTH];
    char phone[PHONE_LENGTH];
} Contact;

void addContact(Contact contacts[], int *count) {
    if (*count >= MAX_CONTACTS) {
        printf("Contact list is full!\n");
        return;
    }
    printf("Enter name: ");
    scanf("%s", contacts[*count].name);
    printf("Enter phone: ");
    scanf("%s", contacts[*count].phone);
    (*count)++;
    printf("Contact added successfully!\n");
}

void viewContacts(Contact contacts[], int count) {
    if (count == 0) {
        printf("No contacts available.\n");
        return;
    }
    printf("\nContacts:\n");
    for (int i = 0; i < count; i++) {
        printf("%d. Name: %s, Phone: %s\n", i + 1, contacts[i].name, contacts[i].phone);
    }
}

void deleteContact(Contact contacts[], int *count) {
    if (*count == 0) {
        printf("No contacts to delete.\n");
        return;
    }
    int index;
    printf("Enter the contact number to delete: ");
    scanf("%d", &index);
    if (index < 1 || index > *count) {
        printf("Invalid contact number.\n");
        return;
    }
    for (int i = index - 1; i < *count - 1; i++) {
        contacts[i] = contacts[i + 1];
    }
    (*count)--;
    printf("Contact deleted successfully!\n");
}

void saveContacts(Contact contacts[], int count) {
    FILE *file = fopen("contacts.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        fprintf(file, "%s %s\n", contacts[i].name, contacts[i].phone);
    }
    fclose(file);
    printf("Contacts saved successfully!\n");
}

void loadContacts(Contact contacts[], int *count) {
    FILE *file = fopen("contacts.txt", "r");
    if (file == NULL) {
        printf("No saved contacts found.\n");
        return;
    }
    while (fscanf(file, "%s %s", contacts[*count].name, contacts[*count].phone) != EOF) {
        (*count)++;
    }
    fclose(file);
    printf("Contacts loaded successfully!\n");
}

int main() {
    Contact contacts[MAX_CONTACTS];
    int count = 0;
    int choice;

    loadContacts(contacts, &count);

    do {
        printf("\nContact Management System\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Delete Contact\n");
        printf("4. Save Contacts\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact(contacts, &count);
                break;
            case 2:
                viewContacts(contacts, count);
                break;
            case 3:
                deleteContact(contacts, &count);
                break;
            case 4:
                saveContacts(contacts, count);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
