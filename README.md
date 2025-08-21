# SparkleEngine
A lightweight 2D game engine built with C++ and SFML. Cross-platform with CMake build system.

## Requirements

- CMake 3.31 or higher
- C++20 compatible compiler (Visual Studio 2019 16.11+, GCC 10+, Clang 12+)
- Git

## Building

```bash
git clone https://github.com/ShaneCBarton/SparkleEngine.git
cd SparkleEngine
mkdir build
cd build
cmake ..
cmake --build .
```

## Running

After building, the executable will be in:
- **Windows**: `build/bin/Debug/SparkleEngine.exe` or `build/bin/Release/SparkleEngine.exe` depending on cmake build variant.
- **Mac/Linux**: `build/bin/SparkleEngine`

## Platform Notes

### Windows
- Requires a C++20 compatible compiler (e.g., MSVC, MinGW, or Clang).
- Visual Studio Code is recommended, but you can use any compiler and IDE supported by CMake.
- If you generate a Visual Studio solution, you can open the `.sln` file directly in Visual Studio.

### Mac
- Requires Xcode command line tools: `xcode-select --install`

### Linux
- Install build essentials: `sudo apt install build-essential cmake git`

## Dependencies

SFML is automatically downloaded and built by CMake - no manual installation required!
