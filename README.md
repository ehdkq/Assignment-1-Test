# Assignment 1 Test

This program runs by compiling it and then executing it.
It should pop up a menu prompting the user with some options on what to do with the array loaded in via A1input.txt
The first function finds an integer and what index that integer is at.
The second function modifies an integer by taking the index and adding the new value into said index.
The third function takes in the index of the array and prompts the user to then type in the new value to add to the array.
The fourth function asks the user for an index to remove, and removes the integer from that index.
The fifth menu option just ceases execution of the program.

In functions.cpp, each function is implemented and has throw/catch blocks to find errors within inputs or the input text file itself. 
In the main cpp file, it calls on the functions here, which calls them from the definitions in functions.h
The throw/catch blocks of the code is part 2 of the question in the assignment document.

In functions.h, there is the function declarations, as well as the MAX_SIZE function, so the array cannot have more than a certain predefined size.
