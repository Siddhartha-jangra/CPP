/*the program is to reverse a array and there are two ways to do it:
    1. using swap function:- just swap values 
    2. by manually swapping
important thing: when runnig the loop make sure that the loop only goes half way 
through so that the swapped values are not swapped back the original way.*/


#include <iostream>

void reverse(int array[],int n ); //manual way
//void reverse2(int array[],int n); // the swap function

int main()
{   
    //get the size of array
    std::cout << "put the value: \n";
    int n;
    std::cin >> n;

    int array[n];
    //put values in the array
    for(int i{}; i < n; i++){
        std::cin >> array[i];
    }
// calling the reverse function
    reverse(array, n);
    //printing the reversed values
    for(int i{}; i < n; i++){
        std::cout << array[i] << " ";
    }

    return 0;
}

void reverse(int array[], int n)
{   
// the loop runs only half way
    for(int i{}; i < n/2; i++){
        int temp = array[i];
        array[i] = array[n-i-1];
        array[n-i-1] = temp;
    }

}

/*void reverse2(int array[],int n)
{
    for(int start{}; int end{}; start <= end; start++; end--)
    {
        swap(array[start], array[end])
    }
}*/