<img src="https://i.imgur.com/FX8cmmQ.png" width="250" height="164" align="right"/>

# ZIB, AN ENGINE

10/14/24 : I'm pretty rusty w c++, but I'm getting a handle on how classes/structs work again, & using referencing instead of pointers. Right now I'm using instace functions to modify the vector itself, and static functions to produce new vectors. I think this will be a solid way to keep these distinct, and ensure no state is ever modified on accident while programming. We'll see as I go on if this makes sense as a design principle, or if I find some struct where this makes no sense.

10/16/24 : Added a basic Makefile. 'make' currently uses vector2.cpp & outputs 'runner' in the main folder; 'make clean' removes it (also removes .o files, but that currently is unused)

11/04/24 : Hopping back on. Added vec3 class quick, currently learning more about the actual engine structure so soon ill be doing a lot more than a basic math library
