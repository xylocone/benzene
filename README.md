# Benzene

This is a starter template I have created for a modern C++ application.

## Dependencies

The following need to be installed on your system to be able to build the executable:

1. **gcc**: The famous compiler suite.

2. **CMake**: CMake is a build system generator that can generate `make`, `Ninja` and other build configuration files to build your project.

3. **Ninja**: A popular build tool for C/C++.

4. **vcpkg**: A package manager for C/C++ applications.

## How to build

Install all of the dependencies, and add them to the system path. In addition to that, add the following environment variable(s) to either the system or your terminal:

- _VCPKG_ROOT_: this should point to the top-most directory of your vcpkg installation

After setting up the environment variables, run `./build.bat` to build the project. If you are using Visual Studio Code, you can also run the _Build_ task, which does the same thing in fewer keystrokes.

The resultant executable will be found in the `build` directory.

## Cleanup

Run `./cleanup.bat` to clean the `build` directory. There is also a corresponding Visual Studio Code task.

## License

MIT
