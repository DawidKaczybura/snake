#include "Console.hpp"

Console::Console(){
    consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    hideCursor();
    clearScreen();
}

void Console::hideCursor()
{
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}

void Console::clearScreen(){
    system("CLS");
}

void Console::resetCursorPosition(){
    cursorPosition.X = 0;
    cursorPosition.Y = 0;
    SetConsoleCursorPosition(consoleHandle,cursorPosition);
}