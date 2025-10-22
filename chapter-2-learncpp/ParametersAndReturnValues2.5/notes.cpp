#include <iostream>

int add(int x, int y)       /* x and y are the paramters of this funtion which are initialized like a variable.
                              thses variables are local variable i.e only exists in the function.*/
{
    return x + y;
}

int subtract(int x, int y)
{
    int z { x-y };
    return z; //return is the values that is passed on the the caller of the function.
}
int main()
{
    std::cout << add(9,8) << '\n'; // 9 and 8 are the arguments that are passed to the function being called in this case "add".

    std::cout << subtract(8 , add(3,4)); // the return values of other funtions themselves can be used as arguments for diff functions.
    return 0;
}

/* there are some funtions which have parameters but they are not required so they should be left without identifier 
    e.g. int function(int /*some name*/ //then baracket close