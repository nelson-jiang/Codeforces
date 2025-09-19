/*
 * ring_favorite_number.cxx
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
#include <vector>
using namespace std;

int main() {
   

    int N;
    cin >> N; // read in out input
    vector<long long> sequences(N); // init a vector called sequence that can hold N number of items
    for(int i = 0; i< N; ++i){ cin >> sequences[i];} // read the given inputs into our sequence array
    
    vector<long long> remaindersFreq(200,0); // init a vector that act as a map
										   // indices (0 to 199) will act as remainder
										   // values themselves will act as frequencies
												// original frequencies (aka values) will all be 0
	
	for(int i = 0 ; i < N ; ++i){ // filling our remainderFreq "map"
		
		int remainder = sequences[i] % 200;
		remaindersFreq[remainder]++; // index <-> remainder
									 // value <-> frequency
	}
	
	
	long long ans = 0; // counts how many pairs of numbers we have that when subtracted will get us a multiple of 200
	for(int i = 0 ; i < 200; ++i){ // collecting our answer
		
		long long frequency = remaindersFreq[i];
		ans += frequency * (frequency-1) / 2; // this is the formula for frequency choose 2
		
    }
    
    cout << ans;
    
    

    
}


