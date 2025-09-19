#include <iostream>
#include <vector>
#include <algorithm>
    



// STEPS

    // read in the inputs

    // build our prefix array of damages

    // query the quest (aka answer the question)
        // use the prefix array to anser the quest 


int main() { // this is the start of main 
             // where all of the action occurs

    // read in the inputs
        // the first line of inputs is the size of array and how many quests
    int howManyStairs, howManyQuests;
    std::cin >> howManyStairs >> howManyQuests;
        // read in the stairs array from the input
    std::vector<long long> stairs(howManyStairs+1);
    for(int i = 1; i <= howManyStairs; ++i){
        std::cin >> stairs[i];
    }


    // build our prefix array of damages
    std::vector<long long> cumulativeDamageLeftToRight(howManyStairs+1,0);
    std::vector<long long> cumulativeDamageRightToLeft(howManyStairs+1,0);

    for(int i = 2; i <= howManyStairs; ++i){ // we are starting at 2 because we are using 1-indexing
                                             // we are building our prefix array of damages from left to right
        cumulativeDamageLeftToRight[i] = cumulativeDamageLeftToRight[i-1] + std::max(0LL,stairs[i-1] - stairs[i]);
    }

    for(int i = howManyStairs-1; i >=1 ; --i){ // we start at (howManyStairs-1) because we are using 1-indexing
                                                // this is because the (howManyStairs)th index is the final index
                                                // we are building our prefix array of damages from right to left
        cumulativeDamageRightToLeft[i] = cumulativeDamageRightToLeft[i+1] + std::max(0LL,stairs[i+1] - stairs[i]);
    }


    
    // answer our quests
    while(howManyQuests--){
        
        // read in our quest from the input stream
        int startOfQuestIdx, endOfQuestIdx;
        std::cin >> startOfQuestIdx >> endOfQuestIdx;

        // answer our quest via prefix array
        if(startOfQuestIdx < endOfQuestIdx){ // we are travelling from left to right
            std::cout << cumulativeDamageLeftToRight[endOfQuestIdx] - cumulativeDamageLeftToRight[startOfQuestIdx] << '\n';
        }
        else{ // we are travelling from right to left

            std::cout << cumulativeDamageRightToLeft[endOfQuestIdx] - cumulativeDamageRightToLeft[startOfQuestIdx] << '\n';

        }

    }

    return 0;

} // this is the end of main

