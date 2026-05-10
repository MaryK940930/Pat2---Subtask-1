
#include <iostream>
#include <string>
using namespace std;

// letters to return Morse code
string morse(char c)
{
    switch(toupper(c))
    {
        case 'A': return ".-";
        case 'B': return "-...";
        case 'C': return "-.-.";
        case 'D': return "-..";
        case 'E': return ".";
        case 'F': return "..-.";
        case 'G': return "--.";
        case 'H': return "....";
        case 'I': return "..";
        case 'J': return ".---";
        case 'K': return "-.-";
        case 'L': return ".-..";
        case 'M': return "--";
        case 'N': return "-.";
        case 'O': return "---";
        case 'P': return ".--.";
        case 'Q': return "--.-";
        case 'R': return ".-.";
        case 'S': return "...";
        case 'T': return "-";
        case 'U': return "..-";
        case 'V': return "...-";
        case 'W': return ".--";
        case 'X': return "-..-";
        case 'Y': return "-.--";
        case 'Z': return "--..";
        default: return "";
    }
}

int main()
{
    string message;
    string fullMorse = "";

    cout << "Enter a message in English: ";
    getline(cin, message);

    cout << "\nOutput Morse code:\n";

    for(char c : message)
    {
        if(c != ' ')
        {
            string code = morse(c);

            // print each letter
            cout << char(toupper(c)) << ": " << code << endl;

            // build full message
            fullMorse += code + "   ";
        }
    }

    cout << "\nFull Morse code with spaces:\n";
    cout << fullMorse << endl;

    return 0;
}
