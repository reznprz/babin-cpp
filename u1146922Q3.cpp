#include <list>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <typeinfo>

using namespace std;

// object in cpp 11 standard we create a struct like we did class on q1
struct Student
{
    string name;
    string course;
    double mark;
    string grade;
};

// calucation func
string calculateGrade(double mark)
{
    if (mark >= 85.0)
    {
        return "HD";
    }
    else if (mark >= 75.0)
    {
        return "A";
    }
    else if (mark >= 65.0)
    {
        return "B";
    }
    else if (mark >= 50.0)
    {
        return "C";
    }
    else
    {
        return "F";
    }
}

int main()
{

    // creating the list of student so that when we ask user input we create the list of each input
    std::list<Student> students;

    // opening the connection to input file with filename
    std::ifstream myfile("q3data.txt");

    // finally open the file
    if (myfile.is_open())
    {
        char mychar;
        // error handling for corrupted file
        if (!myfile)
        { // file couldn't be opened
            cerr << "Error: file could not be opened" << endl;
            exit(1);
        }

        //readind file 3 line at a time
        std::string name, course, mark;
        while (std::getline(myfile, name) &&
               std::getline(myfile, course) &&
               std::getline(myfile, mark))
        {

            // process the three lines here
            // just for understanding need to remove before submit
            std::cout << "Line 1: " << name << std::endl;
            std::cout << "Line 2: " << course << std::endl;
            std::cout << "Line 3: " << mark << std::endl;

            double doubleMark = std::stod(mark);

            string grade = calculateGrade(doubleMark);

            // just for understanding need to remove before submit
            std::cout << "grade " << grade << std::endl;

            // Create a new Student object with the input data
            // in first input we create the student obj and in line 65 we add that to the list.
            Student student = {name, course, doubleMark, grade};
            students.push_back(student);
        }
    }

    std::cout << std::setfill('+') << std::setw(45) << "+" << std::endl;
    std::cout << right << std::setfill(' ') << std::left << std::setw(14) << "Name"
              << std::setw(10) << "Course" << std::setw(10) << "Mark" << std::setw(10) << "Grade" << std::endl;

    // looping student list for using for each so that we don't have to create std again for each student
    for (const Student &student : students)
    {

        std::cout << right << std::setfill(' ') << std::left << std::setw(14) << student.name
                  << std::setw(10) << student.course << std::setw(10) << student.mark << std::setw(10) << student.grade << std::right << "\n";
    }

    std::cout << std::setfill('+') << std::setw(45) << "+" << std::endl;
    return 0;
}