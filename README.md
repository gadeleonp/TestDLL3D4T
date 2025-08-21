Documentation for the C++ Plugin
 - How to build the C++ plugin:
 1. Ensure you have a compatible C++ compiler and build system set up. I used visual studio community with c++ (Version C++ 14 or later is recommended).)
 2. Create a DLL (Dynamic Link Library) project in your IDE.
 3. Modify the TestDLL3D4T.cpp fil adding the functions for this project. 
 4. Modify the TestDLL3D4T.h file to include the necessary headers and declare the functions.
 5. Ensure the project settings are configured to output a DLL.
 
 - How to compile the plugin in C#:
 1. I  used the Compile->Compile Solution option in Visual Studio.
 2. Copy the compiled DLL file to the appropriate plugins directory of your application.
 3. Ensure that the application is configured to load plugins from that directory, I copied it to the plugins directory of the application.The DLL file has to be in the same
 directory as the executable file of the application en C#. 


 - Data structure format and memory handling approach
 The plugin uses a simple data structure to store the 3D points and their associated data. The data is stored in a vector of structs, where each struct contains the necessary 
 information for a point. 
 Memory is managed using standard C++ containers, which handle allocation and deallocation automatically.
 For the C# console project, I didn't use any specific data structures except for the Vector. I think an easy data structure that wall used was a LinkedList. 
 
For the memory management I used the malloc function to allocate memor for the array of vertex structures in this case I send the intenger number 8 as a paramter so the malloc functions
uses this number to allocate the memory for 8 vertex structures.



Enhacements:
I think that the management of memory can by the compilers since they have a better garbage collector that can help to manage the memory in a better way.
I used the MSVC 14.3x (Visual Studio 2022)
In visual studio the Standad language for C++ : Default (standard ISO C++ 14) 

