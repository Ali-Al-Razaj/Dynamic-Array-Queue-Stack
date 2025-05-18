# Dynamic Array-Based Stack and Queue in C++
This project implements fundamental data structures—Dynamic Array, Stack, and Queue—from scratch in C++. It serves as an educational resource to understand the inner workings of these structures without relying on the Standard Template Library (STL).

## Features
1. **Dynamic Array (clsDynamicArray)**
    - **Automatic Resizing**: The array dynamically resizes when capacity is reached.

    - **Element Access**: Provides methods to access and modify elements by index.

    - **Utility Functions**: Includes functions to get the current size and capacity.

2. **Stack (clsMyStackArr)**
    - **Push**: Adds an element to the top of the stack.

    - **Pop**: Removes the top element from the stack.

    - **Peek**: Returns the top element without removing it.

    - **IsEmpty**: Checks if the stack is empty.

    - **Size**: Returns the number of elements in the stack.

3. **Queue (clsMyQueueArr)**
    - **Enqueue**: Adds an element to the end of the queue.

    - **Dequeue**: Removes the front element from the queue.

    - **Peek**: Returns the front element without removing it.

    - **IsEmpty**: Checks if the queue is empty.

    - **Size**: Returns the number of elements in the queue.

## File Structure
- **clsDynamicArray.h**: Implementation of the dynamic array.

- **clsMyStackArr.h**: Stack implementation using the dynamic array.

- **clsMyQueueArr.h**: Queue implementation using the dynamic array.

- **Custom Stack Using Dynamic Array.cpp**: Demonstration of the stack operations.

- **Custom Stack Using Dynamic Array.sln, Custom Stack Using Dynamic Array.vcxproj, Custom Stack Using Dynamic Array.vcxproj.filters**: Visual Studio solution and project files.