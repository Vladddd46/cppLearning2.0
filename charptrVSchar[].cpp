#include <stdio.h>

int main() {
    char *a = "hello";
    char b[] = "hello";

    // Changing a pointer
    a = "world"; // Okay
    // a[0] = 'W'; // Not okay, attempting to modify string literal
    
    // Modifying array content
    // b = "world"; // Not okay, cannot reassign array
    b[0] = 'H'; // Okay
    printf("a: %s\n", a); // Output: world
    printf("b: %s\n", b); // Output: Hello

    return 0;
}

/*
char *a = "hello":
1. This declares a pointer a to a string literal "hello".
2. String literals in C/C++ are stored in read-only memory,
 and attempting to modify them can result in undefined behavior.
3. a is a pointer to the first character of the string literal "hello". 
   You can modify a to point to a different string literal, 
   but you shouldn't modify the content of the string literal through a.
*/

/*
char b[] = "hello":
1. This declares an array b of characters initialized with the string "hello".
2. The size of the array b is automatically determined by the compiler to
 accommodate the string and its null terminator (\0).
3. You can modify the content of b, but you cannot assign it to point
 to a different string literal directly.
4. However, you can copy another string into b.
*/