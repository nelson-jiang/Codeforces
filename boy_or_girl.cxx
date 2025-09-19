/*
 * boy_or_girl.cxx
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
#include <unordered_set>
using namespace std;

int main(int argc, char **argv)
{
	
	string username;
	cin >> username;
	
	int counter = 0; // counts number of distinct chars
	unordered_set<char> seenBefore;
	
	
	for(int i = 0; i < username.length(); ++i){
		if(!seenBefore.contains(username[i])){counter++;}
		seenBefore.insert(username[i]);
	}
	
	// find parity of counter
	if(counter % 2 == 0){cout << "CHAT WITH HER!";}
	else{cout << "IGNORE HIM!";}
	
	
	
	return 0;
}

