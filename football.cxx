/*
 * football.cxx
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
	string s;
	cin >> s; // read in input
	
	if(s.size() == 1 || s.size() == 0){
		cout << "NO";
		return 0;
	}
	
	
	int dangerCounter = 1; // aka consecutive counter
	
	for(int i = 1; i < s.size(); ++i){ // traverse the string
									   // start at 1
		if(s[i] == s[i-1]){dangerCounter++;} // as long as curr is same as prior then keep incrementing dangerCounter
		else{dangerCounter = 1;} // reset dangerCounter when we hit a different number
		
		if(dangerCounter >= 7){ // we have a dangerous situation
								// check each time we accumulate a team member next to each other
			cout << "YES";
			return 0;
		}

	} // end of for loop
	
	// make it out here means the consecutive count never made it above 7
	cout << "NO";
	return 0;
}

