# FdF @ 42

![screenshot](/screens/screen.png?raw=true)

A simple 3D height-map renderer.  

## Features
* Simple file format definition (array of space-separated integers)
* Camera controls (zoom, translate)

## Compiling and running
Run `make`. An executable will compile. Currently only tested on OS X.

Run it with `./fdf [map]`. A bunch of sample maps are provided in the `maps`
directory. The one in the screenshot above is `maps/42.fdf`.

Controls are: drag with left click to rotate, drag with right to zoom, drag with
both to move around.
