## Description

RGE is a game engine coded in C++ using GLFW and OpenGL.

## Project Structure

The project is organized with the following directory structure:

- **build/**: Contains build files and compiled binaries.
- **include/**: Header files for the project.
- **src/**: Source code files for the game engine.
- **glfw-3.3.9/**: GLFW library version 3.3.9.

## Getting Started

Follow these steps to get started with RGE:

1. Clone the repository: `git clone <repository_url>`
2. Navigate to the project directory: `cd RGE`
3. Build the project.
4. Run the compiled binary.

## Dependencies

- GLFW 3.3.9
- OpenGL

## Build

The project is using CMake :

```bash
cmake
```  

Then build the project :  

On Unix system :  

```bash
cd build
make
```  

## Usage  

After building the project, run the executable:

On Unix system :  

```bash
./RGE
```  

## Acknowledgments

- GLFW (<https://www.glfw.org/>)
- OpenGL (<https://www.opengl.org/>)

## License

This project is licensed under the MIT License.