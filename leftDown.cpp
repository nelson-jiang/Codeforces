#include<bits/stdc++.h>





// STEPS of the solver:

   // find the pieces that we need: g and t0


   // draw conclusions based on logic

      // t0 [the minimum number of steps i can split (a,b) into to keep each step-size <= k]
      // g is [the maximum number of identically-sized steps i can split (a,b) into]

      // so g >= t0 is saying " “The [maximum number of identically-sized steps I can split (a,b) into] is at least the [minimum number of steps i must split (a,b) into to keep each step-size <= k]" ==> i can use one operation pair over and over again to get to the goal
        // else (g < t0) means that the step-size that i get when i try to split (a,b) into identically-sized steps is larger than k ==> i cannot use just one operation pair to get to the goal


long long ceil_div(long long numerator, long long denominator){return (numerator + denominator - 1) / denominator;} // helper function defn. to do ceiling division

int main(){ // start of main()

    int t; // how many test cases
    std::cin >> t; // read in the amount of test cases

    while(t--){ // start of looping through all the test cases

        long long a, b, k; 
        std::cin >> a >> b >> k; // read in

        long long g = std::gcd(a,b);
        long long t0 = std::max(ceil_div(a,k), ceil_div(b,k));

        if(g >= t0){std::cout << 1 << std::endl;} // cost is 1 ==> we can use one distinction operation pair
        else{std::cout << 2 << std::endl;} // cost is 2

    } // end of looping through all the test cases


   return 0;


} // end of main()

