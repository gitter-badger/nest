# NESt

[![Build Status](https://travis-ci.org/connerturmon/nest.svg?branch=master)](https://travis-ci.org/connerturmon/nest) [![Join the chat at https://gitter.im/connerturmon-nest/Lobby](https://badges.gitter.im/connerturmon-nest/Lobby.svg)](https://gitter.im/connerturmon-nest/Lobby?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)

NESt is a NES emulator written in the C language using the SDL2 framework
to handle input, graphics, and audio.

**NESt is currently in pre-alpha and has not yet been released.**

## Building

Here are the steps for building the NESt pre-release on your system for
developmental purposes.

### Dependencies

You must have [SDL2](https://www.libsdl.org/download-2.0.php) installed on 
your system. This varies from system to system.

### Linux:
#### Ubuntu (16.04 LTS +)
```
sudo apt-get install libsdl2-2.0-0 libsdl2-dev
```
#### Arch / Manjaro
```
sudo pacman -S sdl2
```
#### Fedora
```
sudo yum install SDL2
```

### Windows & OSX:
Download and install the Development Libraries located at the bottom of the [SDL2 Download Page](https://www.libsdl.org/download-2.0.php).

Actually getting them to compile SDL2 code is beyond the scope of this documentation, but a simple google search will return instructions on how to compile SDL2 code for your given OS + IDE.

### Compiling & Linking
<sup>NESt does not currently have direct compilation support for Windows / OSX.</sup>
#### Linux:
```Bash
git clone https://github.com/connerturmon/nest.git
cd nest/
make
```
A binary file `nest` will be located inside the nest/ directory.

## Using NESt
NESt does not currently support GUI ROM loading, and must be started through the command line by passing a ROM argument to it.

#### Linux:
```Bash
./nest ROM_FILE
````