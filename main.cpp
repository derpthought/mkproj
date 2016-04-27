#include <stdlib.h>
#include <string>

// put template directory here
#define TEMPLATE_DIR "/opt/templates/c++/"

int main(int argc, char ** argv) {
    
    //verify proper number of arguments
    if(argc < 2) return 0;
    
    //arg 1 should be name of project
    auto proj_name = argv[1];
    
    //create project directory
    auto proj_dir = std::string("mkdir ") + proj_name;
    system(proj_dir.c_str());
    
    //create .vscode directory
    auto vs_dir = std::string("mkdir ") + proj_name + std::string("/.vscode");
    system(vs_dir.c_str());
    
    //copy template files
    auto tasks = std::string("cp ") + std::string(TEMPLATE_DIR) + std::string("tasks.json ") +
                 proj_name + std::string("/.vscode");
                 
                 
    system(tasks.c_str());
    
    auto cmake = std::string("cp ") + std::string(TEMPLATE_DIR) + std::string("CMakeLists.txt ") +
                 proj_name + std::string("/");
                 
    system(cmake.c_str());
    
    // create main file
    auto create_main = std::string("echo '' > ") + proj_name + std::string("/main.cpp");
    
    system(create_main.c_str());
    
    auto git = std::string("git init ") + proj_name + std::string("/");
    
    system(git.c_str());
    
    return 0; 
    
}