#include <iostream>
#include <stdexcept>
using namespace std;

const int MAX_SIZE = 150; // Maximum size of the array

// Function declarations
int loadDataFromFile(int arr[], const string& filename);
int findInteger(const int arr[], int size, int value);
void modifyInteger(int arr[], int size, int index, int newValue);
void addInteger(int arr[], int& size, int index, int newValue);
void removeInteger(int arr[], int& size, int index);


