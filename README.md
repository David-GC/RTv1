# RTv1

42 school graphic project.

Creation of a program able to generate images according to raytracing protocol.

Those computer generated images will each represent a scene, from a specific angle and position, defined by simple geometric objects, and each with its own lighting system.

## Features
* Figures: sphere, plane, cylinder, cone
* Shadows
* Multi-light spots
* Specular light
* Camera movements

## Usages
Currently only tested on OS X

### Compile
```
make
```

### Run
```
./rtv1 scenes/[file scene]
```
A bunch of sample maps are provided in the maps directory

### Commands
Click on `space` to pixelate the rendering and move quickly into the scene.

* Translate: `W, A, S, D`
* Rotate: `UP, LEFT, DOWN, RIGHT`
* Lift UP/DOWN: `Q, E`
* Pivot: `Z, X`

## Examples

![rtv11](https://user-images.githubusercontent.com/28509576/38153932-98e6f458-346f-11e8-9851-59869e1c72e2.png)
![rtv12](https://user-images.githubusercontent.com/28509576/38153933-98fa84dc-346f-11e8-9f6d-4472a93857b8.png)
![rtv13](https://user-images.githubusercontent.com/28509576/38153934-990e0048-346f-11e8-8032-598d0102eab7.png)
