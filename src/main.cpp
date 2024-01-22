#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

/**
 * @brief change viewport on window resize
 * 
*/
void changeViewportOnResize(GLFWwindow* window, int width, int height) {
    glViewport(0,0,width,height);
}

/**
 * @brief callback for error handling
 * 
 * @param error 
 * @param description 
 */
void errCallBack(int error, const char* description) {
    std::cerr << "GLFW Error: " << description << std::endl;
};

int main() {
    glfwSetErrorCallback(errCallBack);//callback for error handling
    glfwInit();
    
    // set version and profile to run opengl
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); //on macos

    // create window
    GLFWwindow* window = glfwCreateWindow(800, 600, "LearnOpenGL", NULL, NULL);
    if(window == NULL) {
        std::cout << "Failed to create GLFW window" << std::endl;
        return -1;
    }
    glfwMakeContextCurrent(window); // make window context current

    // load glad
    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }
    glViewport(0,0,800,600); // set viewport

    // set resize callback whenever window is resized to change viewport
    glfwSetFramebufferSizeCallback(window, changeViewportOnResize);

    // render loop
    while(!glfwWindowShouldClose(window)) {

        // set background color and refresh the buffer every frame
        glClearColor(0.2f,0.3f,0.3f,1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        // check and call events and swap buffers
        glfwSwapBuffers(window); // swap color buffer : display on screen
        glfwPollEvents();// check if any events are triggered (keyboard, mouse, etc.)
    }
    glfwTerminate();
    return 0;
}

