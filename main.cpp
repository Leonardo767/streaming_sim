#include "Publisher.h"
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

int main(int argc, char *argv[])
{
    Publisher pub_source("sample.txt");
    string feed;
    for (int i = 0; i < 10; i++)
    {
        feed = pub_source.publish_content();
        cout << feed << endl;

        // slowing down sim steps if user provides timeframe
        if (argc > 1 && strcmp(argv[1], "--step") == 0)
        {
            // --step time in seconds, 3rd arg if provided, otherwise default 1
            uint sim_step_time = (argc > 2) ? (uint)atoi(argv[2]) : 1;
            sleep(sim_step_time);
        }
    }
    return 0;
}