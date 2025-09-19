#include <bits/stdc++.h>




// steps

   // find how many tiles are needed for the length
       // this is the ceiling of length / tile size

   // find how many tiles are needed for the width
       // this is the ceiling of width / tile size

   // multiply the above findings to get the total number of tiles needed

   // PITFALL: doing (n*m)/(a*a) will not work because it will not account for fractional tiles



int main(){ // start of main()
    

    long long n, m, a; // a is the size of the tile
    std::cin >> n >> m >> a;

    
    long long how_many_tiles_needed_for_length = (n + a - 1) / a; // this is ceil(n/a)
                                                                     // reminder that / already does floor division
    long long how_many_tiles_needed_for_width = (m + a - 1) / a; // this is ceil(m/a)

    long long total_number_of_tiles_needed = how_many_tiles_needed_for_length * how_many_tiles_needed_for_width;

    std::cout << total_number_of_tiles_needed << std::endl;


    return 0;

} // end of main()








