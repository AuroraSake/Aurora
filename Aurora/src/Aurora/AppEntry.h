#pragma once

#ifdef AU_PLATFORM_WINDOWS

extern Aurora::Application* Aurora::CreatApplication();

int main(int argc, char** argv)
{
    Aurora::Log::Init();
    AU_COER_WARN("Initializing Logger!");
    AU_APP_TRACE("Hello there.");

    Aurora::Application* App = Aurora::CreatApplication();
    App->Run();
    delete App;
}
#endif