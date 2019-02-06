# spacegame - how to deal with it
You should have ```git``` and ```CMake``` to build this project.

## How to build it (on a Linux machine):

#### 1. Download SFML 2.5.1

#### 2. Clone this repository:
```
git clone https://github.com/codepictor/spacegame.git
```

```
cd spacegame/
```

#### 3. Run CMake (I used cmake-gui)
```
cmake-gui
```

#### 4. Configure the project by specifying required paths
```
<configure the project using CMake by specifying a path to SFML>
<generate necessary files for building>
<exit cmake-gui>
```

#### 5. Build using makefile
```
cd bin/
make -j4
```

#### 6. Run the game!
```
./spacegame
```
