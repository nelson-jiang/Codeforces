/*
 * two_hundredth.cxx
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
using namespace std;

int main(int argc, char **argv)
{
	
	long long N, K; // make sure N is a long long and not an int
	
	cin >> N >> K;

	while(K--){ // we do the operation K times so loop through K times
		
		if(N%200 == 0){ // N is divisible by 200
			N /= 200;
		}
		else{ // N is not divisible by 200
			
			string Nstr = to_string(N);  // turn N into a string
			
			Nstr += "200";       // concatenate '200' <-- string
			
			N = stoll(Nstr);// turn N back into an int
		}
	
    } // end of while loop
    
    cout << N;
		
	
	
	
	return 0;
}

