# Week 1 Progress

## Task 1: Pointers & Memory

### Pointers

A pointer is a variable that stores the memory address of another variable. Pointers are useful for accessing and modifying data indirectly and are an important part of C++ memory management.

Example:

```cpp
int x = 10;
int* ptr = &x;

*ptr = 20;
```

Here, `ptr` stores the address of `x`, and `*ptr` accesses the value stored at that address.

### Memory

Memory in C++ can be broadly understood through areas such as the stack and heap.

* **Stack:** Stores local variables and function-related data. Memory is managed automatically.
* **Heap:** Used for dynamically allocated memory and must be managed carefully.

Dynamic memory can be allocated using `new` and released using `delete`.

```cpp
int* p = new int(10);
delete p;
```

Modern C++ generally prefers smart pointers such as `std::unique_ptr` and `std::shared_ptr` when dynamic memory management is required.

### Setup

The C++ development environment and required tools will be used for the upcoming C++ track assignments.
