# File I/O in C language

This topic deals with the ability to read and write files using C and it's [POSIX](https://en.wikipedia.org/wiki/POSIX) compliant functions: [open()](#open), [close()](#close), [read()](#read), [write()](#write) and [dprintf()](#dprintf).

Note: Ensure to include the following libraries

||<unistd.h>|<fcntl.h>|<stdio.h>|
|:--|:--|:--|:--|
|Functions|- write()<br>- read()|- open()<br>- close()<br>- write()<br>- read()|- dprintf()<br>- fread()<br>- fwrite()<br>- fprintf()<br>- fscanf()<br>- fgets()|
|Constants|STDIN_FILENO<br>STDOUT_FILENO<br>STDERR_FILENO|O_RDONLY<br>O_WRONLY<br>O_RDWR<br>O_APPEND<br>O_CREAT<br>O_EXCL<br>O_TRUNC<br>O_NONBLOCK|FILE<br>EOF<br>SEEK_SET<br>SEEK_CUR<br>SEEK_END|
|File Stream|------------------|----------------|stdin<br>stdout<br>stderror|

## Headers and Their Constant definitions:

<table>
<thead>
  <tr>
    <th>Header</th>
    <th>Constants</th>
    <th>Definitions</th>
  </tr>
</thead>
<tbody>
  <tr>
    <td rowspan="3"><br><br>&lt;unistd.h&gt;<br></td>
    <td>STDIN_FILENO</td>
    <td>The file descriptor for standard input (usually 0).</td>
  </tr>
  <tr>
    <td>STDOUT_FILENO</td>
    <td>The file descriptor for standard output (usually 1).</td>
  </tr>
  <tr>
    <td>STDERR_FILENO</td>
    <td>The file descriptor for standard error (usually 2).</td>
  </tr>
  <tr>
    <td rowspan="8"><br><br><br><br><br><br><br>&lt;fcntl.h&gt;<br><br><br><br><br>N.B<br>[these are<br>flags for <br>the open()<br>function]</td>
    <td>O_RDONLY</td>
    <td>Open for reading only.</td>
  </tr>
  <tr>
    <td>O_WRONLY</td>
    <td>Open for writing only.</td>
  </tr>
  <tr>
    <td>O_RDWR</td>
    <td>Open for reading and writing.</td>
  </tr>
  <tr>
    <td>O_APPEND</td>
    <td>The file is opened in append mode, i.e., data is written to the end of the file.</td>
  </tr>
  <tr>
    <td>O_CREAT</td>
    <td>If the file does not exist, it is created.</td>
  </tr>
  <tr>
    <td>O_EXCL</td>
    <td>When used with O_CREAT, the file must not already exist.</td>
  </tr>
  <tr>
    <td>O_TRUNC</td>
    <td>If the file exists and is opened for writing, its contents are truncated to zero length</td>
  </tr>
  <tr>
    <td>O_NONBLOCK</td>
    <td>Sets the file descriptor to non-blocking mode, which means that I/O operations <br>on the file descriptor will return immediately if there is no data available.</td>
  </tr>
  <tr>
    <td rowspan="2">&lt;stdio.h&gt;</td>
    <td>FILE</td>
    <td>The data structure that represents a file stream in C programs.</td>
  </tr>
  <tr>
    <td>EOF</td>
    <td>The end-of-file indicator returned by various file input functions when they reach<br>the end of a file.</td>
  </tr>
</tbody>
</table>

<br>

## Function Descriptions

### open()

prototype: `int open(const char *path, int flags, mode_t mode);`

where `path` is the name of the file to open, `flags` is a bit mask of flags that determine how the file is opened, and `mode` specifies the file permissions if a new file is created.

### close()

prototype: `int close(int fd);`

The `close()` function is called to release the file descriptor and close the file when the program is finished reading from it.

### write()

prototype: `ssize_t write(int fd, const void *buf, size_t count);`

The `write()` function in C is used to write data to a file or output stream.

The first argument, `fd`, is the file descriptor of the file or output stream to write to. The second argument, `buf`, is a pointer to the data to be written. The third argument, `count`, is the number of bytes to write.

The `write()` function returns the number of bytes written, which may be less than count if an error occurs, or if the file or output stream is not able to accept all of the data at once (for example, if it is a socket and the sending buffer is full)

### read()

prototype: `ssize_t read(int fd, void *buf, size_t count);`

The `read()` function in C is used to read data from a file descriptor, such as a file, socket, or pipe. It is a low-level I/O function and is typically used in conjunction with the `open()` and `close()` functions.

`fd` is the file descriptor of the file to be read.
`buf` is a pointer to a buffer where the data will be stored.
`count` is the maximum number of bytes to read.

### dprintf()

prototype: `int dprintf(int fd, const char *format, ...);`

The `dprintf()` function in C is used to print formatted output to a file descriptor, similar to how `printf()` is used to print to standard output.

The first argument `fd` is the file descriptor that you want to write to. The second argument format is a `format string`, which specifies how to format the output. The remaining arguments are the values to be formatted and printed, which are specified as additional arguments after the format string, just like in `printf()`.

When `dprintf()` is called, it formats the output according to the format string and any additional arguments passed in. The resulting string is then written to the file descriptor `fd`.
