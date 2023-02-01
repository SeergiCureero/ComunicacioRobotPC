#include <iostream>
#include "Window.h"

int main(){
    std::cout << "Creant una finestra\n"

    Window* pWindow = new Window();

    bool running = true;//si volem q segueixi funcionant
    while (running)
    {
        if(!pWindow->ProcessMessages())
        {
            std::cout << "Tancant la finestra\n"
            running = false;
        }

        //render

        Sleep(10);
    }

    delete pWindow;
    
    return 0;
}