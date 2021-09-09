 #include <iostream>


enum Color : int; // Okay


int main()
{
    std::cout << "Hello World!\n";

    int inputColor{};
    std::cin >> inputColor;

    Color color{ static_cast<Color>(inputColor) };
    std::cout << color;
    return 0; 
}

enum Color
{
    color_black, // assigned 0
    color_red, // assigned 1
    color_blue, // assigned 2
    color_green, // assigned 3
    color_white, // assigned 4
    color_cyan, // assigned 5
    color_yellow, // assigned 6
    color_magenta // assigned 7
};
