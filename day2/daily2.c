/*
Author: Sowndaryan Jayaprakash
Date: 09/09/23


Output: I used MinGW and GCC compiler to build this but I followed your assignment instructions exactly as is. I saw the screen load the program and run some
build commands in the terminal and the following output written below was produced.

Terminal Output: PS C:\Users\janan\OneDrive\Desktop\Computing I\day2>  & 'c:\Users\janan\.vscode\extensions\ms-vscode.cpptools-1.17.5-win32-x64\debugAdapters\bin\WindowsDebugLauncher.exe' '--stdin=Microsoft-MIEngine-In-j5bujg2g.unw' '--stdout=Microsoft-MIEngine-Out-a34tabkj.ox4' '--stderr=Microsoft-MIEngine-Error-m5lneozu.2eu' '--pid=Microsoft-MIEngine-Pid-jfowhsos.i2x' '--dbgExe=C:\MinGW\bin\gdb.exe' '--interpreter=mi'

Output: cd "c:\Users\janan\OneDrive\Desktop\Computing I\day2\" && gcc daily2.c -o daily2 && "c:\Users\janan\OneDrive\Desktop\Computing I\day2\"daily2
This program has the executable name: c:\Users\janan\OneDrive\Desktop\Computing I\day2"daily2
That is all 

The powershell terminal output may have just been the build settings but I decided to add both terminal outputs in here anyway

*/



#include <stdio.h> //standard input output header file

int main(int argc, char * argv[]){

    printf("This program has the executable name: %s\n", argv[0]);
    printf("That is all \n");
    return 0;

}


