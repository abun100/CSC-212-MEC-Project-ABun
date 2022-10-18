#pragma once
#include <vector>
#include <string>
#include <locale>
#include <iostream>
#include <fstream>
#include <sstream>

class Grading
{
private:
	//vector of assignment grades
	std::vector<double> assignments;

	//vector of lab grades
	std::vector<double> labs;

	//the grade for the final exam
	unsigned int exam;
	bool exam_taken;

	//the grade for the final project
	unsigned int final_project;
	bool final_project_taken;

	//the grade for the midterm project
	unsigned int midterm_project;
	bool midterm_project_taken;

	//the raw grade the user is inputing 
	unsigned int input_grade;

	//the task the user did 
	std::string task_type;

	//your final grade 
	std::string letter_grade;
	double num_grade;

public:
	//Deafualt Constructor - assigns input grade and assignment type
	Grading();

	//determine where the value is being stored based on task
	void determine_storage(unsigned int i_grade, std::string assignment_type);

	//calulates categorical grades
	void calculate();

	//ouput final grade
	void output_grade();
};

