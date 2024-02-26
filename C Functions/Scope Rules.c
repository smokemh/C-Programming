#include <stdio.h>

int globalX = 5; // global variable

void useLocal(void);       // function prototype
void useStaticLocal(void); // function prototype
void useGlobal(void);      // function prototype

// function main begins program execution
int main(void)
{
    int x = 5; // local variable to main

    printf("local x in outer scope of main is %d\n", x);

    useLocal();       // useLocal has automatic local x
    useStaticLocal(); // useStaticLocal has static local x
    useGlobal();      // useGlobal uses global x
    useLocal();       // useLocal reinitializes automatic local x
    useStaticLocal(); // static local x retains its prior value
    useGlobal();      // global x also retains its value

    printf("\nlocal x in main is %d\n", x);

    return 0; // indicate that program ended successfully
} // end main

// useLocal reinitializes local variable x during each call
void useLocal(void)
{
    int x = 10; // local variable in useLocal
    printf("\nlocal x in useLocal is %d after entering useLocal\n", x);
    ++x;
    printf("local x in useLocal is %d before exiting useLocal\n", x);
} // end function useLocal

// useStaticLocal initializes static local variable x only the first time the function is called;
// value of x is saved between calls to this function
void useStaticLocal(void)
{
    static int x = 50; // static local variable
    printf("\nlocal static x is %d on entering useStaticLocal\n", x);
    ++x;
    printf("local static x is %d on exiting useStaticLocal\n", x);
} // end function useStaticLocal

// function useGlobal modifies global variable x during each call
void useGlobal(void)
{
    printf("\nglobal x is %d on entering useGlobal\n", globalX);
    globalX *= 10;
    printf("global x is %d on exiting useGlobal\n", globalX);
} // end function useGlobal
