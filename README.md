# No make code compilation


This is a repo to make a manual compilation of some C code inside
a project.

It is obviously not even slightly scalable, as it would be
with make. But I think this should be the first way to teach how
to compile C code, as make obfuscates quite a lot the compiler
itself, which is the thing, in my experience, with which  the most
trouble appears.


Also, there is a cool thing that you can do, that is to put the compiled
binary into /home/<USER>/.local/bin or whatever folder that is in PATH
and execute the coomand as a command line function! How neat!

P.D.1: I put it in that particular path because of testing reasons, I 
believe there are conventions on where to put user-compiled libraries..

P.D.2: In such a case, you should not name your output 'main', as it
is just too generic.

