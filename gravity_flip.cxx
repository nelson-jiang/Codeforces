/*
 * gravity_flip.cxx
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
#include <algorithm> // to use sort function
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
	// KEY: we are given an input and we want SORT the input from left to right
	
	
	int n; // count of columns
	cin >> n;
	vector<int> heights; // vector to hold the heights
	
	while(n--){
		int height; 
		cin >> height; // read in the heights of each column
		
		heights.push_back(height);
	}
	
	sort(heights.begin(), heights.end()); // sort the vector of heights according to KEY
	
	
	for(int i = 0; i < heights.size(); ++i){
		cout << heights[i] << " "; // print spaces between heights
	}
	
	
	return 0;
}

