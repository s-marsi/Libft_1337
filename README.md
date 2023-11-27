# <span style="color: red;">LIB</span><span style="color: black;">FT</span> (1337)

## Table of Contents
- [Subject](#subject)
- [Description](#description)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)

## Subject :

- <a href="https://cdn.intra.42.fr/pdf/pdf/111289/en.subject.pdf" target="_blank" style="color: red; font-size: 15.5px; font-weight: 300; margin-left: 10px;"> subject.pdf </a>


## Description :
- The libft project is a custom C library containing a collection of essential functions that can be utilized in various C programming tasks. This library serves as a reusable set of functions,      
providing common functionality not necessarily present in the standard C library.
    

## Getting Started
### Prerequisites
- To use this library, you need a C compiler (e.g., GCC) and the make utility installed on your system.

### Installation
1. Clone the repository:
    ```bash
    git clone https://github.com/s-marsi/libft.git libft
    cd libft
    ```
2. Compile the library:
    ```bash
    make all bonus  # This will generate the libft.a library file.
    make clean      # This will remove object files.
    ```
## Usage :
- To use the libft library in your C project, include the header file in your source code and link against the compiled library.</li>
  ```bash
  #include "libft.h"</li>
   ```
- Compile your program with the libft.a library:
  ```bash
  cc main.c libft.a
   ```




