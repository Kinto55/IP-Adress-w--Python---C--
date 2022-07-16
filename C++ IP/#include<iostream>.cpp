#include<iostream>
#include <bits/stdc++.h> 
using namespace std; 
 
/**
 * For each character in the string, if it is a dot, append "[.]" to the defanged IP string, otherwise
 * append the character to the defanged IP string
 * 
 * @param str The IP address to be defanged.
 * 
 * @return a string.
 */
string DefangIP(string str) 
{ 
	string defangIP = ""; 
	 
	for (char c : str) 
		(c == '.') ? defangIP += "[.]" : 
					defangIP += c; 
	return defangIP; 
} 

/**
 * 1. We iterate through the string and check if the current character is a dot. 
 * 2. If it is, we append "[.]" to the result string. 
 * 3. If it isn't, we append the current character to the result string. 
 * 4. We return the result string.
 * 
 * @return the defanged IP address.
 */
int main() 
{ 
	string str;
    cin>>str;
	cout <<DefangIP(str); 
	return 0; 
} 