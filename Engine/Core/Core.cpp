#include <Engine/Core/Core.hpp>
#include <Engine/Core/Timer.hpp>



void Core::start()
{
    Timer timer;
    while (true)
    {
        readInput();
        update(timer.frameTime());
        render();
    }
}

void Core::readInput()
{

}

void Core::update(float dt)
{

}

void Core::render()
{

}
