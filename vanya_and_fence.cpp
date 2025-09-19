#include <bits/stdc++.h>

// STEPS

   // iterate through the friends
      // compare the height of the friend to the height of the fence
         // if the friend is taller ==> add 2 to the width to represent the friend bending over
         // else ==> add 1 to the width to represent the friend standing straight

int main(){ // start of main(.)
             // where all the action happens

    
    int n, h; // n is how many friends
              // h is the height of the fence
    std::cin >> n >> h;
    
    int width = 0;
    for(int i = 0; i < n; ++i){ // iterate through the friends

        int current_friend_height;
        std::cin >> current_friend_height;

        if(current_friend_height > h){width += 2;} // friend is too tall ==> bend over ==> add 2 to the width
        else{width += 1;} // friend is short enough ==> no need to bend over ==> add 1 to the width
        
    } // done iterating through the friends

    std::cout << width << std::endl;

    return 0;

}  // end of main(.) 



