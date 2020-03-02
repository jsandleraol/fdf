# FdF @ 42

This project is a wireframe '3d' object renderer. It takes text files such as those in the test_maps file, in which there are numbers placed around a board which correspond to the locations and value (height). Currently only works on MacOS.

Controls:

	-WASD keys for movement
	-'z' and 'x' to zoom
	-'space' to change view types
	-'r' to reset the parameters

![preview image](/preview.png)

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
