/*******************************************************************
Design library for printing colors on the black screen commands
using language C++ This library is open source
Developed by Eng. Muhammad Ali Youssef on 06/18/2001
Tel : +20 01066568205  |   Email : ensert.egypt@hotmail.com
*******************************************************************/
#include <iostream>
using namespace std;

class FrontColor
{
    public:
    string Null() { return ""; }
    string Black() { return "30m"; }
    string Red() { return "31m"; }
    string Green() { return "32m"; }
    string Yellow() { return "33m"; }
    string Blue() { return "34m"; }
    string Magenta() { return "35m"; }
    string Cyan() { return "36m"; }
    string White() { return "37m"; }
};

class Background 
{
    public:
    string Null() { return ""; }
    string Black() { return "40;"; }
    string Red() { return "41;"; }
    string Green() { return "42;"; }
    string Yellow() { return "43;"; }
    string Blue() { return "44;"; }
    string Magenta() { return "45;"; }
    string Cyan() { return "46;"; }
    string White() { return "47;"; }
};

class Bold 
{
    public:
    string True() { return "1;"; }
    string False() { return ""; }
};

class Color
{
    public:
    FrontColor FG;
    Background BG;
    Bold B;
    string TextColor(string Text,string FrontColor,string Background,string Bold)
    {
        return "\x1B[" + Bold + Background + 
        FrontColor + Text + "\033[0m";
    }
};
