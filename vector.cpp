//comsc 210|Lateefah Camacho| Lab 13
// vs code
#include <iostream>
#include <array>
#include <string>
#include <fstream>
using namespace std;
//Declare const for values that should not change
const int SIZE = 30;

int main()
{
//declarations
   vector<string >pillSchedule;
       
   ifstream fin;
    fin.open("pillSchedule.txt");

    // 3. Read from the file INTO the array
    if(fin.good()) {
        string line;
        //replace for loop with while
        while(getline(fin, line)){ //read unknown number of lines
            pillSchedule.push_back(line) // add each line to vector
        }

          }
        fin.close(); // Close file
    
        }
        cout<< "1. SIZE:  "<<pillSchedule.size()<<endl;

        //range loop to access elements
        cout << "2. Pills ";
        for(string pill: pillSchedule) cout << pill <<" ";cout<<endl;

        //accessing individual elements
        cout << "3. Elemet 2: " << pillSchedule.at(2) <<endl;
        cout << "4. Element 2: "<< pillSchedule[2] <<endl;
        cout << "5. Front: "   <<  pillSchedule.front() <<endl;
        cout << "6. Back: " <<pillSchedule.back() << endl;
        cout << "7. Empty? " << (pillSchedule.empty() == 0? "False:" : "True")<<endl;
        cout << "8. Address? " <<pillSchedule.data()<<endl;

    return 0;
     
  
}