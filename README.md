# File Handling in C programming

• A file repesents a sequence of bytes on the disk where a group of related data is stored.
• Various Operations are donr like: Creating a file, Opening a file, Reading, Writing, Moving to a specific location in a file and closing a file.

# Operations in file handling:
fopen() : used to open an existing file 0r create a new file
fprintf() : writing data into an available in a file
fscanf() : reading the data available in a file
fpute() : wrirting any character into the program file
fgete() : reading the character from an available file
fclose() : used to close the program file
fseek() : used to set the file pointer to the intended file position
fputw() : writing an integer int an available file
fgetw() : used to read an integer from the given file
ftell() : used to get the total size of file after moving the file pointer at the end of the file
rewind() : sets file pointer at the beginning of the stream

# fopen Function
• fopen is C library function used to open an existing file or create a new file.
• FILE *fopen( const char *filename/filepath . const char *mode );

# Different types of Mode
• "r" - Searches file: Opens the file for reading only. If the file is opened successfully fopen() loads it into memory and sets up a pointer which points to the first character in it, If the file cannot be opened fopen() returns NULL.

• "w" - Searches file; If the file exists already. Its contents are overwritten. If the file doesn't exist, a new file is created. It creates a new file for writing only (no reading)

• "a" - Search file: If the file is opened successfully fopen() loads it into memory and sets up a pointer tant points to the last character in it. If the doesn't exist, a new file is created. The file is opened only for appending (writing at end of file).

• "r+" - Searches file: Opens the file for both reading and writing. If opened successfully, fopen() loads it into memory and sets up a pointer which points to the first character in it. Returns NULL, if unable to open the file.

• "w+" - Searches file: If the file exists, its contents are overwritten. If the file doesn't exist, a new file is created. The difference between w and w+ is that we can also read the file created using w+.

• "a+" - Searches file: If the file is opened successfully fopen() loads it into memory and sets up apointer which points to the last character in it. If the file doesn't exist, a new file is created. The file is opened for reading and appending (writing at end of file).

# fclose Function

• The C library function fclose(FILE *fp) closes the file. if we don't use fclose() it may lead to loss of data.
• All buffers are flushed.
• int fclose(FILE *fp)
• This method returns zero if the stream is successfully closed. On failure, EOF is returned.