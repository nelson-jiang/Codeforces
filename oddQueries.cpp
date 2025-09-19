#include <iostream>
#include <vector>



// STEPS

   // read in the inputs
       // read in the other inputs
      // read in the arr
    
   // find the PREFIX SUM of the arr

   // process each query
       // find the sum of the segment <--- this is why we used prefix sum and not the original arr
       // find the length of the segment

       // find the new sum
          // subtract off and replace

       // check if new sum is odd or even


int main(){ // start of main
            // where all of the action occurs

    int t; // how many test cases
    std::cin >> t; // read in count of test cases

    while(t--){ // start looping through the test cases
        
        // read in the inputs
        int lengthOfArr, howManyQueries;
        std::cin >> lengthOfArr >> howManyQueries;
        

        // build the prefix sum of arr
        std::vector<long long> prefixSumOfArr(lengthOfArr+1,0); // pref[0] = 0 the sentinel
        for(int i = 1; i <= lengthOfArr; ++i){
            long long eachArrNum;
            std::cin >> eachArrNum;

            prefixSumOfArr[i] = prefixSumOfArr[i-1] + eachArrNum;
        }
        long long arrSum = prefixSumOfArr[lengthOfArr]; // original sum of the arr


        
        while(howManyQueries--){ // start of processing each query
                                 // KEY: QUERIES ARE INDEPENDENT OF EACH OTHER --- at the start of each query, imagine the arr resets to the original state
            
            // read in the query pieces
            int leftIdx, rightIdx; long long replacementNum;
            std::cin >> leftIdx >> rightIdx >> replacementNum;
            
            // we are doing 1-based indexing
            long long sumOfSegment = prefixSumOfArr[rightIdx] - prefixSumOfArr[leftIdx-1]; // KEY: sum of between is [sum of up to right] - [sum of up to left]
            long long replacementSum = (rightIdx - leftIdx + 1) * replacementNum; // replace the segment with the replacementNum in all of its positions
            
            long long newSum = arrSum - sumOfSegment + replacementSum; // KEY: all nums out of the segment are irrelevant
                                                                                              // subtract and replace



            // check if new sum is odd or even
            if(newSum % 2 == 1){std::cout<< "YES" << std::endl;}
            else{std::cout << "NO" << std::endl;}



        } // end of processing each query
        

    } // end of looping through the test cases

    return 0;

} // end of main