#include <iostream>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    for (int index=0; index < argc; index++)
    {
        cout << argv[index] << endl;
    }
    return 0;
}
