#pragma once

struct GLFWwindow;

class Application
{
public:
    static constexpr int WINDOW_WIDTH = 800;
    static constexpr int WINDOW_HEIGHT = 600;

    
    void Run();
private:
    void InitWindow();
    void InitVulkan();
    void MainLoop();
    void Cleanup();

    GLFWwindow* window;
};
