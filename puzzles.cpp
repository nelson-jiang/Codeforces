#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>



// STEPS

   // 1. read in the input
   
   // KEY: when the size are sorted in ascending order then the best puzzles must be adjacent to each other because skipping any puzzle will only increase the difference
          // 2. sort the container of puzzle sizes
          // 3.do a sliding window and measure the difference between left and right bound because that difference is the largest possible difference in that window
             // our goal is to find the smallest [largest possible difference in a window]

int main(){ // start of main
            // where all of the action occurs

   // read in the input
   int howManyStudents, howManyPuzzles;
   std::cin >> howManyStudents >> howManyPuzzles;
   
   std::vector<int> containerOfPuzzleSizes(howManyPuzzles);
   for(int i = 0; i < howManyPuzzles; ++i){ // read our input into a vector (container)
      int eachPuzzleSize;
      std::cin >> eachPuzzleSize;
      containerOfPuzzleSizes[i] = eachPuzzleSize;
   }


   // sort the container of puzzle sizes
   std::sort(containerOfPuzzleSizes.begin(), containerOfPuzzleSizes.end());

   // 3.
   int minPuzzleSizeDifference = INT_MAX;
   for(int leftIdx = 0; leftIdx < howManyPuzzles; ++leftIdx){ // the sliding window in action
      
      // leftIdx is the left index bound of our window


      int rightIdx = leftIdx + howManyStudents - 1; // compute the right index of our window
      if(rightIdx <= howManyPuzzles-1){ // ensure we're in bounds
         
         int currDifference = abs(containerOfPuzzleSizes[rightIdx] - containerOfPuzzleSizes[leftIdx]);
         if(currDifference < minPuzzleSizeDifference){minPuzzleSizeDifference = currDifference;}

      }


   }

   std::cout << minPuzzleSizeDifference << std::endl;


} // end of main

