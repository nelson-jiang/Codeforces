/*
 * helpful_maths.cxx
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
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char **argv)
{
	string s;
	cin >> s;
	
	vector<int> nums;
	
	for(size_t i = 0; i < s.size(); i+=2){
		
		int digit = s[i] - '0';
		nums.push_back(digit);
	}
	sort(nums.begin(),nums.end());
	
	for(size_t j = 0 ; j < nums.size(); ++j){
		
		if(j > 0){cout<<'+';}
		cout << nums[j];
	}
	

	
	return 0;
}

