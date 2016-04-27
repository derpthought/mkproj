#include <stdlib.h>
#include <string>
#include <iostream>

// put template directory here
#define TEMPLATE_DIR "/opt/templates/c++/"

using namespace std::literals;

int main(int argc, char ** argv) {
    
    //verify proper number of arguments
    if(argc < 2) {
       std::cout << "Please include a project name and try again.\n"
                 << "e.g. mkproj YourProjNameHere\n";
        
       return 0; 
    } 
    
    //arg 1 should be name of project
    auto proj_name = argv[1];
    
    //define some strings that will be used repeatidly
    auto cp = "cp "s;
    auto mkdir = "mkdir "s;
    auto vscode = "/.vscode"s;
    auto template_dir = std::string(TEMPLATE_DIR);
    
    //create project directory
    auto proj_dir = mkdir + proj_name;
    system(proj_dir.c_str());
    
    //create .vscode directory
    auto vs_dir = mkdir + proj_name + vscode;
    system(vs_dir.c_str());
    
    //copy template files
    auto tasks = cp + template_dir + "tasks.json "s + proj_name + vscode;             
    system(tasks.c_str());
    
    auto cmake = cp + template_dir + "CMakeLists.txt "s + proj_name + "/"s;            
    system(cmake.c_str());
    
    auto git_ignore = cp + template_dir + "gitignore "s + proj_name + "/.gitignore"s;
    system(git_ignore.c_str());
    
    // create main file
    auto create_main = "echo '' > "s + proj_name + "/main.cpp"s;
    system(create_main.c_str());
    
    //initialize git repo
    auto git = "git init "s + proj_name + "/"s;
    system(git.c_str());
    
    return 0;  
}