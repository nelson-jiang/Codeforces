/*
 * lucky_numbers.cxx
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
	
	string nums;
	cin >> nums; // read in input as string
	
	// counts how many lucky digits there are
	int luckyDigitsCounter = 0;
	for(int i = 0; i < nums.size(); ++i){
		if(nums[i] == '4' || nums[i] == '7'){luckyDigitsCounter++;} // char vs char comparison
	}
	
	// checking the digits of the Counter
	string countStr = to_string(luckyDigitsCounter); // convert num -> string so we can check each digit easier
	bool isLucky = true; // init the flag to true
	for(int i = 0; i < countStr.size(); ++i){
		if(countStr[i] != '4' && countStr[i] != '7'){ // char vs char comparison
			isLucky = false;
			break;
			}
		
	}
	
	if(isLucky){cout << "YES";}
	else{cout << "NO";}
	
	return 0;
} // end of main()

