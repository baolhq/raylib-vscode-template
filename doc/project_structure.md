# Project Structure

This project is a minimal raylib + VSCode template, designed for quick and clean C/C++ game development.

```sh
raylib-vscode-template/
├── .vscode/
│   ├── c_cpp_properties.json       # VSCode: compiler paths and IntelliSense settings
│   ├── launch.json                 # VSCode: debug config (launch app with F5)
│   └── tasks.json                  # VSCode: build tasks (Ctrl+Shift+B)
├── doc/                            # Example documentations
├── lib/                            # Library headers
├── inc/                            # Common used headers
├── res/                            # Game resource assets
│   ├── audio/                      # Sound effects, music files (e.g., .wav, .ogg)
│   ├── font/                       # Custom fonts (e.g., .ttf, .fnt)
│   └── img/                        # Sprites, textures, background images (e.g., .png, .jpg)
├── src/
│   └── main.cpp                    # Entry point of the raylib app (basic example window)
├── CHANGELOG.md                    # Important version updates
├── CODE_OF_CONDUCT.md              # Contributor behavior guidelines
├── CONTRIBUTING.md                 # Instructions for contributors
├── LICENSE.md                      # MIT License
├── README.md                       # Project overview and usage instructions
├── CMakeLists.txt                  
└── Makefile                        # Core build script with platform support (Win/Linux/macOS/Web)
```

## Build system

- The Makefile supports multiple platforms: Windows, Linux, macOS, Raspberry Pi, and Web (via Emscripten).
- Platform and build mode (DEBUG/RELEASE) are configurable via variables.
- Output goes into the dist/ directory by default.

## VSCode Integration

- Ready to build and run directly from VSCode using Ctrl+Shift+B and F5.
- Comes prepped for easy debugging and compilation using raylib.

## CI/CD

- GitHub Actions (.github/workflows/publish.yml) handles:
    - GitHub Actions builds on push to `main` and `release/**`
    - Cross-compilation for Windows, Linux, and macOS (limited)
    - Artifacts are bundled and uploaded automatically
