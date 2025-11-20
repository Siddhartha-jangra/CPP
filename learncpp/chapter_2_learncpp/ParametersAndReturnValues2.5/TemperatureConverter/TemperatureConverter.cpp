#include <iostream>

char getTypeFromUser()
{
    std::cout << "enter the unit of temperature: " << '\n'
                << "C for celsius" <<'\n' << "F for farhenheit" << '\n';

    char type;
    std::cin >> type;
    return type;
}

double getValueFromUser()
{
    std::cout << "enter the temperature: " << '\n';
    int temp{};
    std::cin >> temp;
    return temp;
}

double celsiusToFarhenhiet(double temp) 
{
    return (9.0/5.0)*temp+32.0;
}

double farhenheitToCelsius(double temp) // can use the same identifier because the variable is localized.
{
    return (temp - 32.0)*5.0/9.0 ;
}

int main()
{
    start: // this is something i will learn later i usede it so that i could use goto statement.
        char type(getTypeFromUser());

        if(type == 'C'){
            double temp{getValueFromUser()};
            std::cout << celsiusToFarhenhiet(temp) << "F is the temperature in farhenheit" <<'\n';
        }
        else if(type == 'F'){
            double temp{getValueFromUser()};
            std::cout << farhenheitToCelsius(temp) << "C is the temperature in celsius" <<'\n';
        }
        else if(type !='C'&& type != 'F'){
            std::cout << "please enter the valid type."<< '\n';
            goto start;
        }
    return 0;
    
}