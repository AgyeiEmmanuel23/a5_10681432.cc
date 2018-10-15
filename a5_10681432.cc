#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct stud {
    int id_num;string name;
    int age;string gen;
    double scor;
    char grad;
};
int main(int agrc, char **argv) 
{

    double totAge = 0.0000;
    double totScor = 0.0000;
    int maleCnt = 0;
    int femaleCnt = 0;

    {
   int  stud[5][0];
    ofstream fin;
    fin.open("Student.txt");
    fin << "ID_Number\tName\tAge\tGender\tScore\tGrade\t" << endl;

    for (int id = 0; id < 2; id++) 
	{
        cout << "Student " << id + 1 << "\t" << endl;
        cout << "Enter your Student ID Number: ";
        cin >> stud[id].id_num;
        fin << stud[id].id_num << "\t";


        cout << "Enter your name: ";
        cin >> stud[id].name;
        fin << stud[id].name << "\t";

        cout << "Enter your age: ";
        cin >> stud[id].age;
        fin << stud[id].age << "\t";

        cout << "Enter your Gender:Male or Female ";
        cin >> stud[id].gen;
        fin << stud[id].gen << "\t";

        cout << "Enter your score: ";
        cin >> stud[id].scor;
        fin << stud[id].scor << "\t\t";

        if (stud[id].scor >= 80 && stud[id].scor<= 100) {
            stud[id].grad = 'A';
        } else if (stud[id].scor>= 70 && stud[id].scor <= 79) {
            st[id].grade = 'B';
        } else if (stud[id].scor >= 60 && stud[id].scor<= 69) {
            stud[id].grad = 'C';
        } else if (stud[id].scor>= 50 && stud[id].scor <= 59) {
            stud[id].grade = 'D';
        } else if (stud[id].score >= 40 && stud[id].scor <= 49) {
            stud[id].grad = 'E';
        } else if (stud[id].scor >= 0 && stud[id].scor <= 39) {
            stud[id].grad = 'F';
        } else { cout << "Enter a valid score."; }
        fin << stud[id].grad << "\n";
        cout << endl;
        totAge += stud[id].age;
        totScor += stud[id].scor;

        if (stud[id].gen == "male")
		 {
            maleCnt ++;
        } else {
            femaleCnt++;
        }
    }
    fin << "Average Age :" << totAge / 5 << endl;
    fin << "Average Score:" << totScor / 5 << endl;
    fin << "Male Count :" << maleCnt << endl;
    fin << "Female Count :" << femaleCnt << endl;
    
	return 0;
}
