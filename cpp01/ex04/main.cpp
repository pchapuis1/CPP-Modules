#include <iostream>
#include <fstream>

void replace(std::string& line, std::ofstream& outFile, std::string& s1, std::string& s2) {
	unsigned long	npos;
	std::string *linePTR;

	if (s1 == "")
	{
		outFile << line;
		return ;
	}
	linePTR = &line;
	npos = line.find(s1);
	while (npos != std::string::npos){
		line.erase(npos, s1.size());
		line.insert(npos, s2);
		npos = line.find(s1, npos + s2.size());
	}
	outFile << *linePTR;
}

int main(int argc, char** argv) {
    std::string file;
    std::string fileOut;
    std::string line;
    std::string s1;
    std::string s2;
    std::ifstream inputFile;
    std::ofstream outFile;

    if (argc != 4)
        return std::cerr << "Usage: ./Replace [file.txt] [s1] [s2]" << std::endl, 1;
    file = argv[1];
    inputFile.open(file.c_str());
    if (!inputFile.is_open()) {
        std::cerr << "Unable to open the file." << std::endl;
        return 1;
    }
    fileOut = file + ".replace";
    outFile.open(fileOut.c_str());
    if (!outFile.is_open()) {
        std::cerr << "Unable to create or open the output file." << std::endl;
        inputFile.close();
        return 1;
    }
    s1 = argv[2];
    s2 = argv[3];
    while (getline(inputFile, line, '\0')) {
        replace(line, outFile, s1, s2);
    }
    inputFile.close();
    outFile.close();
    return 0;
}