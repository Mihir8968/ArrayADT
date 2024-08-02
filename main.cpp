#include "Array.h"

int main() {
    // Create an array of size 10
    Array arr(10);
    
    // Create the array by taking input from the user
    arr.create();
    
    // Display the array
    cout << "Array elements after creation: ";
    arr.display();
    
    // Append an element to the array
    arr.append(5);
    cout << "Array elements after appending 5: ";
    arr.display();
    
    // Insert an element at index 2
    arr.insert(2, 7);
    cout << "Array elements after inserting 7 at index 2: ";
    arr.display();
    
    // Remove an element from index 3
    arr.remove(3);
    cout << "Array elements after removing element at index 3: ";
    arr.display();
    
    // Search for an element
    int index = arr.search(7);
    if (index != -1) {
        cout << "Element 7 found at index: " << index << endl;
    } else {
        cout << "Element 7 not found" << endl;
    }
    
    // Get an element from a specific index
    cout << "Element at index 2: " << arr.get(2) << endl;
    
    // Set an element at a specific index
    arr.set(2, 9);
    cout << "Array elements after setting 9 at index 2: ";
    arr.display();
    
    // Get the maximum element
    cout << "Maximum element in the array: " << arr.max() << endl;
    
    // Get the minimum element
    cout << "Minimum element in the array: " << arr.min() << endl;
    
    // Reverse the array
    arr.reverse();
    cout << "Array elements after reversing: ";
    arr.display();
    
    return 0;
}
