# opengl_utils (s21_ussur_opengl_utils.so)

A small collection of OpenGL utilities to do routine tasks.

## Features:
- Framebuffers
- Loading and compiling shaders, combining them into programs
- Meshes

## Build

```bash
$ git submodule update --init --recursive
$ cmake -S . -B build -DCMAKE_INSTALL_PREFIX="$(pwd)/install"
$ cmake --build build
$ cmake --install build
```

As the result, you get:
```bash
$ tree ./install
./install
├── include
│   ├── better_c_std
│   └── opengl_utils
└── lib
    ├── libs21_ussur_better_c_std.so
    └── libs21_ussur_opengl_utils.so
```