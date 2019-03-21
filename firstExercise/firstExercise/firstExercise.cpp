// firstExercise.cpp : by Angeline Siv.

#include <iostream>
#include <fstream>

typedef std::fstream fs;

FILE readFileData(FILE inputFile);

int main(FILE input, FILE output)
{
	
}

FILE readFileData(FILE inputFile)
{
	fs filestream;
	filestream.open("inputFile");
	
	//Get the first character, which is the number of dataset in the input file
	int numberOfDatasets = filestream.get();

	//Loop through the input file's max characters and assign it into an array
	for (int i = 1; i < filestream.gcount; i++)
	{

	}

	filestream.close();

	return inputFile;
}

