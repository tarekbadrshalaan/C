# C
## Learning C Programming language 

## Sources :
* **[![tutorialspoint](https://www.tutorialspoint.com/cprogramming/)](https://www.tutorialspoint.com/cprogramming/)**
* **Data Structures And Program Design In C** Book

## Notes
* string formatting
  * `%d` -> `int`
  * `%ld` -> `long`
  * `%E` -> `double`
  * `%f` -> `float`
  * `%c` -> `char`
  * `%p` -> `pointer`
  * `%s` -> `string` || []char



* Lvalues and Rvalues in C
  
    `There are two kinds of expressions in C −`

    * **lvalue** − Expressions that refer to a memory location are called "lvalue" expressions. An lvalue may appear as either the left-hand or right-hand side of an assignment.

    * **rvalue** − The term rvalue refers to a data value that is stored at some address in memory. An rvalue is an expression that cannot have a value assigned to it which means an rvalue may appear on the right-hand side but not on the left-hand side of an assignment.

* Storage Classes
    * **auto** can only be used within functions, i.e., local variables.
    * **register** The register should only be used for variables that require quick access such as counters. It should also be noted that defining `'register'` does not mean that the variable will be stored in a register. It means that it MIGHT be stored in a register depending on hardware and implementation restrictions.
    * **static** storage class instructs the compiler to keep a local variable in existence during the life-time of the program instead of creating and destroying it each time it.
    * **extern** storage class is used to give a reference of a global variable that is visible to ALL the program files.

* to compile 
    > gcc -Wall hello.c

* to run 
    > ./a.out

* ### Pointers
    * A pointer is a variable whose value is the address of another variable, i.e., direct address of the memory location.
    * type is the pointer's base type; it must be a valid C data type. The asterisk `'*'` used to declare a pointer.
        * int    *ip;    **pointer to an integer**
        * double *dp;    **pointer to a double**
        * float  *fp;    **pointer to a float**
        * char   *ch     **pointer to a character**

