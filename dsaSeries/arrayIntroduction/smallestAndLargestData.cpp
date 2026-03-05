/*we will use INT_MAX AND INT_MIN  to assign inf and -inf to to variables
and then compare the values with the array to replace the in and -inf with 
the smaller and larger term using a loop.*/


#include <iostream>

int main()
{
    std::cout << "enter the number of datas put in array: \n";
    int num{};
    std::cin >> num;
   
    int array[num];// this will not work because array is a compile time property 
    //                 the values is put at runtime. std::vector is for runtime array.



    //variable to store the smallest data.
    static int k{INT_MAX};
    //variable to store the largest data.
    static int l{INT_MIN};

    //put value in array
    int array[8];
    for(int i{}; i < 8; i++){
        std::cin >> array[i];
    }

    //to call the data number wise [we can do this or we can do the next thing]
    /*for(int i{}; i < 8; i++){
        
        /*all the numbers will be smaller then in so first one will be stored
        there and then the rest will be compared to that
        if(array[i] < k){
            k = array[i];
            return k;
        }
        if(array[i] > l){
            l = array[i];
        }
        
    }*/


    for(int i{}; i < 8; i++){
        k = std::min(array[i], k);//min function to fond what's min of the two
        l = std::max(array[i], l);//max function to fond what's max of the two
    }


    std::cout << k << std::endl;
    std::cout << l << std::endl;

    return 0;
}