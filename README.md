# raylib-vscode-template

A minimal VSCode template to quickly get started with [raylib](https://www.raylib.com/) in C/C++.

## Description

This template sets up a ready-to-use environment for developing `raylib` projects using Visual Studio Code. It includes a basic project structure, `tasks.json`, and `launch.json` to simplify building and running your project with `gcc` or `clang`. Great for anyone who wants a no-fuss starting point for raylib development.

## Getting Started

### Dependencies

Before you begin, make sure you have the following installed:

- [raylib](https://www.raylib.com/)
- GCC / Clang (tested with gcc 13+)
- Make
- Visual Studio Code
- C/C++ extension for VSCode (by Microsoft)

Tested on:

- Windows 10 / 11
- Linux (Ubuntu 22.04+)

### Installing

1. Clone the repository:

```sh
git clone https://github.com/yourusername/raylib-vscode-template.git
cd raylib-vscode-template
```

2. Make sure `raylib` is installed and available in your compiler's `include/lib` paths. You can also modify `Makefile` to point to custom locations.

3. Remove `.git` directory at the project root

4. Open the folder in VSCode:

```sh
code .
```

### Executing program

To build and run the project:

- Press `Ctrl+Shift+B` to build using the provided `Makefile`
- Hit `F5` or click `Run` in VSCode to launch the program

Alternatively, you can do it manually:

```sh
make
./main
```

## Help

If you run into issues with raylib not being found, double-check your include and library paths in the `Makefile`.

Example fix:

```
gcc main.c -o main -I/path/to/raylib/include -L/path/to/raylib/lib -lraylib
```

## Version History

- 0.1
  - Initial release with working VSCode integration

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE.md) file for details.

## Acknowledgments

Huge thanks to the raylib community and these awesome resources:

- [raylib official](https://www.raylib.com/)
- [awesome-readme](https://github.com/matiassingers/awesome-readme)
- [PurpleBooth's template](https://gist.github.com/PurpleBooth/109311bb0361f32d87a2)
