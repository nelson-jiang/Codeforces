#include <bits/stdc++.h>


long long cost_counter(const std::vector<int>& positions_of_A, int start_position){ // start of cost_counter(.) helper function defn.
    
     long long cost = 0; // cost accumulator initialization
     
     // process all of the [positions of `A` in the input string s]
     for(int i = 0; i < (int)positions_of_A.size(); ++i){
        long long target_position = 2*i + start_position; // which position we want the current `A` to be in the valid finish
        cost += std::abs(positions_of_A[i] - target_position); // update the cost --- it keeps accumulating as we process each [position of `A` in the input string s]
                                                                  // `positions_of_A[i]` this object is a [position of `A` in the input string s]
     }
     // end of processing all of the positions of `A` in the input string s

     return cost;
} // end of cost_counter(.) helper function defn.




// KEYS
   // only two valid finishes exist "ABAB..." or "BABA..."

   // just focus on the `A`s

   // in a valid finish position, `A`s are either in EVEN or ODD positions (look at the valid finishes)

   // swapping neighbors moves a character by one place
      // to move an `A` from position i to position j, you must pass |i - j| positions so the cost is |i-j|
         // we want to move `A` to their respective even/odd target positions, thus the cost is |i-j|

    // the first `A` must map to the first position of the valid finish
       // the second `A` must map to the second position of the valid finish

int main(){ // start of main()
               // where all of the action happens

    int n;
    std::string s;
    std::cin >> n >> s;
    
    // grab all of the positions of the `A`s from our input string
    std::vector<int> positions_of_A;
    positions_of_A.reserve(n);
    for(int i = 0; i < (int)s.size(); ++i){if(s[i] == 'A'){positions_of_A.push_back(i);}}
    

    // calculate the cost of each valid finish parity (even or odd)
        // "Even" is when the finish position has A in all the odd positions (example: "ABAB..." since A's are in the positions 0, 2, 4, ...)
        // "Odd" is when the finish position has A in all the even positions (example: "BABA..." since A's are in the positions 1, 3, 5, ...)
    long long cost_even = cost_counter(positions_of_A, 0); // start is 0 for the even parity
    long long cost_odd = cost_counter(positions_of_A, 1); // start is 1 for odd parity

    std::cout << std::min(cost_even, cost_odd) << std::endl; // pick the smallest of the two costs is the final answer


    return 0;


} // end of main()