# spacegame - how to deal with it
You should have ```git``` and ```CMake``` to build this project.

## How to build it (on a Linux machine):

#### First of all, clone this repository:
```
git clone https://github.com/codepictor/spacegame.git
```

```
cd spacegame/
```

#### Run CMake (I used cmake-gui)
```
cmake-gui
```

#### Configure the project by specifying required paths
```
<configure the project using CMake by specifying a path to SFML>
<generate necessary files for building>
<exit cmake-gui>
```

#### Build using makefile
```
cd bin/
make -j4
```

#### Run the game!
```
./spacegame
```
