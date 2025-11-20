/*when we call a array as a arguement then a copy is not formed as usual case with
the fundamental data types, rather the address itself is sent and the work done by the function
is done in the original array
hence called call by reference.*/

#include <iostream>

void changeValue(int array[]);//don't need to put *array (pointer) like in the c because the both are the same.

int main()
{
    int array[] = {1,2,3,4};

    changeValue(array);

    for(int i{}; i < 4; i++){
        std::cout << array[i];
    }

    return 0;
    
}

void changeValue(int array[])
{
    for(int i{}; i < 4; i++){
        array[i] = 2*array[i];
    }
}
