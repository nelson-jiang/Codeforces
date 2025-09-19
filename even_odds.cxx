/*
 * even_odds.cxx
 * 
 * Copyright 2025 Nelson <nelson@MacBookAir.attlocal.net>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv)
{
	long long n; // our numbers go from 1...n
	long long k; // the position we want (after reordering)
	
	cin >> n >> k; // read in input
	
	long long oddCount = (n+1)/2; // KEY: find out how many odds there are (should be roughly half)
	
	if(k <= oddCount){ // entering here means k is within the odds ---- k is within the first half of the numbers
		cout << (2*k-1); // if k is within the odds then that means we want the kth odd number
						    // e.g. if k = 2 --> we want the 2nd odd number so we apply the "odd number formula"
	}
	else{ // enter here means k is within the odds --- k is within the latter half of the numbers
		
		cout << 2 * (k - oddCount); // if k is within the evens then that means we want the (k-number of odds prior to it)-th even number
									   // e.g. n = 6 ---> 1 3 5 2 4 6
									   // k = 5 ---> our target is 4
									   // number of odds prior to it is 3
											// so we want the (5-3)th == 2nd even number
											// SHIFT idea
									   // apply the "even numbers formula: ----> 2*(position of even number we want)
   }
	
	

	
	
	return 0;
}

