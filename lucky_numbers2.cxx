/*
 * lucky_numbers2.cxx
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

int main() {
    long long n;
    cin >> n; // Read the input number (could be large, so long long or string is safer)

    // 1. Count how many digits of n are '4' or '7'
    long long luckyDigitsCounter = 0;
    long long temp = n;  // use temp to loop through the digits

    // Edge case: if n = 0, the code below won't count any digit, but let's handle it normally:
    if(temp == 0) {
        // If the input itself is 0, then obviously it has no lucky digits
        luckyDigitsCounter = 0;
    } else {
        while(temp > 0) {
            int digit = temp % 10;
            if(digit == 7 || digit == 4) {
                luckyDigitsCounter++;
            }
            temp /= 10;
        }
    }

    // 2. Check if luckyDigitsCounter is a lucky number
    //    i.e., all digits of luckyDigitsCounter are 4 or 7
    if(luckyDigitsCounter == 0) {
        // Zero is not considered a lucky number
        cout << "NO" << endl;
        return 0;
    }

    bool isLucky = true;
    while(luckyDigitsCounter > 0) {
        int lastDigit = luckyDigitsCounter % 10;
        if(lastDigit != 4 && lastDigit != 7) {
            isLucky = false;
            break; // can exit as soon as we find a non-lucky digit
        }
        luckyDigitsCounter /= 10;
    }

    // 3. Print "YES" if isLucky, otherwise "NO"
    if(isLucky) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

	

