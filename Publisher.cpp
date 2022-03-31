#include "Publisher.h"
using namespace std;

Publisher::Publisher(string filename)
{
    // open a file to perform read operation using file object
    fstream newfile;
    newfile.open(filename, ios::in);
    if (newfile.is_open())
    {
        string tp{""};
        while (getline(newfile, tp))
        {
            cout << tp << "\n";
        }
        newfile.close();
    }
}

Publisher::~Publisher()
{
}