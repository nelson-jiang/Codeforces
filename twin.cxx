/*
 * twin.cxx
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
#include <algorithm> // for sort
#include <numeric> // for accumulate
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
	int n; // count of coins
	cin >> n;
	
	vector<int> allCoins;
	
	while(n--){ // loop through the count of coins that we have
		int money;
		cin >> money;
		
		allCoins.push_back(money); // build our vector of all coins
		
	}
	
	int totalMoney = accumulate(allCoins.begin(), allCoins.end(),0); // find the total amount of money
	
	int myMoney = 0;
	int myCoins = 0;
	
	sort(allCoins.begin(),allCoins.end()); // sort so we can grab the LARGEST COINS AT THE END <--- KEY
	
	for(int i = allCoins.size()-1; i >= 0 ; --i){ // KEY: loop backwards
		
		myMoney += allCoins[i]; // track how much money you've grabbed
		myCoins++; // track how many coins you've grabbed
		
		if(myMoney > totalMoney/2){ // you've grabbed your share of money
			cout << myCoins; // print how many coins you've grabbed
			return 0;
		}
		
		
	}
	
	return 0;
} // end of main

