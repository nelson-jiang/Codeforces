#include <bits/stdc++.h>


int main() { // start of main()

    int n; // how many rooms there are
    std::cin >> n;
    std::vector<std::string> inhabitants(n);

    for(int i = 0; i < n; ++i){ std::cin >> inhabitants[i];} // read in the number of inhabitants in each room

    int x; // which package the room is going to
    std::string y; // the name on the package
    std::cin >> x >> y;

    if(inhabitants[x-1] == y){std::cout << "Yes" << std::endl;} // if the name on the package is the same as the name of the person in the room, then the package is delivered correctly
    else{std::cout << "No" << std::endl;}

    return 0;


} // end of main()


