#include <bits/stdc++.h>


// STEPS:

   // KEY: we just need to count how many pairs we can make from the nums we read in

   // walk through the array and create a map of nums and their counts:    num --> count

   // walk through the map and count how many pairs we can make
      // the amount of pairs we can make is floor(count / 2)

   

int main(){ // start of main()

   int t; // how many test cases
   std::cin >> t;

   while(t--){ // start of looping through the test cases
     
      int n; // length of the array
      std::cin >> n;

      int each_num;
      std::map<int, int> num_counts_map;
      for(int i = 0; i < n; ++i){
        std::cin >> each_num;
        num_counts_map[each_num]++;
      }



      int how_many_pairs = 0;
      for(auto& [num, count] : num_counts_map){how_many_pairs += count / 2;} // floor division already built in
      


      std::cout << how_many_pairs << std::endl;

   } // end of loop through the test cases


    return 0;

} // end of main()