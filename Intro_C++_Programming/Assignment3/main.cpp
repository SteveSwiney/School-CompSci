#include <iostream>
#include <cstring>

int main() {

// Part 1 : Inputs & Consts
const float CORNEA_MAX = 20;
const float CORNEA_MIN = 1;
float cornea_size = 0;
const std::string P = "P";
const std::string B = "B";
const std::string C = "C";

// Part 2 : Variables , inputs & consts
int start = 0;
int x1 =0;
int x2 =0;
int x = 0;
const std::string IN = "iN";
const std::string LI = "Li";

// Part 3 : Variables and such
const int MIN_LINE = 1;
const int MAX_LINE = 9;
int line = 0;
const std::string N = "N";
const std::string KE = "Ke";

// Part 4 : Strings and variables
const std::string D = "d";
const std::string KY = "ky";
const std::string H = "h";
const std::string YE = "ye";

// Each part that will be concatenated
std::string part1;
std::string part2;
std::string part3;
std::string part4;
// Final string
std::string Prescription;

/* ------------------------------- Program Begins with output + user intro ---------------*/

std::cout << std::endl;
std::cout << std::endl;
std::cout << std::endl;

std::cout<<"This is the sight test.  Please follow the onscreen instructions carefully"<<std::endl;
std::cout<<"You don't want to poke your eye out!"<<std::endl<<std::endl;

// Part 1 : first part of the program to find the Prescription,
// based on cornea size determines the first letter & part 2 start number

    while (cornea_size > CORNEA_MAX || cornea_size < CORNEA_MIN) {
        std::cout << "Measure your Cornea and type the size here (Between 1 and 20)" << std::endl;
        std::cin >> cornea_size;
        std::cout << std::endl;
    }
    if(cornea_size <= 5 && cornea_size >= 1) {
        part1 = P;
        start = 1;
    }
    else if (cornea_size >= 6 && cornea_size <= 10) {
        part1 = B;
        start = 2;
    }
    else if (cornea_size >= 11 && cornea_size <= 20)  {
        part1 = C;
        start = 3;
    }
    else
        std::cout<<"Invalid, how'd you even do that?"<<std::endl;

// Part 2 : equation & average to find the prescription (Based on given formula)

    x1 = ((( start * 7919 + 104729)) % 101 ) +  150;
    x2 = (((x1  * 7919 + 104729)) % 101 )  +  150;
    x = ((x1+x2)/2);
    if (x >= 150 && x<=200)
        part2 = IN;
    else if (x > 200 && x <= 250)
        part2 = LI;

// Part 3 : Output a Eye test chart & user enters when they see an upside down E

    while (line > MAX_LINE || line < MIN_LINE) {
        std::cout<< "Next you are going to be getting an eye Test.  Enter the line number that you see a W instead of an E"<< std::endl;
        std::cout<<std::endl;
        std::cout<<std::endl;
        std::cout << "Line           Enter the line # where the first W you see is          "<< std::endl;
        std::cout << "1                  E     " << std::endl;
        std::cout << "2                 E E    " << std::endl;
        std::cout << "3                W E E   " << std::endl;
        std::cout << "4               E E E E  " << std::endl;
        std::cout << "5              E E E E E " << std::endl;
        std::cout << "6              E E E E E " << std::endl;
        std::cout << "7              E E E E E " << std::endl;
        std::cout << "8              E E E E E " << std::endl;
        std::cout << "9              EEEEEEEEE " << std::endl;
        std::cout<<std::endl;
        std::cin >> line;
        if (line > 9 || line < 1)  {
            std::cout<<"Not a valid line number, please try again.  Enter an integer"<<std::endl;
        }

        if (line == 1)  {
            part3 = N;
        }
        else if (line == 2)  {
            part3 = KE;
        }
        else if (line == 3 )  {
            part3 = P;
        }

    }
// Part 4 : Get's last part of the prescription based on previous strings...

    if (part1 == P || part1 == B && part3 == N)  {
        part4 = D;
    }
    else if (part1 == C && part3 == N)  {
        part4 = KY;
    }
    else if(part2 == IN && part3 == P)  {
        part4 = H;
    }
    else {
        part4 = YE;
    }

// Final concatenation of the strings into the prescription

    Prescription = part1+part2+part3+part4;

    std::cout<<"Based on your inputs & vision test, your prescription number is:  "<<std::endl;
    std::cout<<std::endl;
    std::cout<<Prescription;
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Thank you for visiting the cheap eye doctor that we all wished existed"<<std::endl;


    return 0;
}