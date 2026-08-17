# Testing & Code Review — Pointers & Memory

## Manual Verification

The Pointers & Memory implementation was manually verified for the following cases:

* Pointer correctly stores the address of a variable.
* Dereferencing a pointer correctly reads the variable's value.
* Modifying a value through a pointer correctly updates the original variable.
* Dynamic memory is allocated and accessed correctly.
* `std::unique_ptr` manages dynamically allocated memory safely.
* Array values can be accessed using pointer arithmetic.
* The program handles the defined examples without invalid memory access.

## Code Review

The implementation was reviewed for:

* Clear and modular functions.
* Proper use of pointers.
* Safe modern C++ memory management.
* Avoidance of unnecessary manual `new`/`delete`.
* Readable naming and formatting.
* Appropriate use of `std::unique_ptr`.
* Basic edge-case and memory-safety considerations.

## Result

All planned manual verification checks passed. The implementation is ready for review.
