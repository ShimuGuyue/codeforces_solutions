#include <iostream>
#include <map>

int main(void)
{
    std::map<std::string, int> notes;
    notes["C"]  = 0;
    notes["C#"] = 1;
    notes["D"]  = 2;
    notes["D#"] = 3;
    notes["E"]  = 4;
    notes["F"]  = 5;
    notes["F#"] = 6;
    notes["G"]  = 7;
    notes["G#"] = 8;
    notes["A"]  = 9;
    notes["B"]  = 10;
    notes["H"]  = 11;
    std::string first, second, third;
    std::cin >> first >> second >> third;
    int a(notes[first]);
    int b(notes[second]);
    int c(notes[third]);
    if ((a + 4) % 12 == b && (a + 7) % 12 == c)
        std::cout << "major" << std::endl;
    else if ((a + 4) % 12 == c && (a + 7) % 12 == b)
        std::cout << "major" << std::endl;
    else if ((b + 4) % 12 == a && (b + 7) % 12 == c)
        std::cout << "major" << std::endl;
    else if ((b + 4) % 12 == c && (b + 7) % 12 == a)
        std::cout << "major" << std::endl;
    else if ((c + 4) % 12 == a && (c + 7) % 12 == b)
        std::cout << "major" << std::endl;
    else if ((c + 4) % 12 == b && (c + 7) % 12 == a)
        std::cout << "major" << std::endl;

    else if ((a + 3) % 12 == b && (a + 7) % 12 == c)
        std::cout << "minor" << std::endl;
    else if ((a + 3) % 12 == c && (a + 7) % 12 == b)
        std::cout << "minor" << std::endl;
    else if ((b + 3) % 12 == a && (b + 7) % 12 == c)
        std::cout << "minor" << std::endl;
    else if ((b + 3) % 12 == c && (b + 7) % 12 == a)
        std::cout << "minor" << std::endl;
    else if ((c + 3) % 12 == a && (c + 7) % 12 == b)
        std::cout << "minor" << std::endl;
    else if ((c + 3) % 12 == b && (c + 7) % 12 == a)
        std::cout << "minor" << std::endl;

    else
        std::cout << "strange" << std::endl;
    return 0;
}