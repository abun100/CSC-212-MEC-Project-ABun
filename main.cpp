#include <iostream>
#include "Grading.h"

Grading ReadFile(std::string file_name, Grading grade) {
    // Opens the file for reading
    std::ifstream file(file_name);

    // Creates a string to hold each line in temporarily
    std::string str;

    // Iterates over the file, storing one line at a time into `str`
    while (std::getline(file, str)) {
        // Create a stringstream object with our line of integers from the file
        std::istringstream ss(str);

        //uses substring to find the task in the string
        std::string task = str.substr(str.find(" ") + 1, str.length());

        // Create a double that will hold our extracted value from the string
        double token;

        // While there are still numbers in this string, extract them as doubles
        while (ss >> token) {
            grade.determine_storage(token, task);
        }
    }
    return grade;
}

int main(int argc, char* argv[])
{
    int input = std::stoi(argv[3]);
    std::string task_type= argv[4];
    std::string file_name = argv[2];

    Grading grade;
    grade = ReadFile(file_name, grade);
    grade.calculate();
    grade.output_grade();
}


/*
input grades 
    - file that includes the number grade and task type 
    - command line should take in 1. File name, 2. number grade, and 3. task type

Read File and Write File
    - If command line has a grade and task type to input, then write data into text file
    - else then just read file and pass data from text file into gradebook class

stores grades into respective categories
    - stores the value into its respective vector or field

do calc. for final grade
    - add up all the current_points 
    - then current points divided by all possible total_points 

output final grade
    - output final grades as number 
    - letter if/else 
        - depending on numerical scale, grade is A,B,C....
 */
