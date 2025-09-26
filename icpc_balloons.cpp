#include <bits/stdc++.h>


int main(){ // start of main()
               // where all the action is

    // STEPS

       // create a set with all the alphabet letters

       // iterate through the input str 
            // check if the char is in the set
               // if yes --> add 2 to the answer (first time solving it) and then remove the char from the set
               // if no --> add 1 to the answer (has been solved before)
        

        int t;
        std::cin >> t;

        std::set<char> alphabet = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

        while(t--){ // start of looping through the test cases

            int n; std::string s;
            std::cin >> n >> s;
            int answer = 0;
            std::set<char> alphabet = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

            for(int i = 0; i < n; ++i){ // process the input string

                if(alphabet.find(s[i]) != alphabet.end()){ // we've never solved this problem before
                                                              // s[i] is a letter in the alphabet that represents a Problem
                    answer += 2;
                    alphabet.erase(s[i]); // show that it's been solved
                }
                else{answer += 1;} // we've solved this problem before
                
            } // end of processing the input string

            std::cout << answer << std::endl;

        } // end of looping through the test cases
        
       
    return 0;

} // end of main()

