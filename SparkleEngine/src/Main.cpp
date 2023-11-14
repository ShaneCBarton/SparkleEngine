#include <iostream>
#include "Engine.h"


int main(int argc, char* argv[])
{
    Engine engine;

    engine.Initialize();
    engine.Run();
    engine.Destroy();

    return 0;
}