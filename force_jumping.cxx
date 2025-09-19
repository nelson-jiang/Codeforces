/*
 * force_jumping.cxx
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
	int n; // the number of test cases aka number of bridges
	cin >> n;
	
	int currHeight = 0;
	
	int maxStrengthNeeded = 0;
	
	while(n--){ // loop through all of the bridges aka test cases
		int h;
		cin >> h; // read in the height of the bridge
		
		int jumpStrength = h - currHeight; // this is the strength needed 
		
		if(jumpStrength > maxStrengthNeeded){maxStrengthNeeded = jumpStrength;} // update when appropriate
		
		currHeight = h; // update h because you've jumped to the next bridge
		
	}
	
	cout << maxStrengthNeeded;
	
	
	
	return 0;
}

