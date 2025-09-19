/*
 * tram.cxx
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
	int n;
	cin >> n; // read in input
			  // n represents the total count of stops
	
	int maxPassengers = 0; // track the most amount of passengers that have ever stepped in the train
	
	int currPassengers = 0;
	
	while(n--){ // loop through all of the stops --- n
		
		int a, b;
		cin >> a >> b; // a is count(exits)
					   // b is count(enters)
		
		currPassengers += b - a; // running sum of passengers in the train
		
		if(currPassengers > maxPassengers){maxPassengers = currPassengers;} // update when appropriate
		
	}
		
	cout << maxPassengers;
	
	return 0;
}

