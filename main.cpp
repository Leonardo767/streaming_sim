#include "Publisher.h"
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <cstdlib>
#include <string.h>
#include <pthread.h>
using namespace std;

static volatile bool keep_running = true;

static void *userInput_thread(void *)
{
    while (keep_running)
    {
        if (cin.get() == 'q')
        {
            // keyboard interrupt
            keep_running = false;
        }
    }
    return NULL;
}

int main(int argc, char *argv[])
{
    // keyboard interrupt listener thread
    pthread_t tId;
    (void)pthread_create(&tId, 0, userInput_thread, 0);
    cout << "Press q + Enter to end simulation..." << endl;

    // init global objects
    Publisher pub_source("sample.txt");
    // int frame{0};

    while (keep_running)
    {
        string feed = pub_source.publish_content();
        cout << feed << endl;

        // slowing down sim steps if user provides timeframe
        if (argc > 1 && strcmp(argv[1], "--step") == 0)
        {
            // --step time in seconds, 3rd arg if provided, otherwise default 1
            uint sim_step_time = (argc > 2) ? (uint)atoi(argv[2]) : 1;
            sleep(sim_step_time);
        }
    }

    (void)pthread_join(tId, NULL);
    // post-sim processing

    return 0;
}