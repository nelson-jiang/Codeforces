/*
 * doubler.cxx
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


int digits_counter(long long num){ // helper function
	
	int digits = 0;
	
	while(num > 0){
		num /= 10;
		digits++;
	}
	return digits;
} // end of digit_counter


int main(int argc, char **argv)
{ // main
  // where all of the action happens
  
  
	long long N;
	cin >> N; // read in our input
	
	long long counter = 0;
	
	vector<long long> tensPower = {10,100,1000,10000,100000,1000000};
	
	for(int i = 1; i <= 999999 ; ++i){ // loop our KEY range
		
		int countDigits = digits_counter(i); // call helper
		long long doubled = i * tensPower[countDigits-1] + i; // KEY doubler
		
		if(doubled <= N){++counter;} // if that number is less than our input then we want it
		else{break;}
		
	
	}
	
	cout << counter;
		

	
	return 0;
} // end of main

