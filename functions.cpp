#include "functions.h"
#include <fstream>

// Function to load data from a file into an array
int loadDataFromFile(int arr[], const string& filename) {
    ifstream infile(filename);
    int index = 0;
    // If the file isn't able to be opened, it outputs to the command prompt that the file was not able to be opened
    if (!infile) {
        cerr << "File could not be opened!" << endl;
        return -1;
    }

    while (infile >> arr[index] && index < MAX_SIZE) {
        index++;
    }

    infile.close();
    return index; // Returns the number of elements read into the array
}

// Function to check if a certain integer exists in the array
int findInteger(const int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i; // Return the index where the number is found
        }
    }
    return -1; // Return -1 if not found
}

// Function to modify the value of an integer at a given index
void modifyInteger(int arr[], int size, int index, int newValue) {
    if (index < 0 || index >= size) {
        throw out_of_range("Index out of range");
    }
    int oldValue = arr[index];
    arr[index] = newValue;
    cout << "Old value: " << oldValue << ", New value: " << newValue << endl;
}

// Function to add a new integer to the end of the array
void addInteger(int arr[], int& size, int index, int newValue) {
    if (size >= MAX_SIZE) {
        throw overflow_error("Array is full");
    }
    if (index < 0 || index > size) {
        throw out_of_range("Index out of range");
    }

    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = newValue;
    size++; // Increase the size of the array
    cout << "Added value: " << newValue << " at index: " << index << endl;
}

// Function to replace or remove an integer at a given index
void removeInteger(int arr[], int& size, int index) {
    if (index < 0 || index >= size) {
        throw out_of_range("Index out of range");
    }

    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--; // Decrease the size of the array
    cout << "Removed value at index: " << index << endl;
}
