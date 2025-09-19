/*
 * a_team.cxx
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
	
	int n; // count of test cases
	cin >> n; // read in count of test cases
	
	int doCounter = 0;
	
	while(n--){ // loop across the test cases
		
		int p1;
		int p2;
		int p3;
		
		cin >> p1 >> p2 >> p3;
		
		int doOrNot = p1 + p2 + p3;
		
		if(doOrNot >= 2){doCounter++;}
			
	}
	cout << doCounter;
	
	
	
	
	return 0;
}

