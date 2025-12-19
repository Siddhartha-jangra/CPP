 #include <iostream>
//this one shows runtime error we have to stop the overflow itself.
     //int reverse(int x) {

        // int rev{};

        // while(x != 0){
        //     int lastDigit {x%10};
        //     int test = rev;
        //     rev = lastDigit + 10*rev;
        //     if(test != rev/10){
        //         return 0;
        //     }
        //     x /= 10;
        // }

        // return rev;
    //}

    int reverse(int x) {

        int rev{};

        while(x != 0){
            int lastDigit {x%10};
           if(rev > INT_MAX/10||( rev == INT_MAX/10 && lastDigit > 7 )){
            return 0;
           }
           else if(rev < INT_MIN/10 || (rev == INT_MIN/10&& lastDigit < -8)){
            return 0;
           }
           else{
            rev = lastDigit + 10*rev;
           }
           x /=10;
        }

        return rev;
    }

    int main(){ 
        std::cout << reverse(-889);
        return 0;
    }