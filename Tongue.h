#ifndef TONGUE_H
#define TONGUE_H

#include <string>
using std::string;

/*

	Author: Noah Castetter
	Created 5-12-2020

	A class which can generate a Ceasar
	Cypher key of length 128 (for every
	ascii character), encrypt a given 
	string with a given CC key, and
	decrypt a given string with a
	given CC key.

*/

class Tongue{

	private:

	static const int NUM_ASCII_CHAR = 128;

	public:
	
	// Generate CC key of length 128.
	static int genKey();

	// Encrypt given string message.
	static string encrypt(string message, int key);

	// Decrypt a given string message
	static string decrypt(string message, int key);


};

#endif
