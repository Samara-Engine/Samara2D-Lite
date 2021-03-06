#define GL_SILENCE_DEPRECATION
#include <GLFW/glfw3.h>
#include <iostream>

static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS){
        std::cout << "Escape Key Pressed" << '\n';
        glfwSetWindowShouldClose(window, GLFW_TRUE);
    }
}
static void window_close_callback(GLFWwindow* window){
    std::cout << "Closing Window" << '\n';
}

int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(800, 600, "Hello World", NULL, NULL);
    if (!window)
    {
        std::cerr << "Could not Create GLFW Window Instance" << '\n';
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);
    /* Event callback functions */
    glfwSetKeyCallback(window, key_callback);
    glfwSetWindowCloseCallback(window, window_close_callback);


    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
