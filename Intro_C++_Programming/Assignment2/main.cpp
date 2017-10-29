#include <iostream>


int main() {

const float FACTOR = 1.9;      // Const for the multiplyer of SoyMilk & below is for the tattoo
const float TAT_FACTOR = 3.5;

// Variables

int pills;
int classes;
int gaming;
float soy;
bool tattoo;


    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Welcome to the Pill Program"<<std::endl;
    std::cout<<"Please enter the requested values when prompted"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Number of classes studied yesterday?: ";
    std::cin>>classes;
    std::cout<<std::endl;
    std::cout<<"Hours gaming?: ";
    std::cin>>gaming;
    std::cout<<std::endl;
    std::cout<<"Cups of SoyMilk Consumed?: ";
    std::cin>>soy;
    std::cout<<std::endl;
    std::cout<<"Tattoo Yesterday? (1 == yes, 0 == no) ";
    std::cin>>tattoo;
    std::cout<<std::endl<<std::endl;

    pills = static_cast<int>(((classes)/(gaming)+(soy)*(FACTOR))+(tattoo*TAT_FACTOR));

    std::cout<<"You will need to take "<<pills<<" pills today"<<std::endl;
    std::cout<<"Enjoy your day!"<<std::endl<<std::endl;



    return 0;
}