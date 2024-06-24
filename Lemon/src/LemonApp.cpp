#include <Aurora.h>

class Lemon : public Aurora::Application
{
public:
    Lemon()
    {
    }
    
    ~Lemon()
    {

    }
};

Aurora::Application* Aurora::CreatApplication()
{
    return new Lemon();
}