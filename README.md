# SparkleEngine
A lightweight 2D game engine built with C++ and SFML. Cross-platform with CMake build system.

## Requirements

- CMake 3.31 or higher
- C++23 compatible compiler (Visual Studio 2022+, GCC 11+, Clang 13+, Apple Clang 13+)
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
- **Windows**: `build/Debug/GameEngine.exe` or `build/Release/GameEngine.exe`
- **Mac/Linux**: `build/GameEngine`

## Platform Notes

### Windows
- Use Visual Studio 2019 or newer
- You can also open the generated `.sln` file in Visual Studio

### Mac
- Requires Xcode command line tools: `xcode-select --install`

### Linux
- Install build essentials: `sudo apt install build-essential cmake git`

## Dependencies

SFML is automatically downloaded and built by CMake - no manual installation required!
