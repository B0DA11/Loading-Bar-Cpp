# Loading-Bar-Cpp

A simple yet satisfying console-based loading bar animation written in C++. Perfect for adding visual feedback to command-line applications and improving user experience during long-running operations.

![Language](https://img.shields.io/badge/language-C%2B%2B-blue)

## Overview

This project demonstrates how to create an animated loading bar in a Windows console application. The loading bar provides real-time visual progress feedback, displaying completion percentage from 0% to 100% with a smooth animation effect.

## Features

**Key Features:**
- Interactive console-based loading animation
- Real-time progress display with percentage indicator
- Smooth visual feedback using progress characters
- Lightweight and easy to integrate
- No external dependencies required

## Prerequisites

- **C++ Compiler**: MSVC, GCC, or Clang with C++11 or higher support
- **Platform**: Windows (uses `windows.h` for Sleep function)
- **Build Tools**: Optional (can compile with any standard C++ compiler)

## Installation & Build

### Quick Start

1. **Clone the repository:**
   ```bash
   git clone https://github.com/B0DA11/Loading-Bar-Cpp.git
   cd Loading-Bar-Cpp
   ```

2. **Compile the program:**
   ```bash
   # Using g++ (MinGW on Windows)
   g++ -o LoadingBar Bar.cpp

   # Using MSVC
   cl Bar.cpp

   # Using Visual Studio
   # Open as project and build
   ```

3. **Run the program:**
   ```bash
   LoadingBar.exe
   ```

## Usage

Simply run the compiled executable:

```bash
./LoadingBar
```

**Output:**
```
Loading.....

[====================]100%

Loading Complete!
```

The program will display a progressively filling loading bar that animates from 0% to 100%, with each step taking 120 milliseconds.

## How It Works

The loading bar is implemented using:
- **Loop-based animation**: Iterates from 0 to 20 (representing 0-100%)
- **Dynamic character replacement**: Uses `=` for filled portions and spaces for empty portions
- **Real-time updates**: Employs carriage return (`\r`) to overwrite the same console line
- **Timer delay**: Uses `Sleep(120)` for smooth animation

### Code Structure
```cpp
for(int i = 0; i <= total; i++) {
    // Print opening bracket
    // Draw filled portion (=)
    // Draw empty portion (space)
    // Calculate and display percentage
    // Add delay for smooth animation
}
```

## Customization

You can easily customize the loading bar by modifying these parameters in `Bar.cpp`:

| Parameter | Purpose | Line |
|-----------|---------|------|
| `total` | Maximum progress steps | Line 6 |
| `Sleep(120)` | Animation delay in milliseconds | Line 17 |
| `=` | Character used for progress bar | Line 11 |
| Message text | Custom loading/completion messages | Lines 7, 19 |

**Example: Change speed and total steps**
```cpp
int total = 30;  // More granular progress
Sleep(50);       // Faster animation
```

## Advanced Usage

To integrate this into your own project:

1. Extract the core loop from `main()` function
2. Adjust total steps and delay for your use case
3. Wrap it in a function for reusability:

```cpp
void displayLoadingBar(int steps = 20, int delay = 120) {
    cout << "Loading.....\n\n";
    for(int i = 0; i <= steps; i++) {
        // Loading bar logic here
    }
    cout << "\n\nLoading Complete!";
}
```
____
**B0DA11** - GitHub: [@B0DA11](https://github.com/B0DA11)

