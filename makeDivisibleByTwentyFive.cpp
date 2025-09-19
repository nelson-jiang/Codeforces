#include <iostream>
#include <algorithm>
#include <vector>


// KEY: a num is divisible by 25 if it ends in 00, 25, 50 or 75

// STEPS

   // read in the inputs

   // loop through the test cases

       // build our valid endings container <--- KEY observation: a number is divisible by 25 if it ends in 00, 25, 50 or 75

       // loop through each valid ending <-- to check if it's in the number string

           // loop through the number string (backwards) to try to find the indices of a valid ending IN OUR NUMBER STRING

           // compute how many digits we need to delete to make the number divisible by 25
                 // KEY IDEA: we want to delete ALL OF THE DIGITS BETWEEN [THE LEFTMOST DIGIT OF THE VALID ENDING] AND [THE RIGHTMOST DIGIT OF THE VALID ENDING]
                              // AND we want to delete all of the digits to the right of the [rightmost digit of the valid ending]       
                // so therefore, the count of digits we must delete is given by:
                        // (right - left - 1) + (length - 1 - right) == length - left - 2

           // so each valid ending will give us a number of digits to delete --> we must keep track of the MINIMUM number of digits to delete 

       // print ans

int main(){ // start of main
   
   int howManyTestCases;
   std::cin >> howManyTestCases;

   while(howManyTestCases--){ // loop through the test cases

    std::string numberString; // store our number (aka our test case) as a string
    std::cin >> numberString; // read in our number as a string

    const std::vector<std::string> validEndings = {"00","25","50","75"}; // KEY OBSERVATION:the four valid endings for a number to be divisible by 25
    int minCountOfDigitsToDeleteToMakeNumDivisbleBy25 = INT_MAX; // initialize our answer to the maximum possible value because we want to minimize the number of digits we delete

    for(const std::string& eachEnding : validEndings){ // try each ending ---- we loop through each of the valid endings check if it's in the number string

        int idxOfRightMostDigitOfEnding = -1;
        for(int indexSearcher = numberString.size()-1; indexSearcher >= 0; --indexSearcher){ // loop through the number string BACKWARDS
                                                                                            // we want to find the rightmost digit of the valid ending

            if(numberString[indexSearcher] == eachEnding[1]){ // if we have found the rightmost digit of a valid ending
                idxOfRightMostDigitOfEnding = indexSearcher; // store the index of the rightmost digit of a valid ending 
                break; // break out of the loop and go look for the leftmost digit of the valid ending
            }
        }
        if(idxOfRightMostDigitOfEnding == -1){continue;} // this "valid ending" we're on is not in the number string ---> go onto the next valid ending to see if it's in the number string


        int idxOfLeftMostDigitOfEnding = -1;
        for(int anotherIndexSearcher = idxOfRightMostDigitOfEnding-1; anotherIndexSearcher >=0; --anotherIndexSearcher){ // loop through the number string BACKWARDS
                                                                                                                         // we want to find the leftmost digit of the valid ending
                                                                                                                         // we 'continue' the search starting from [where the index of the rightmost digit] of the valid ending is

            if(numberString[anotherIndexSearcher] == eachEnding[0]){ // we have found the leftmost digit of a valid ending 
                 idxOfLeftMostDigitOfEnding = anotherIndexSearcher; // store the index of the leftmost digit of the valid ending
                 break; // break out of loop because we've already found what we're looking for
            }
        }
        if(idxOfLeftMostDigitOfEnding == -1){continue;} // this valid ending we're on is not in the number string --> go check the next valid ending to see if it's in the number string

        // now we have the indices of the leftmost and rightmost digits of the valid ending
        // we can now compute how many digits we need to delete to make the number divisible by 25
        // using our KEY FORMULA
        int howManyDigitsToDelete = numberString.size() - idxOfLeftMostDigitOfEnding - 2;   // using our KEY FORMULA

        minCountOfDigitsToDeleteToMakeNumDivisbleBy25 = std::min(minCountOfDigitsToDeleteToMakeNumDivisbleBy25, howManyDigitsToDelete);

    } // end of looping through each valid ending

    std::cout << minCountOfDigitsToDeleteToMakeNumDivisbleBy25 << '\n';

   } // end of looping through the test cases





} // end of main

