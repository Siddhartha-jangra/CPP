#include <iostream>

#define  MY_NAME "siddhartha" //substituted text 
#define FOO 1876 // substituted 

void dosomething(){
#define ABC // they are not bothered by the local scopes and work as they are supposed to
}

int main()
{
    std::cout << MY_NAME << '\n'; //the defone is substituted with the text


    //  here #if works the same way as if statements

    #if FOO  // FOO is not substituted here as it is part of another preprocessor directive.
    std::cout << FOO <<'\n'; //FOO is substituted here since it is a part of the code.
    #endif

    #ifdef ABC //since ABC exists it is a true expression hence this code will be build/debug
        std::cout << "it exists" << '\n';
    #endif

    #ifdef  XYZ // since XYZ doesnot exist it will not be a part of the code compiled
        std::cout << "it doesn't exists" << '\n';
    #endif

    #if 0 //0 so it will not compile
        std::cout << "0 for false"<<'\n';
    #endif

    #if 1 //1 is true so it will run
        std::cout << "it runs"<< '\n';
    #endif

    #ifdef XYZ
        std::cout << "if statement" << '\n';
    #else 
        std::cout << "normal if else statement" << '\n';
    #endif   



    return 0;

}