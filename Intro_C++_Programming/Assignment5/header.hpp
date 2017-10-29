// Steven Swiney
// CS 1570

#include <iostream>
#include <string>




#ifndef ASSIGNMENT5_HEADER_HPP
#define ASSIGNMENT5_HEADER_HPP

void greeting();
void signoff();
float waist_measure(float &waist);
float leg_length(float &leg);
float water_toler(float &water_tol);
float inseam(float &waist, float &inseam_val, const float &INSEAM);
bool pants_water_val(float &water_tol, float &leg, float &inseam_val, bool &high_water_pants);
void water_pants_msg(bool &high_water_pants);


#endif //ASSIGNMENT5_HEADER_HPP
