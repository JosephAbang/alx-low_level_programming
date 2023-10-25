# 0x1C. C - Makefiles

## Project Description
This project focuses on understanding and creating Makefiles. Makefiles are used to automate the compilation of C code by specifying dependencies and rules for building a project.

## Project Structure
The project consists of several tasks, each with its own Makefile, demonstrating different aspects of Makefile usage. Here is an overview of the tasks:

| Task                                             | Short Description                                          |
|--------------------------------------------------|-----------------------------------------------------------|
| [0-Makefile](./0-Makefile)                      | Introduction to creating a basic Makefile. Builds an executable named "school" with no variables. |
| [1-Makefile](./1-Makefile)                      | Introduces the use of variables (CC and SRC) in Makefiles. Builds the "school" executable. |
| [2-Makefile](./2-Makefile)                      | Further extends Makefile functionality. Introduces the use of OBJ and NAME variables. Provides rules for cleaning and recompiling source files. |
| [3-Makefile](./3-Makefile)                      | Enhances the Makefile with additional features. Introduces the use of CFLAGS variable for compiler flags. Defines rules for cleaning, object file cleanup, and recompilation. |
| [5-island_perimeter.py](./5-island_perimeter.py) | A technical interview preparation task. Implements a Python function to calculate the perimeter of an island in a grid. |

## How to Use
To build the executables in the Makefile tasks, navigate to the task's directory and run the following commands:

```shell
make -f <Makefile_name>

