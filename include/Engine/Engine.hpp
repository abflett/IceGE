#pragma once

#include <string>

#include <SDL3/SDL.h>

namespace IceGE
{

    class Engine
    {
    public:
        Engine();
        const std::string TestString() const;
    };

}