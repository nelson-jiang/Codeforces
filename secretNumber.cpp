#include<bits/stdc++.h> 

// STEPS

   // going from k = 1, 2, 3, ...
      // do a `size` check ==> what if the denominator is too big? Can we still use it?
      // if n % (10^k + 1) == 0 ==> then figure out x and put it into the container
    
   // sort the container of xs and then print out its contents
   



int main(){ // start of main()
    
    int t; // how many test cases
    std::cin >> t; // read in the number of test cases

    
    // precompute the powers of 10
       // this p10[.] is an array that will store the powers of 10
    long long p10[19];  // use 19 here as the size because 10^18 is the largest power of 10 that can be used
    p10[0] = 1;
    for(int i = 1; i <= 18; ++i){p10[i] = p10[i-1] * 10LL;}

    while(t--){ // loop through all of the test cases
       
        long long n; 
        std::cin >> n; // read in the secret number

        
        std::vector<long long> containerOfXs;
        for(int k = 1; k <= 18; ++k){ // walking "up" through all of your k's
           
            long long denominatorToUse = p10[k] + 1; // this is the (10^k + 1)
                                                        // grab the exact power then add 1 to it

            if(denominatorToUse > n){break;} // if the denominator is greater than n ==> you can't use it ==> no further k's can be used

            if(n % denominatorToUse == 0){ // if n is a multiple of the denominator ==> you can figure out x
                long long x = n / denominatorToUse; // figure out x
                containerOfXs.push_back(x); // put into container
            }

        }


        if(containerOfXs.empty()){std::cout << 0 << std::endl;} // there are no x's to construct n ==> print 0
        else{
            sort(containerOfXs.begin(), containerOfXs.end());
            std::cout << containerOfXs.size() << std::endl;
            for(size_t i = 0; i < containerOfXs.size(); ++i){std::cout << containerOfXs[i] << " ";}
            std::cout << std::endl;
        }

    } // end of looping through all of the test cases

    return 0;

} // end of main()



