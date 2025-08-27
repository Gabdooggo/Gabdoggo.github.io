// C++ Example with GLFW
#include <GLFW/glfw3.h>

int main(){
if(!glfwInit()) return -1;
GLFWwindow* window = glfwCreatedWindow(800, 600, "My Game", NULL, NULL);
if (!window) {glfwTerminate(); return -1; }

glfwMakeContextCurrent(window);
while (!glfwWindowShouldClose(window)){
glClear(GL_COLOR_BUFFER_BIT);
// Render here
glfwSwapBuffers(window);
glfwPollEvents();
}
glfwDestroyWindow(window);
glfwTerminate();
return 0;
}
