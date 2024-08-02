# ArrayADT
Various operations on arrays
# ArrayADT

This repository contains a C++ implementation of an Array Abstract Data Type (ADT). The Array class provides basic operations such as insertion, deletion, searching, and other common functionalities.

## Files

- `Array.h`: Header file containing the definition of the Array class.
- `main.cpp`: Example usage of the Array class.

## Usage

1. Include the `Array.h` file in your project.
2. Create an instance of the `Array` class.
3. Use the provided methods to manipulate the array.

## Example

```cpp
#include "Array.h"

int main() {
    Array arr(10);
    arr.create();
    arr.display();
    arr.append(5);
    arr.insert(2, 7);
    arr.display();
    arr.remove(3);
    arr.display();
    return 0;
}
