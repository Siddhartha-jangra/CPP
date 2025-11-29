#include <iostream>

// The size of the array is fixed at 7
#define ARRAY_SIZE 7

/**
 * @brief Finds the unique number in a hardcoded array using nested loops.
 * @return The unique number.
 */
int findUniqueNumber_BruteForce() {
    // Hardcoded array as requested.
    int arr[ARRAY_SIZE] = {1, 2, 2, 3, 4, 3, 4};
    
    // Outer loop iterates through every element
    for (int i = 0; i < ARRAY_SIZE; i++) {
        int current_element = arr[i];
        // Assume the current element is unique until a duplicate is found
        bool is_unique = true; 

        // Inner loop checks the current element against ALL other elements
        for (int j = 0; j < ARRAY_SIZE; j++) {
            // We must skip comparing the element with itself
            if (i == j) {
                continue; 
            }

            // If a match is found, the current element is NOT unique
            if (current_element == arr[j]) {
                is_unique = false;
                // Once a duplicate is found, we can stop the inner loop and move to the next 'i'
                break; 
            }
        }

        // After the inner loop finishes, if 'is_unique' is still true, we found it.
        if (is_unique) {
            return current_element;
        }
    }
    
    // This part should not be reached based on the problem (there is always a unique number)
    return -1; 
}

int main() {
    std::cout << "Finding the unique number in the array {1, 2, 2, 3, 4, 3, 4}..." << std::endl;
    
    int unique = findUniqueNumber_BruteForce();
    
    std::cout << "The unique number is: " << unique << std::endl;
    
    return 0;
}