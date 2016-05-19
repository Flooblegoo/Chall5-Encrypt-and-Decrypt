// Challenge 5 - Basic XOR Encryption / Decryption
// I will be trying out and learning a basic XOR encrypt/decrypt method here

#include "stdafx.h"
#include <iostream>
#include <string>

std::string encryptDecrypt(std::string toEncrypt)
{
	char key; 

	// Request key to be used in Encryption/Decryption
	std::cout << "\nPlease enter the key you wish to use: ";
	std::cin >> key;

	std::string output = toEncrypt;

	for (int i = 0; i < toEncrypt.size(); i++)
		output[i] = toEncrypt[i] ^ key;

	return output;
}

int main()
{
	int menu_selection;
	std::string decrypted;
	std::string encrypted;
	std::string user_entry_encrypt;
	std::string user_entry_decrypt;

	// Check if user wants to Encrypt or Decrypt a string using the preset key/s
	std::cout << "1. Encrypt" << std::endl;
	std::cout << "2. Decrypt" << std::endl;
	std::cout << "3. Exit" << std::endl;
	std::cout << "\nSelection: ";
	std::cin >> menu_selection;

	switch (menu_selection)
	{
	case 1:
		std::cin.clear(); // Clear input stream 
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		// Request string from the user that they wish to have encrypted
		std::cout << "\nPlease enter the string to encrypt: ";
		std::getline(std::cin, user_entry_encrypt);
		// Perform the encryption and supply result
		encrypted = encryptDecrypt(user_entry_encrypt);
		std::cout << user_entry_encrypt << " encrypted with the preset key is " << encrypted << "\n\n";

		std::cin.clear(); // Clear input stream and restart at menu
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
		main();
		break;
	case 2:
		std::cin.clear(); // Clear input stream 
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		// Request string from the user that they wish to have decrypted
		std::cout << "\nPlease enter the string to decrypt: ";
		std::getline(std::cin, user_entry_decrypt);
		// Perform the encryption and supply result
		decrypted = encryptDecrypt(user_entry_decrypt);
		std::cout << user_entry_decrypt << " decrypted with the preset key is " << decrypted << "\n\n";

		std::cin.clear(); // Clear input stream and restart at menu
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
		main();
		break;
	case 3:
		break;
	default:
		std::cout << "\nPlease enter 1, 2 or 3 for your selection\n" << std::endl;

		std::cin.clear(); // Clear input stream and restart at menu
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
		main();
		break;
	}

	return 0;
}

