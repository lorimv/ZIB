<img src="https://i.imgur.com/FX8cmmQ.png" width="250" height="164" align="right"/>

# ZIB, AN ENGINE

10/14/24 : I'm pretty rusty w c++, but I'm getting a handle on how classes/structs work again, & using referencing instead of pointers. Right now I'm using instace functions to modify the vector itself, and static functions to produce new vectors. I think this will be a solid way to keep these distinct, and ensure no state is ever modified on accident while programming. We'll see as I go on if this makes sense as a design principle, or if I find some struct where this makes no sense.

10/16/24 : Added a basic Makefile. 'make' currently uses vector2.cpp & outputs 'runner' in the main folder; 'make clean' removes it (also removes .o files, but that currently is unused)

11/04/24 : Hopping back on. Added vec3 class quick, currently learning more about the actual engine structure so soon ill be doing a lot more than a basic math library

11/05/24 : By including zib.h (from the ZIB root dir) we import application.h, responsible for starting things up. we'll need to compile as a library, and find a way to make this .so or whatever accessible. But for now, I'm just gonna be using a .main during development until this causes issues

11/12/24 : I gotta get main out of my main.cpp file expeditiously. I've successfully gotten the library working w an outside project (and made an actual Makefile) but it requires me to grab main.cpp from the ZIB directory. Incredibly stupid. Just make the client's main direct to the engine's entry function, probably
