#include <GLFW/glfw3.h>
#include <stdio.h>

int main(void) {
    if (!glfwInit()) {
        fprintf(stderr, "Failed to initialize GLFW\n");
        return -1;
    }
    GLFWwindow* window = glfwCreateWindow(640, 480, "OpenGL Window", NULL, NULL);
    if (!window) {
        glfwTerminate();
        fprintf(stderr, "Failed to create GLFW window\n");
        return -1;
    }
    glfwMakeContextCurrent(window);
    
    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);
        // Render your scene here
        
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
