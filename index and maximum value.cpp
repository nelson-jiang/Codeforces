#include <iostream>
#include <climits>
#include <algorithm>


// STEPS
   // read in the inputs

   // find the maximum value in the original array

   // loop through the operations

       // perform the operations on the MAX VALUE OF THE ARRAY ONLY <---- this is the KEY to the problem
           // this KEY is very similar to the HackerRank Array Manipulation problem where we DON'T UPDATE EVERY SINGLE ENTRY IN THE ARRAY

int main(){ // start of main
            // where all of the action occurs

    // read in the inputs
    int t; // how many test cases
    std::cin >> t;

    while(t--){ // start of looping through the test cases

        int n, m; // n is the lenght of arr
                      // m is the count of operations
        std::cin >> n >> m; // read in n and m

        long long maxValueOfArr = LLONG_MIN; // initialize our answer to the minimum possible value


        while(n--){ // read in the original array and FIND THE MAXIMUM VALUE IN THE ORIGNINAL ARRAY
            long long eachOriginalArrValue;
            std::cin >> eachOriginalArrValue;
            maxValueOfArr = std::max(maxValueOfArr, eachOriginalArrValue);
        }
        // at this point, we have the maximum value of the original array

        while(m--){ // loop through the operations

            char operation; // can only be '+' or '-'
            long long leftBound, rightBound; // left and right are NOT indices --> they are the value bounds
            std::cin >> operation >> leftBound >> rightBound; // read in one line of input (op, left, right)
            
            if(leftBound <= maxValueOfArr && maxValueOfArr <= rightBound){ // KEY: max value of arr only changes if it's in the range of left and right
                
                // ONLY UPDATE THE MAX VAL
                if(operation == '+'){
                    maxValueOfArr++;
                }
                else{ // means operationg is '-
                    maxValueOfArr--;
                }
            }

            std::cout << maxValueOfArr << " "; // print the max value of arr after each operation

        }
        std::cout << '\n';


    } // end of looping through the test cases

    return 0;

} // end of main


