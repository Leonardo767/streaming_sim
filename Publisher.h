#ifndef PUBLISHER_H
#define PUBLISHER_H

#pragma once

#include <fstream>
#include <string>
#include <iostream>
using namespace std;

class Publisher
{
public:
    Publisher(string filename);
    ~Publisher();
    string publish_content();

private:
    fstream newfile;
};

#endif