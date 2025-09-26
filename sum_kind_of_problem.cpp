#include <bits/stdc++.h>



int main(){ // start of main()

    // STEPS
    

    int t, k, n;
    std::cin >> t;

    while(t--){ // start of looping through the test cases
        
        std::cin >> k >> n;
        long long s1 = 0;
        long long s2 = 0;
        long long s3 = 0;

        for(int i = 1; i <= n; ++i){
            s1 += i;
            s2 += 2*i-1;
            s3 += 2*i;
        }

        std::cout << k << " " << s1 << " " << s2 << " " << s3 << std::endl;

    } // end of looping through the test cases

    return 0;

} // end of main()


