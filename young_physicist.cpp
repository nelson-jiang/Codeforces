#include <bits/stdc++.h>



// steps

   // KEY: the COMPONENT SUM of all of the force vectors must be 0 for the object to be in equilibrium

   // just track component sums as we process each input force vector


int main(){ // start of main()
    
    int n; // how many force vectors
    std::cin >> n;
    

    // track component sums
    int sum_of_forces_x = 0;
    int sum_of_forces_y = 0;
    int sum_of_forces_z = 0;

    for(int i = 0; i < n; ++i){ // process each force vector
        
        int x_i, y_i, z_i;
        std::cin >> x_i >> y_i >> z_i;

        sum_of_forces_x += x_i;
        sum_of_forces_y += y_i;
        sum_of_forces_z += z_i;

    } // end of processing each force vector
    
    if(sum_of_forces_x == 0 && sum_of_forces_y == 0 && sum_of_forces_z == 0){std::cout << "YES" << std::endl;} // all the vectors cancel out ===> equilibrium
    else{std::cout << "NO" << std::endl;}

   
    return 0;

} // end of main()


