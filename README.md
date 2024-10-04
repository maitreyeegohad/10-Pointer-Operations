# Pointer-Operations

## Aim 
To study pointer operations

## Software Used 
Visual studio code

## Theory
<br>
In C++, functions can receive parameters in different ways, influencing how the function manipulates the provided values. Two common methods are Call by Reference and Call by Value:
<br>

### Call by Value  

**Definition:** When you pass a pointer to a function by value, you are passing a copy of the pointer itself. This means that while the function can modify the value pointed to by the pointer, it cannot change the pointer to point to a different memory location.

**Working:** The function receives a copy of the pointer, which means it can access and modify the data at the memory address pointed to by the pointer.However, if you change the pointer itself (e.g., make it point to a different address), this change will not affect the original pointer outside the function.

### Call by Reference 

**Definition:** When you pass a pointer to a function by reference, you are passing a reference to the pointer itself. This allows the function to modify not only the value pointed to by the pointer but also the pointer itself.

**Working:** The function receives a reference to the original pointer, meaning that any modifications to the pointer (such as changing what it points to) will affect the original pointer outside the function.This approach is useful for functions that need to change which variable a pointer is pointing to.

## Algorithms
### Call by value

1. **Start**
2. **Define Function `swap(int x, int y)`**
   - **Input:** Two integers `x` and `y`
   - **Output:** Swapped values of `x` and `y`
   - **Inside Swap function:**
     1. Create a temporary variable `temp`
     2. Assign the value of `x` to `temp`
     3. Assign the value of `y` to `x`
     4. Assign the value of `temp` to `y`
3. **Inside `main` Function**
   - Define two integers `a` and `b` with 5 and 2
   - Call `swap(a, b)`
   - Print the value of `a`
   - Print the value of `b`
4. **End**

### Call by reference

1. **Start**
2. **Define Function `swap(int *x, int *y)`**
   - **Input:** Pointers to two integers `x` and `y`
   - **Output:** Swapped values of the integers pointed to by `x` and `y`
   - **Steps:**
     1. Make a temporary variable `temp`
     2. Assign the value pointed to by `x` to `temp` (`temp = *x`)
     3. Assign the value pointed to by `y` to the location pointed to by `x` (`*x = *y`)
     4. Assign the value of `temp` to the location pointed to by `y` (`*y = temp`)
3. **In `main` Function**
   1. Define integers `a` and `b` with 5 and 2.
   2. Call `swap(&a, &b)` function
   3. Print the value of `a`
   4. Print the value of `b`
4. **End**



## Conclusion
The call by value algorithm allows you to modify the value at the address pointed to by the pointer, but changes to the pointer itself do not affect the original pointer.
<br>The call by reference algorithm allows for both the modification of the value pointed to by the pointer and the pointer itself, enabling dynamic manipulation of memory addresses.
