# delete-by-extension
Deletes all files in the program's directory with specified file extension. Meant for windows developers but modable. Some tools required.

Example: I have too many files spamming my downloads folder with .tmp at the end! Place the .exe file in the same directory, run, and enter "tmp" when prompted (no quotes).

![It's a console program](https://i.imgur.com/hKEf1lB.png "Example in action")

Make sure you tap enter/return to confirm.

## Possible Issues
### Help! I'm running linux!
Where the source code states, 
```
#include <direct.h>
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

### Questions? Bugs?
DM me!

[l]: https://i.imgur.com/YfRD1VL.png "left symbol"
[r]: https://i.imgur.com/cDEB9Jz.png "right symbol"
