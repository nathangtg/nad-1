# C Project

## Project Structure

```
src/
├── c/        # C source files
├── file/     # Additional modules or extra functionality
├── header/   # Header files (.h)
├── main.c    # Main entry point
└── Makefile  # Build instructions
```

### Example Files

* `src/c/login.c` - Handles user login functionality
* `src/c/register.c` - Handles user registration
* `src/header/utils.h` - Utility function headers
* `src/main.c` - Main function of the program

## Build Instructions

The project uses `gcc` for compiling the C files.

### Build the program:

```
make
```

This will compile all `.c` files into object files and link them into the final executable named `program`.

### Run the program:

```
./program
```

### Clean the project:

```
make clean
```

This will remove all object files (`.o`) and the executable.

## Makefile Explained

### Variables

* **CC**: Compiler used, set to `gcc`.
* **CFLAGS**: Compilation flags, including `-Wall` (all warnings) and `-Wextra` (extra warnings).
* **OUTPUT**: Name of the executable.
* **SRC**: List of all C source files.
* **OBJ**: Object files corresponding to each C file.

### Targets

* **all**: Builds the executable.
* **clean**: Removes object files and the executable.

### Build Rules

* **\$(OUTPUT)**: Links object files into the final executable.
* **%.o: %.c**: Compiles each C file to an object file.

## Notes

* Adjust the `SRC` variable in the Makefile if you add or remove source files.
* Make sure to include header files correctly using `-I./src/header`.
