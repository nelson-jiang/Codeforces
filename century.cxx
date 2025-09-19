/*
 * century.cxx
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
#include <cmath> // to use the ceiling function
using namespace std;

int main(int argc, char **argv)
{
	int N;
	cin >> N; // read in input
	
	double year = static_cast<double> (N)/100; // cast N into a double so that N/100 will be a double
											   // and then we can use the ceiling functions on the double
	
	cout << ceil(year); // KEY to the problem is the ceiling function
	
	return 0;
}

