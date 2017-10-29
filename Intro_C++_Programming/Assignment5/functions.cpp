// Steven Swiney
// CS 1570


#include "header.hpp"


void greeting()  {
    std::cout<<"Welcome to this program that calculates fake stuff"<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Let's get started collecting some numbers, follow the prompts"<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;

}

void signoff()  {
    std::cout<<"Wow thanks for running dis shit hopefully you got all your measurements"<<std::endl;
}

float waist_measure(float &waist)  {

    while(waist <= 0) {
        std::cout << "What is the waist measurement of the pants? (Must be positive integers)" << std::endl;
        std::cout << std::endl;
        std::cin >> waist;
        std::cout << std::endl;
        std::cout << std::endl;
    }

    return waist;
}



float leg_length(float &leg)  {

    while(leg <= 0) {
        std::cout << "What is the leg length of the pants? (Must be positive integers)" << std::endl;
        std::cout << std::endl;
        std::cin >> leg;
        std::cout << std::endl;
        std::cout << std::endl;
    }

    return leg;
}



float water_toler(float &water_tol)  {

    while(water_tol <= 0) {
        std::cout << "What is the water tolerence of the pants? (Must be positive integers)" << std::endl;
        std::cout << std::endl;
        std::cin >> water_tol;
        std::cout << std::endl;
        std::cout << std::endl;
    }

    return water_tol;
}


float inseam(float &waist, float &inseam_val, const float &INSEAM)  {

    std::cout<<"The inseam of these pants are...."<<std::endl;
    inseam_val = waist*INSEAM;
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<"The calculated inseam value is : "<<inseam_val<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;

    return inseam_val;
}

bool pants_water_val(float &water_tol, float &leg, float &inseam_val, bool &high_water_pants)  {


    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<"The water tolerance is "<<water_tol<<std::endl;
    std::cout<<"The leg length and and inseam value is "<<leg<<" ; "<<inseam_val<<" respectively"<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;

    if ((leg - inseam_val) >= water_tol)  {
        high_water_pants = true;
    } else
        high_water_pants = false;

    return high_water_pants;

}
void water_pants_msg(bool &high_water_pants)  {

    if(high_water_pants == true)  {
        std::cout<<std::endl;
        std::cout<<std::endl;
        std::cout<<std::endl;
        std::cout<<"Great pair of high-waters!"<<std::endl;
    } else  {
        std::cout<<std::endl;
        std::cout<<std::endl;
        std::cout<<std::endl;
        std::cout<<"These pants are NOT high-water enough for you!"<<std::endl;
    }
    std::cout<<std::endl;
    std::cout<<std::endl;

}

