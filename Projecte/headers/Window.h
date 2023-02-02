//This code comes from a tutorial on how to create a window in cpp using Win32 API by Designed by Hugo (link: https://www.youtube.com/watch?v=Kx5CN-V6FvQ)

#include <Windows.h>

LRESULT CALLBACK WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

class Window
{
public:
    Window();
    Window(const Window&) = delete;
    Window& operator = (const Window&) = delete;
    ~Window();

    bool ProcessMessages();

private:
    HINSTANCE m_hInstance;
    HWND m_hWnd;

};