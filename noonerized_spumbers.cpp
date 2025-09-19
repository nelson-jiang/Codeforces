#include <bits/stdc++.h>

bool can_convert_to_LL_bounded(const std::string& in_str, long long& out_num){ // start of helper function defn.
    
    long long numeric_value = 0;

    for(char each_char : in_str){ // start of iterating through our input string
        if(each_char < '0' || each_char > '9'){return false;}
        numeric_value = numeric_value * 10 + (each_char - '0'); // incorporate the next digit (base-10)
        if(numeric_value >= (1LL<<31)){return false;} // 1L<<31 = 2^31 it's a left shift operator
    } // end of iterating through our input string

    out_num = numeric_value; // store the numeric value in our output parameter ---- this is either x, y or z

    return true;

} // end of helper function defn.




int main(){ // start of main()
                // where all of the action occurs

    std::string A, op, B, eq, C;
    std::cin >> A >> op >> B >> eq >> C;

    auto check_mathematical_correctness = [&](long long num1, long long num2, long long num3) -> bool{ return (op == "+") ? num1 + num2 == num3 : num1 * num2 == num3;}; // a definition of a lambda function that checks the mathematical correctness of the operation
    
    std::vector<std::string> nums = {A, B, C}; // store the three number strs so we can work with them later

    std::vector<std::pair<int, int>> indices_pairs = {{0,1}, {0,2}, {1,2}}; // store the pairs of indices (ie pairs of indices of the nums vector) of the three number strs so we can work with swapping later

    for(std::pair<int, int> each_indices_pair : indices_pairs){ // start of iterating over each pair of indices of the nums vec

        const std::string& S = nums[each_indices_pair.first]; const std::string& T = nums[each_indices_pair.second]; // reference the two numbers in the pair === grab the two numbers
        

        // iterating through possible prefix lengths for S and T
        for(int prefix_length_of_S = 1; prefix_length_of_S < (int)S.size(); ++prefix_length_of_S){ // choose a proper prefix length for S
           for(int prefix_length_of_T = 1; prefix_length_of_T < (int)T.size(); ++prefix_length_of_T){ // choose a proper prefix length for T
               
               std::vector<std::string> candidates = nums; // start from the original nums
               
               // do the swapping ==> get the new numbers and put them into the candidates vec
               candidates[each_indices_pair.first] = T.substr(0, prefix_length_of_T) + S.substr(prefix_length_of_S); // new_s = T[0:pj] + S[pi:]
               candidates[each_indices_pair.second] = S.substr(0, prefix_length_of_S) + T.substr(prefix_length_of_T); // new_T = S[0:pi] + T[pj:]


               long long x, y, z; // the numeric forms of the new, transformed numbers
               
               // try to convert into numeric forms and if conversion fails, move onto the next pair of indices
               if(!can_convert_to_LL_bounded(candidates[0],x)){continue;}
               if(!can_convert_to_LL_bounded(candidates[1],y)){continue;}
               if(!can_convert_to_LL_bounded(candidates[2],z)){continue;}


               if(check_mathematical_correctness(x, y, z)){std::cout << x << " " << op << " " << y << " = " << z << std::endl; return 0;} // if the mathematical correctness is met, print the result and return 0
           }

           // move onto the next prefices to test

        }
        // done iterating through possible prefix lengths for S and T

    } // end of iterating over each pair of indices of nums vec


    return 0;

} // end of main()






