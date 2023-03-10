# Static Libraries

<h2>What are Static Libraries?</h2>
<p>Static libraries are just collections of object files that are linked into the program during the linking phase of compilation and are not relevant during runtime.</p>
<br>
<h2>Steps to create an archive in shell</h2>

```powershell
gcc -c <functions>.c   #create object files of custom functions

ar -rc libdemo.a  <functions>.o   #create archive file from all the object files

ranlib libdemo.o   #creates an index in the archive file, this speeds up linking in the library as well as creates a safety measure if objects call one another.

gcc main.c -L. -ldemo # -l in -ldemo replaces the name 'lib'. -L. will link the static library in the current directory

./a.out  #we now have an executable linked to our function object files that we can run successfuly.
```
