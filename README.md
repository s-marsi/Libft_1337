# <span style="font-size: 50px;font-weight: 600; color: red;margin-left: 42%;"> LIB</span> <span style="font-size: 50px;font-weight: 600">FT</span>

## Table of Contents
- [Subject](#subject)
- [Description](#description)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)

<ol style="margin-left: 15px;">
  <li style="font-size: 20px; font-weight: 600; color: red;">
    Subject : <a href="https://cdn.intra.42.fr/pdf/pdf/111289/en.subject.pdf" target="_blank" style="color: red; font-size: 15.5px; font-weight: 300; margin-left: 10px;"> subject.pdf </a>
  </li>
</ol>

<ol style="margin-left: 15px;">
  <li style="font-size: 20px; font-weight: 600;">
    Description :
    <ul>
      <li>The libft project is a custom C library containing a collection of essential functions that can be utilized in various C programming tasks. This library serves as a reusable set of functions, providing common functionality not necessarily present in the standard C library.</li>
    </ul>
  </li>
</ol>

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

<ol style="margin-left: 15px;">
  <li style="font-size: 20px; font-weight: 600;">
    Usage :
    <ul>
      <li>To use the libft library in your C project, include the header file in your source code and link against the compiled library.</li>
      <li>#include "libft.h"</li>
      <li>Compile your program with the libft.a library:</li>
      <li>```bash
        cc main.c libft.a
        ```</li>
    </ul>
  </li>
</ol>
