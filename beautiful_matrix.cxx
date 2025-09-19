/*
 * beautiful_matrix.cxx
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
	int onesRow, onesCol;
	int matrixEntry;
	
	for(int row = 0; row<5;++row){
		
		for(int col=0; col<5;++col){
			cin>>matrixEntry;
			if(matrixEntry==1){ // located the One
				onesRow = row;
				onesCol = col;
			}
		}
	}
	
	int moves = abs(2-onesRow) + abs(2-onesCol);
	cout<<moves;
	
	
	
	
	
	
	return 0;
}

