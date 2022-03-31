#include "Publisher.h"

Publisher::Publisher(string filename) : newfile()
{
    // open a file to perform read operation using file object
    this->newfile.open(filename, ios::in);
    if (!this->newfile.is_open())
    {
        cout << "Warning: could not open content.\n";
    }
}

string Publisher::publish_content()
{
    // return char array of size 128
    string tp{""};
    if (getline(this->newfile, tp))
    {
        return tp;
    }
    return NULL;
}

Publisher::~Publisher()
{
    this->newfile.close();
}