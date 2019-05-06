# delete-by-extension
Deletes all files in the program's directory with specified file extension. Meant for windows developers but modable. Some tools required.

Exmaple: I have too many files spamming my downloads folder with .tmp at the end! Place the .exe file in the same directory, run, and enter "tmp" when prompted (no quotes).

## Possible Issues
### Help! I'm running linux!
Where the source code states, 
```#include <direct.h>
    #define GetCurrentDir _getcwd
```
Replace with:
```
#include <unistd.h>
    #define GetCurrentDir getcwd
```
Thanks [computinglife](https://stackoverflow.com/users/17224/computinglife)!

### I'm missing some weird dll?
Many windows apps or features will have this already installed on your PC, but if it doesn't, download the [Visual C++ Redistributable for Visual Studio 2015](https://www.microsoft.com/en-us/download/details.aspx?id=48145)

## Questions? Bugs?
DM me!
