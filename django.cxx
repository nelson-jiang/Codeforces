/*
 * django.cxx
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
#include <utility>
#include <cstring> // for memset
using namespace std;


// GLOBAL variables
int H, W, A, B;
long long ans = 0;
int usedA = 0;
int usedB = 0;
static const int MAXCELL = 16;
bool used[MAXCELL][MAXCELL]; // this is our maximum grid



pair<int,int> nextCell(int row, int col){ // helper function
	
	++col;
	if(col>=W){ // once we go out of bounds we move onto the next row
		col = 0; // reset the row
		++row; // increment the row
	}
	return make_pair(row,col); // put the row and column in a pair
} // end of helper

void dfs(int row, int col, int usedA, int usedB){ // a dfs function tries to fill the board from (row,col) onward
														 // this is our predominant solver function
														 
	
	
	if(row == H){ // if we've gone past the last row then that means all the cells are filled or accounted for
		if(usedA == A){ // check if we've used exactly A domino mats
			            // this by extension also checks usedB == B <=== since 2A+B = HW
			ans++;      // if we have used exactly A domino mats --> add to our count
						
			return;
		}
	} // base case
	
	
	if(used[row][col]){ // if this cell is already filled then skip it
		
		auto [nr, nc] = nextCell(row,col);
		dfs(nr,nc,usedA,usedB);
		return;
	}
	
	// otherwise, meaning this cell is not filled, we have two main options
	// 1. place a square mat if we still have any
	if(usedB < B){
		used[row][col] = true; // place the mat down
		auto [nr, nc] = nextCell(row, col);
		dfs(nr, nc, usedA, usedB+1); // recursive call
		used[row][col] = false; // back tracking (ie reset)
							
	}
	
	// 2. place a domino mat if we still any left
		  // try both horizontally or vertically
	
	if(usedA < A){
		
		// try horizontal placement
		if(col + 1 < W && !used[row][col+1]){ // the right cell is in bounds and empty
			used[row][col] = true;
			used[row][col+1] = true; // place the domino mat
			auto [nr,nc] = nextCell(row,col);
			dfs(nr, nc, usedA + 1, usedB); // recursive call
			used[row][col] = false; // back tracking (ie reset)
			used[row][col+1] = false;
		}
		
		// try vertical placement
		if(row + 1 < H && !used[row+1][col]){
			
			used[row][col] = true;
			used[row+1][col] = true;
			auto [nr, nc] = nextCell(row,col);
			dfs(nr,nc,usedA+1, usedB); // recursive call
			used[row][col] = false; // back tracking (ie reset)
			used[row+1][col] = false;
		}
	}
			
				


} // end of predominant solver function

int main(int argc, char **argv){ // main function
								// where all of the action occurs
								
	
	
	cin >> H >> W >> A >> B; // read in inputs

	
	memset(used, false, sizeof(used)); // initialize the board as all empty
	
	// run a dfs from the top left cell (0,0)
	// used 0 dominos and used 0 squares
	dfs(0,0,0,0);
	
	cout << ans; // ans gets updated as the dfs runs in the end it should be the updated answer
	
	return 0;
	
	
	
	
}// end of main

