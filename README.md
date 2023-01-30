# NRC

## Dependencies

Optional: `libpng` and `zlib` for loading and saving grayscale images (`LoadPNG_ui8matrix()` and `SavePNG_ui8matrix()` functions)


## How to compile

```bash
mkdir build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
make -j4
```

You may want to specify compiler options as follow when invoking the `cmake` command:
```bash
cmake .. -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_COMPILER="g++" -DCMAKE_CXX_FLAGS="-Wall -O3 -fstrict-aliasing -mtune=native -march=native"
```

Notice that on Apple M1, if you use AppleClang, you should replace `-march=native` by `-mcpu=apple-m1`.

To include half precision functions you have to add the FP16 option (`-DFP16=ON`) on the `cmake` command. For now it does not work with intel architecture.

The library is located in `build/lib/`.
