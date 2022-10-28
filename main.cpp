#include <iostream>
#include "Grading.h"

Grading ReadFile(std::string file_name, Grading grade) {
    // Opens the file for reading
    std::ifstream file(file_name);

    // Creates a string to hold each line in temporarily
    std::string str;

    // Iterates over the file, storing one line at a time into `str`
    while (std::getline(file, str)) {
        // Create a stringstream object with our grade and task type from the text file
        std::istringstream ss(str);

        //uses substring to find the task in the string
        std::string task = str.substr(str.find(" ") + 1, str.length());

        // Create a double that will hold our extracted value from the string
        double token;

        //Extract the doubles in the string and pass the grade and task type to the gradebook class
        while (ss >> token) {
            grade.determine_storage(token, task);
        }
    }
    return grade;
}

void WriteFile(std::string file_name, std::string task, int grade) {
    // Open our file with write permissions
    std::ofstream output_file(file_name, std::ios::app);

    //writes our command line arguments into the text file
    output_file << "\n" << grade << " " << task;

    //close file
    output_file.close();

}

int main(int argc, char* argv[])
{
    std::string file_name = argv[2];

    //Runs only if a task and grade is inputed
    //writes command line arguments to file
    if (argc > 3) {
        int input = std::stoi(argv[3]);
        std::string task_type = argv[4];
        WriteFile(file_name, task_type, input);
    }

    //Reads the file and created a gradebook object
    Grading grade;
    grade = ReadFile(file_name, grade);
    grade.calculate();
    grade.output_grade();
}


/*
input grades
    - file that includes the number grade and task type
    - command line should take in 1. File Location 2. File name, 3. number grade, and 4. task type
Read File and Write File
    - If command line has a grade and task type to input, then write data into text file
    - else then just read file and pass data from text file into gradebook class
stores grades into respective categories
    - stores the value into its respective vector or field
    - if an exam, final project, or midterm project is inputed, mark it as taken (true)
do calc. for final grade
    - add up all the current_points
    - then current points divided by all possible total_points
output final grade
    - output final grades as number
    - letter if/else
        - depending on numerical scale, grade is A,B,C....
 */