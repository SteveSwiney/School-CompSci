#include <iostream>


int roots(int x);
int sine(int x);
int exp(int x);



int main() {

int x = 0;
int choice = -1;

while (choice != 0)  {
    std::cout<<std::endl;
    std::cout<<" ==== ** Math Helper v1.0.0 ** ==== "<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<" ---- Functions ---- "<<std::endl;
    std::cout<<"_____________________"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"1.  Exponential of X"<<std::endl;
    std::cout<<"2.  Sine of X"<<std::endl;
    std::cout<<"3.  Roots of X"<<std::endl;
    std::cout<<"0.  Exit"<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;

    std::cin>>choice;

    if (choice == 1)  {
        exp(x);
    }
    else if (choice == 2)  {
        sine(x);
    }
    else if (choice == 3)  {
        roots(x);
    }
    else
        std::cout<<"Invalid Option"<<std::endl;
}

    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<" ~~ Thank you for using ~~ "<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;



    return 0;
}


int exp(int x)  {
x=-1;
    while ( x < 0 || x > 7) {
        std::cout << "Enter the value of X to raise to e (must be an integer)" << std::endl;
        std::cout << std::endl;
        std::cin >> x;
        if (x < 0 || x > 7)  {
            std::cout<<"Invalid input, please enter an integer between 0 and 7 inclusive"<<std::endl;
        }
    }

    x = 1 + x + ((x*x)/2) + ((x*x*x)/6) + ((x*x*x*x)/24) + ((x*x*x*x*x)/120) + ((x*x*x*x*x*x)/720);
    std::cout<<"The value of e^x is : "<<x<<std::endl;
    std::cout<<"Returning to main menu"<<std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    return x;
}




int sine(int x)  {

    // sin(x) = x1/1! - x3/3! + x5/5! - ... + x2k-1/(2k-1)!           k = 1, 2, 3, ...
int k = 0;

    std::cout << "This will calculate the sin(x) using the Taylor Series.  " << std::endl;
    std::cout<<"Enter a value for X"<<std::endl;
    std::cout<<std::endl;
    std::cin>>x;
    std::cout<<std::endl;
    std::cout<<std::endl;

    while (k > 5 || k < 1) {
        std::cout << "This will calculate the sin(x) using the Taylor Series.  " << std::endl;
        std::cout << "Please enter a k value to represent the iterations" << std::endl;
        std::cout << "(k must be between 1 and 5 inclusive)" << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cin >> k;
        std::cout << std::endl;
    }

    std::cout << "K was selected to be : " << k << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "___________Calculating___________" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    if (k == 1) {
        x = (x / 1);
    } else if (k == 2)  {
        x = (x / 1)-((x*x*x)/3*2*1);
    } else if (k == 3)  {
        x = (x / 1)-((x*x*x)/(3*2*1)) + ((x*x*x*x*x)/(5*4*3*2*1));
    } else if (k == 4)  {
        x = (x/1)-((x*x*x)/(3*2*1))+((x*x*x*x*x)/(5*4*3*2*1))-((x*x*x*x*x*x*x)/(7*6*5*4*3*2*1));
    } else if (k == 5)  {
        x = (x/1)-((x*x*x)/(3*2*1))+((x*x*x*x*x)/(5*4*3*2*1))-((x*x*x*x*x*x*x)/(7*6*5*4*3*2*1))+((x*x*x*x*x*x*x*x*x)/(9*8*7*6*5*4*3*2*1));
    }

    std::cout<<"The answer is sin("<<x<<") for "<<k<<" iterations"<<std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    return x;
}


int roots(int x)  {

int choice_roots = -1;
x = -1;

while (choice_roots != 0) {
    std::cout << " ==== ~~ Root Calculator ~~ ==== " << std::endl;
    std::cout << std::endl;
    std::cout << " ---- Options ---- " << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "1.  Enter X" << std::endl;
    std::cout << "2.  Square Root" << std::endl;
    std::cout << "3.  Cube Root" << std::endl;
    std::cout << "0.  Exit" << std::endl;
    std::cin >> choice_roots;

    if (choice_roots == 1) {
        std::cout<<"Enter the value of X to use as an integer"<<std::endl;
        std::cout<<std::endl;
        std::cin>>x;
    } else if (choice_roots == 2) {
        std::cout<<"The square root of X is..."<<std::endl;
        std::cout<<std::endl;
        std::cout<<std::endl;
        std::cout<<std::endl;
        std::cout << "___________Calculating___________" << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout<<"X is "<<x<<std::endl;
        x = x*x;
        std::cout<<"After the operation X is now... "<<x<<std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
    } else if (choice_roots == 3)  {
        std::cout<<"The Cube root of X is..."<<std::endl;
        std::cout<<std::endl;
        std::cout<<std::endl;
        std::cout<<std::endl;
        std::cout << "___________Calculating___________" << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout<<"Before:  X is "<<x<<std::endl;
        x = (x*x*x);
        std::cout<<"After:  X is now... "<<x<<std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
    } else if (choice_roots == 0 && x == -1) {
        x=0;
        choice_roots = 0;
    } else {
        std::cout << "Invalid Selection" << std::endl;
    }


}


    return x;
}


