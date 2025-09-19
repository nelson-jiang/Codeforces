#include <bits/stdc++.h>




// STEPS

   // read in the inputs

   // KEY: no matter which operation, the DIFFERENCE between the two bets will always be the same
      
      // KEY #2: for any two integers x and y, the gcd(x,y) will always divide every linear combination of x and y (e.g. x-y)

      // KEY #3: the gcd can NEVER be larger than d, where d is x-y (the difference between the two bets)

int main(){ // start of main 
            // where all of the action occurs
    

    int t;
    std::cin >> t;

    while(t--){ // start of looping through the test cases
        
        // read in the bets
        long long a, b;
        std::cin >> a >> b;
        
        long long difference = std::abs(a-b);



        if(difference == 0){ // the difference between the two bets is 0 meaning gcd(a,b) = a = b ==> we can always just do the first operation (the increment operation) infinite amount of times to maximize the gcd
            std::cout << "0" << " " << "0" << std::endl;
            continue; // move onto the next test case
        } 

        
        // reaching here means the difference between the two bets is NOT 0

        // KEY #4: because both bets move together (via the operations), the value of b can slide through any integer and a will always be b+difference
              // a-b == difference ==> a == b + difference
              // so all tuples will eventually become (b+difference, b) after some number of operations

              // KEY #5: we only need one of the bets to eventually become a multiple of d
                   // think of this like ROUND a or b up or down to the nearest multiple of d
            
        long long minMoves = std::min(b%difference, difference - (b%difference)); // (b%difference) is just a number ---- let's call this number r
                                                                      // r (for remainder) is how far b extends past the previous multiple of d
                                                                         // ==> you can backtrack r steps to reach that previous multiple OR you can advance d-r steps to reach the next multiple of d
                                                                             // pick whatever is shortest
        std::cout << difference << " " << minMoves << std::endl;  // the largest gcd between the two bets is [the difference between the two bets] <--- based on KEY #2 and KEY #3


    } // end of looping through the test cases



    return 0;


} // end of main