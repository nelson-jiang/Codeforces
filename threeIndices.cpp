#include <iostream>
#include <vector>



// STEPS

   // read in the inputs

   // loop through all possible middle indices

      // loop through all possible left indices looking for valid 
      
      // loop through all possible right indices looking for valid

int main(){ // start of main
            // where all of the action occurs

    // read in the number of test cases
    int t;
    std::cin >> t;


    while(t--){ // start of looping through the test cases
         
         int lengthOfPermutation;
         std::cin >> lengthOfPermutation;
        
        std::vector<int> permutation(lengthOfPermutation);
        for(int i = 0; i < lengthOfPermutation; ++i){ // read in the permutation into a vector
            
            int eachNum;
            std::cin >> eachNum;
            permutation[i] = eachNum;
        
        }





        bool foundTupleOfIndices = false; // set a flag to see if we have found a valid tuple of indices
        for(int j = 1; j < lengthOfPermutation-1 && !foundTupleOfIndices; ++j){ // loop through all possible middle indices, j
            
            int leftIdx = -1;
            for(int l = 0; l < j; ++l){ // loop through all possible left indices to see if we satisfy the condition ...
                if(permutation[l] < permutation[j]){leftIdx = l;} // ... this is the condition we must satisfy
            }
            if(leftIdx == -1){continue;} // if no leftIdx is found, then the middle index is not valid  ==> no need to check the rightIdx anymore ==> move onto the next middle index 

            
            // reaching here means leftIdx is valid
            int rightIdx = -1;
            for(int r = j+1 ; r < lengthOfPermutation; ++r){ // loop through all possible right indices to see if we satisfy the condition...
                if(permutation[j] > permutation[r]){rightIdx = r;} // ...this is the condition we must satisfy

            }


            if(rightIdx != -1){

                // reaching here means both leftIdx AND rightIdx are valid
                std::cout << "YES" << std::endl;
                std::cout << leftIdx+1 << " " << j+1 << " " << rightIdx+1 << std::endl; // we do the +1 because the problem is 1-based indexing while C++ is 0-based indexing

                foundTupleOfIndices = true; // change the flag so we can exit the middle index loop
            }

        } // end of looping through all possible middle indices


        if(foundTupleOfIndices == false){std::cout << "NO" << std::endl;} // if we are done looping through all possible middle indices and we still haven't found a valid tuple of indices then a valid tuple does not exist ==> print NO
        




        // reaching here means one test case is done ==> move onto the next test case


        

    } // end of looping through the test cases

    
    return 0;



} // end of main
