#include <iostream>
#include <string>
#include <stdlib.h>
#include <direct.h>
#define GetCurrentDir _getcwd

int main() {
	char cCurrentPath[FILENAME_MAX];
	if (!GetCurrentDir(cCurrentPath, sizeof(cCurrentPath)))
	{
		return errno;
	}
	cCurrentPath[sizeof(cCurrentPath) - 1] = '\0'; /* not really required */

	std::cout << "file extention to zap (no period): ";
	std::string extType;
	std::cin >> extType;

	std::string command = "del /Q ";
	std::string path = cCurrentPath + std::string("\\*.") + extType;
	system(command.append(path).c_str());
}

