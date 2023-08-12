#include <iostream>
#include "color.h"
using namespace std;
Color cr;

int main()
{
    cout << cr.TextColor("Change the font color to red using [cr.FG.Red()]",
    cr.FG.Red(),cr.BG.Null(),cr.B.False()) << "\n";

    cout << cr.TextColor("Change the background color to red using [cr.BG.Red()]",
    cr.FG.White(),cr.BG.Red(),cr.B.False()) << "\n";

    cout << cr.TextColor("Change the background color to red using [cr.B.True()]",
    cr.FG.White(),cr.BG.Null(),cr.B.True()) << "\n";

    return 0;
}
