#include <bits/stdc++.h>


int main(){ // start of main()

   
   int t;
   std::cin >> t;

   while(t--){ // start of looping through the test cases

    int n, m;
    std::string a, b, c;
    std::cin >> n >> a >> m >> b >> c;
    
    std::string vlads_letters, dimas_letters;
    for(int i = 0; i < m; ++i){ // walk through string c and add the letters of string b to the corresponding person's string
        if(c[i] == 'V'){vlads_letters += b[i];}
        else{dimas_letters += b[i];}

    }


   reverse(vlads_letters.begin(), vlads_letters.end()); // reverse Vlad's letters 
                                                        // KEY to the problem because vlad is adding the letters in `backwards` order
    



   std::cout << vlads_letters + a + dimas_letters << std::endl;  // print the result 


   } // end of looping through the test cases



   return 0;

} // end of main()

