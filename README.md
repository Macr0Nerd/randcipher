# Rand Cipher
I made this for a school project.
It's like a Vigenere cipher but safer.
This is because it's based on a PSN seed so it won't repeat due to keylength.
Obviously you and the partner need to have the same seed for it to work, but oh well.

## Building
### CMake (recommended)
```bash
cmake *
make
./RandCipher
```
### Compiling
Example with GCC:
```bash
gcc main.cpp -o RandCipher
./RandCipher
```

## Using

##### Note: The seed ***must*** be an integer!

When you run it it'll ask for the seed.
You can use a filename as a parameter, or if you don't it'll ask for a message after the seed.
You can decrypt in the same way as you run, just run it with the `-d` flag.
Pretty simple.