#include <iostream>

using namespace std;

int main() {

int T;
int H;  //H and W are user inputs for Height&Width
int W;
int distanceA;
int distanceB;
int distanceC;
int temp;
int inRange = 0;
int RaD_bots = 0;


    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Enter the number of test cases"<<endl;
    cin>>T;
    cout<<endl;
    cout<<endl;

    for(int i=0; i < T;i++) {
        cout<<endl;
        cout<<endl;
        cout << "Enter the Height of the grid and Width of the grid, respectively" << endl;
        cin >> H >> W;


        double **p = new double *[H];
        for (int j=0;j<H;j++) {
            p[j] = new double[W];
        }
            for(int k=0;k<H;k++)  {
                for(int l=0;l<W;l++)  {
                    cin>>p[k][l];
                }
            }
            cout<<endl;

        // Array output
            for(int o=0;o<H;o++)  {
                for(int k=0;k < W;k++)  {
                    cout<< p[o][k] << " ";
                }
            cout<<endl;
            }


        // RAD Test
        for(int a=0;a<H;a++)  {
            for(int b=0;b<W;b++)  {
                if (p[a][b] > 0)  {
                    for(int y=0;y<H;y++)  {  // Searching through the array
                        for(int x=0;x<W;x++)  {
                            if(y != a && p[a][b] > 0)  {
                              distanceA = y-a;
                              distanceB = x-b;
                              distanceA = (distanceA*distanceA);
                              distanceB = (distanceB*distanceB);
                              distanceC = distanceA+distanceB;
                                if (p[a][b] >= p[y][x])  {
                                    temp = p[y][x];
                                } else  {
                                    temp = p[a][b];
                                }
                                temp= (temp*temp);
                                if (distanceC <= temp)  {
                                    inRange++;
                                }

                            }
                        }
                    }

                    if (inRange < 2)  {
                        RaD_bots++;
                    }

                    inRange=0;

                }
            }
        }

            cout << "Hive mind " << T << " has " << RaD_bots << " isolated members." << endl;
            // Deallocate Array

            for(int d=0;d<H;d++)  {
                delete[] p[d];
            }
            delete[] p;
            p=NULL;


    }


    return 0;
}