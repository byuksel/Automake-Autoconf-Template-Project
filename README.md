Automake-Autoconf-Template-Project
==================================

Automake Autoconf Template Project for "Automake C++ Tutorial"

This is a template project which I used in the "Automake C++ Tutorial" at http://youtu.be/7hBag3hr0xU

You can clone this template project to jump start your project with a automake/autoconf based build system.
It has the basic ingredients, so all you need is to replace the libraries and main file with your own code
while modifying the Makefile.am's and configure.ac's with the names of your files.

In order to make everything work, once you clone this directory, go the root of project, and type:
> aclocal

> autoconf

> automake --add-missing

This should create all "configure" script along with all the Makefile's. Now, you can type
> ./configure

> make

And your project should compile. Now you are all set with a lean template to build upon.

Your binary should be available at ```src/main```.


# Scaffolding Explained #

In this section, we describe what each file does in this template and how you can modify them to your needs.

## Directory Structure ##

Once everything is installed, you will see a project structure like below:

```
├── Makefile.am           # Main makefile.
├── README.md             # README.md file
├── configure.ac          # File of magic. Main configuration is here.
├── my_inc                # Example includes directory which has a simple addition library.
│   ├── Makefile.am
│   ├── myadd.cpp         # Simple addition library cpp file.
│   └── myadd.h           # Simple addition library header file.
└── src
│   ├── Makefile.am
│   ├── helper.cc         # Helper cc file.
│   ├── helper.cpp        # Helper cpp file.
│   ├── helper.h          # Helper header file.
│   └── main.cpp          # Main module cpp file.
```

# License

[Apache 2.0 License](LICENSE.md) - &copy; 2015 Baris Yuksel

# Bugs, Requests and Support #

For bug reports, feature requests and general questions, please feel free to email baris@onehundredyearsofcode.com
