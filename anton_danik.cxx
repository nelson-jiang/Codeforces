/*
 * anton_danik.cxx
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
	
	// read in inputs
	int n;
	string games;
	cin >> n >> games;	
	
	// loop through the games to count who has won more
	int aCounter = 0; // init counters
	int dCounter = 0;
	for(int i = 0; i < n ; ++i){
		if(games[i] == 'A'){aCounter++;}
		else{dCounter++;}
	}
	
	
	// compare wins and print based off of comparison
	if(aCounter > dCounter){cout << "Anton";}
	else if(dCounter > aCounter){cout << "Danik";}
	else{cout << "Friendship";} // same amount of wins for each player
		
		
	return 0;
}

