# spacegame
In this game you control a space ship and the main goal is to go into a purple portal.
Be cautious! The amount of fuel is limited!

If you use Windows and don't want to build this game from sources, there is a binary 'spacegame.exe' in bin/ directory (built with static linking).
Just clone this repository and run it.

If you want to build it by yourself, follow the steps below.

## How to build it (for example, on a Linux machine):

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

#### 4. Configure the project by specifying required paths and appropriate options
```
<configure the project using CMake by specifying a path to SFML 2.5.1 and appropriate options>
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
