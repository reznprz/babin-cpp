#include <iostream>
#include <iomanip>
#include <list>

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

    // loop to ask user input because we need to ask multple input
    while (true)
    {
        // input name
        string name;
        cout << "Please enter student name : ";
        cin >> name;

        // input course
        string course;
        cout << "Please enter course and mark (one decimal point): ";
        cin >> course;

        // input mark
        double mark;
        cin >> mark;

        string grade = calculateGrade(mark);

        // Create a new Student object with the input data
        // in first input we create the student obj and in line 65 we add that to the list.
        Student student = {name, course, mark, grade};

        // Add the new student to the list
        // students.emplace_back(&student);
        students.push_back(student);

        // to break the loop once user provide enough input
        string completed;
        cout << "type 'done' to finish and 'continue' to continue): ";
        cin >> completed;
        if (completed == "done")
        {
            break;
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
