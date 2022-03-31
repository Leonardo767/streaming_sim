#include "Publisher.h"
using namespace std;

int main()
{
    Publisher pub_source("sample.txt");
    string feed;
    for (int i = 0; i < 10; i++)
    {
        feed = pub_source.publish_content();
        cout << feed << endl;
    }
    return 0;
}