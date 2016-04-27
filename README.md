# mkproj
Create a C++ project for VS Code from the command line.

Note: This is a very basic tool, so don't expect much.

# Instructions
Create a folder containing your tasks.json, CMakeLists.txt, and .gitignore. Change the #define in main.cpp to the point to this new folder. Run cmake ./ to create the makefile and run make to create the executable.

Assuming that you add the resulting executable to your path, you should be able to do the following:
```
cd /path/you/want/to/place/project

mkproj yournamehere
```

Giving you an initialized directory containing your templates.

