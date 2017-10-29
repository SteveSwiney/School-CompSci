// Steven Swiney
// CS 1570

#include "header.hpp"


int main() {

const float INSEAM = 0.9;
std::string name;
float waist = 0;
float leg = 0;
float water_tol = 0;
float inseam_val = 0;
bool high_water_pants = false;

    greeting();
    std::cout<<"First, enter your name (one word): "<<std::endl;
    std::cout<<std::endl;
    std::cin>>name;

    waist_measure(waist);
    leg_length(leg);
    water_toler(water_tol);

    inseam(waist,inseam_val,INSEAM);

    pants_water_val(water_tol,leg,inseam_val,high_water_pants);
    water_pants_msg(high_water_pants);


    signoff();

    return 0;
}

