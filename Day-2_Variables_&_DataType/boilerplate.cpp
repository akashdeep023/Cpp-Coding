#include <iostream> // All Preprocessor directives start with # Eg- #include, #define etc.
//Header files include pre-written code that's required to execute our program. Eg- iostream, vector etc.3
#define PI 3.14 // Macros (Preprocessor directive)-> Symbolic constants
using namespace std; // Standard C++ Namespace is called std (declare all namespace in std)

int main(){ //main function (Starting point of execution)
    // logic
    cout << "Hello world!";
    cout << PI;
    std::cout << "Hello Namespace!"; // cout defined -> iostream header file And declara -> namespace std
    return 0;
}
// ; => statements terminator
// How does code run?
// Source code (file.cpp) => Compile => Executable code(file.exe) => Output