/*
 * word_case.cxx
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
#include <cctype>
using namespace std;

int main(int argc, char **argv)
{
	string word;
	cin >> word;
	
	int lowerCounter = 0;
	int upperCounter = 0;
	
	for(int i = 0; i < word.length(); ++i){ // counting loop
		if(word[i] == tolower(word[i])){lowerCounter++;}
		else{upperCounter++;}
	}
	
	
	for(int i = 0; i < word.length(); ++i){ // modifying loop
		if(lowerCounter >= upperCounter){word[i] = tolower(word[i]);}
		else{word[i] = toupper(word[i]);}
	}
	
	cout << word;
	
	return 0;
}

