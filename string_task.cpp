#include <bits/stdc++.h>


int main(){ // start of main()

    std::string s;
    std::cin >> s;

    const std::string vowels_str = "aeiouy";
    std::string ans; ans.reserve(2 * s.size()); // reserve twice the size of the input string (account for the . and the original characters since worst case is all the characters are consonants)

    for(char each_char : s){ // walk through each character in the input string
        
        char each_char_lower = std::tolower(each_char); // conver the char to lowercase

        if(vowels_str.find(each_char_lower) != std::string::npos){continue;} // if the char is a vowel (ie it's found in the vowel_str), skip it ===> which means it will not be included to the ans string



        // reaching here means the char is not a vowel (aka the char is a consonant)

        ans.push_back('.');
        ans.push_back(each_char_lower);

    } // end of processing the input string


    std::cout << ans << std::endl;


   return 0;

} // end of main()

