#include <bits/stdc++.h>


long long reverse(long long n){ // start of reverse(.) helper function defn.
    
    long long r = 0; // initialize the reversed result to 0
    
    // process all of the digits of the input number n from right to left
    while(n > 0){
        r = (r * 10) + (n % 10); // append the rightmost digit of n to the result
                                  // the mod represents including the digit while the *10 represents shifting the already existing digits to the left one place

        n /= 10; // drop the rightmost digit of n
    }

    return r; // return the reversed result

} // end of reverse helper function defn.




int main(){ // start of main()
               // where all of the action occurs
   

  int a1, a2;
  std::cin >> a1 >> a2;
  

  long long fibonacci_container[11]; // create a container for the fibonacci sequence that has a capacity of 11
  
  // fill in the first two values of the fibonacci sequence
  fibonacci_container[1] = a1;
  fibonacci_container[2] = a2;

  // do the fibonacci sequence 
  for(int i = 3; i <= 10; ++i){
    long long s = fibonacci_container[i-1] + fibonacci_container[i-2];
    fibonacci_container[i] = reverse(s); // reverse the sum of the two previous values then store it in the container
  }

  std::cout << fibonacci_container[10] << std::endl; // printing a10

  return 0;

} // end of main()


