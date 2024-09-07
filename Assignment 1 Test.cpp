//Emily Henderson
//9-6-24
//CS303 Data Structures
//Assignment 1

#include "functions.h"

int main() {
    //int arr[MAX_SIZE];
    //int size = 120;
    //if (size == -1) return 1; // Exit if file couldn't be opened

    int arr[MAX_SIZE];
    int size = loadDataFromFile(arr, "A1input.txt");
    if (size == -1) return 1; // Exit if file couldn't be opened

    int choice;
    do {
        cout << " " << endl;
        cout << "Menu:" << endl; // Menu for the user to select what they'd like to do
        cout << "1. Find an integer" << endl; // Calls the findInteger function
        cout << "2. Modify an integer" << endl; // Calls the modifyInteger function
        cout << "3. Add an integer" << endl; // Calls the addInteger function
        cout << "4. Remove an integer" << endl; // Calls the removeInteger function
        cout << "5. Exit" << endl; // Exits the program to prevent an endless loop
        cout << "Enter your choice: "; // Prompts the user to input their choice
        cin >> choice;

        try { // Using a try and catch for invalid inputs for the menu
            switch (choice) {
            case 1: {
                // Takes in the value of the integer you wish to find, finds it within the array, and gives you the index of said integer
                // If the integer isn't found, it restarts the process after alerting the user it wasn't found
                int value;
                cout << "Enter the integer to find: ";
                cin >> value;
                int index = findInteger(arr, size, value);
                if (index != -1) {
                    cout << "Integer found at index: " << index << endl;
                }
                else {
                    cout << "Integer not found." << endl;
                }
                break;
            }
            case 2: {
                // Takes in the index of the integer the user wishes to replace and prompts them to input the integer they'd like to replace it with
                int index, newValue;
                cout << "Enter the index to modify: ";
                cin >> index;
                cout << "Enter the new value: ";
                cin >> newValue;
                modifyInteger(arr, size, index, newValue);
                break;
            }
            case 3: {
                // Takes in the index of where to add the integer, which could be anywhere depending on how large the array was made before execution
                //After it verifies the index is valid, it prompts the user for the integer to add
                int index, newValue;
                cout << "Enter the index to add at: ";
                cin >> index;
                cout << "Enter the new integer to add: ";
                cin >> newValue;
                addInteger(arr, size, index, newValue);
                break;
            }
            case 4: {
                // Prompts the user to give an index to remove the value
                int index;
                cout << "Enter the index to remove: ";
                cin >> index;
                removeInteger(arr, size, index);
                break;
            }
            case 5: {
                // Exits the program, leaving the user to close the command prompt
                cout << "Exiting program." << endl;
                break;
            }
            default: {
                cout << "Invalid choice, please try again." << endl;
                break;
            }
            }
        }
        catch (const exception& e) {
            cout << "Error: " << e.what() << endl;
        }
    } while (choice != 5);

    return 0;
}
