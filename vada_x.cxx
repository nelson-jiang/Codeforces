/*
 * vada_x.cxx
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
#include <unordered_map>
#include <utility>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	int n;
	unordered_map< string, pair<int,int> > band_songCountFanCount;
	cin >> n;
	while(n--){ // building our hashmap
				// mapping band name TO {the number of song they put out and how many fans they have}
		
		string bandName;
		int songCount;
		
		cin >> bandName >> songCount;
		band_songCountFanCount[bandName] = {songCount,0}; // putting a pair of {song count, zero fans} into our hash map associated with whatever bandname
	
	}
	
	
	
	int m;
	cin >> m;
	while(m--){ // updating our hashmap based on what stormtroopers like
				
		string favBand;
		cin >> favBand;
		
		if(band_songCountFanCount.find(favBand) != band_songCountFanCount.end() ){ band_songCountFanCount[favBand].second++;} // stormtrooper likes this a song by this band --> increment the fan count
		
	}
	
	
	
	
	string canListentoThisBand;
	for(auto pair : band_songCountFanCount){ // loop through the map to see what options vader has left to like
									 // pair = (New Jean, {3, 3} ) for example
		
		if(pair.second.first > pair.second.second){
			canListentoThisBand = pair.first;
			break;
		}
		
	}
	
	if(canListentoThisBand == ""){cout << "NO KPOP FOR VADER";}
	else{cout << canListentoThisBand;}
	
	
	
	
	

	return 0;
} // end of of main

