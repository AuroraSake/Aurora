#pragma once
#include "Aurora/Application.h"


#ifdef AU_PLATFORM_WINDOWS

extern Aurora::Application* Aurora::CreatApplication();

int main(int argc, char** argv)
{
    Aurora::Application* App = Aurora::CreatApplication();
    App->Run();
    delete App;
}
#endif