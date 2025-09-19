#include <bits/stdc++.h>



long long digit_sum(long long n){ // start of helper function defn
    
    long long sum = 0;
    while(n > 0){
        sum += n % 10; // keep accumulating the rightmost digit
        n /= 10; // chop off the rightmost digit
    }

    return sum;
} // end of helper function defn





int main(){ // start of main()
               // where all of the action occurs

    int k;  // the kth perfect number we are looking for 
    std::cin >> k;



    long long whichth_perfect_number_we_are_on = 0;
    for (long long possible_perfect_number = 19; ; ++possible_perfect_number){ // the first perfect number is 19
                                                                                  // we just keep checking numbers after that --- "looking upwards"
          
        if(digit_sum(possible_perfect_number) == 10){ // if we got a perfect number...

            ++whichth_perfect_number_we_are_on;

            if(whichth_perfect_number_we_are_on == k){ // we have found the kth perfect number
                std::cout << possible_perfect_number << std::endl;
                break;
            }
        }

    }
    
    return 0;

} // end of main()



