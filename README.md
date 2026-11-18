# Simple Compile Tool (SCT)

A lightweight command-line utility written in C for compiling, executing, and managing C and Java programs directly from the Linux terminal.

## Features

- Display current working directory
- List files and directories
- Edit files using Nano
- Compile C programs using GCC
- Execute compiled C programs
- Compile Java programs using Javac
- Execute Java programs using Java
- Create, compile, and run Java programs
- Delete files
- Colored terminal interface
- Interactive command-line interface

## Requirements

The following tools must be installed:

- GCC
- Java JDK
- Nano
- Linux operating system

## Installation

Clone the repository:

    git clone https://github.com/YOUR_USERNAME/simple-compile-tool.git

Navigate to the project directory:

    cd simple-compile-tool

Compile the source code:

    gcc main.c -o sct

Run the program:

    ./sct

## Commands

| Command | Description |
|---------|-------------|
| `-show` | Display current directory and files |
| `-edit` | Edit a file using Nano |
| `-compC` | Compile and execute a C program |
| `-runC` | Execute a compiled C program |
| `-compJAVA` | Compile a Java program |
| `-mcrJAVA` | Create, compile, and run a Java program |
| `-delete` | Delete a file |
| `-help` | Display available commands |
| `clear` | Clear the terminal |
| `exit` | Exit the application |

## Technologies

- Language: C
- Compiler: GCC
- Java Compiler: Javac
- Editor: Nano
- Platform: Linux
- Terminal: Bash

## Project Structure

    simple-compile-tool/
    ├── main.c
    ├── README.md
    └── LICENSE

## Version

Current Version: 1.0.0

## Developer

Created as a personal C programming project.

## License

This project is open-source.
