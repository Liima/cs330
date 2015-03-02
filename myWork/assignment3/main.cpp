#include "FileReader.h"
#include "StringFunctions.h"

#include <iostream>
#include <vector>
#include <string>

int main(int argc, char * argv[])
{
	std::vector<int> letters(26, 0);
	try
	{
		FileReader in("wordlist.txt");
		while (!in.endOfFile())
		{
			std::string line = in.readLine();
			if (line.size() > 0)
			{
				char temp = StringFunctions::tolower(line).at(0);
				int letterNum =  temp - 97;
				letters[letterNum]++;
			}
		}
		
		while(true)
		{
			char inp(' ');
			std::cout << "Enter a capital letter from A-Z or q to quit:";
			(std::cin >> inp).ignore(1000, '\n');
			int ascii = inp;
			if(ascii == 113){
				std::cout << "Bye!" << std::endl;
				return 0;
			} else if(ascii <= 90 && ascii >= 65){
				int index(ascii-65);
				std::cout << "There are " << letters[index] << " words in the file that start with " << inp << "." << std::endl;
			}
			else{
				std::cout << "Bad input, try again." << std::endl;
			}
		}
	}
	catch (std::string err)
	{
		std::cout << "Error: " << err << std::endl;
	}
}