#include "Grading.h"

Grading::Grading() {
	this->input_grade = 0;
	this->exam = 0;
	this->final_project = 0;
	this->midterm_project = 0;
	this->num_grade = 0;
	this->task_type = "";
	this->final_project_taken = false;
	this->midterm_project_taken = false;
	this->exam_taken = false;
}

void Grading::determine_storage(unsigned int input_grade, std::string assignment_type) {
	std::string temp_string = "";

	//coverts string to all upper case letters
	for (int i = 0; i < assignment_type.length(); i++) {
		temp_string += std::toupper(assignment_type[i]);
	}

	this->task_type = temp_string;

	//if the task is an assignment, store grade into assignment vector
	if (task_type == "ASSIGNMENT") {
		assignments.push_back(input_grade);
	}

	//if the task is a lab, store grade into lab vector
	else if (task_type == "LAB") {
		labs.push_back(input_grade);
	}

	//if task is an exam, store grade as exam
	else if (task_type == "EXAM") {
		this->exam = input_grade;
		this->exam_taken = true;
	}

	//if task is the final_project, store grade as final_project
	else if (task_type == "FINAL_PROJECT") {
		this->final_project = input_grade;
		this->final_project_taken = true;
	}

	//if task is midterm project, store grade as midterrm project
	else if (task_type == "MIDTERM_PROJECT") {
		this->midterm_project = input_grade;
		this->midterm_project_taken = true;
	}

	//The task was not a valid task for this class 
	else {
		std::cout << "That is not a valid task type";
	}
}

void Grading::calculate() {
	double curr_points = 0;
	double total_points = 0;

	//loops through the all assignments inputed and adds to current points
	for (auto& elem : assignments) {
		curr_points += elem;
	}

	//loops through the all labs inputed and adds 
	for (auto& elem : labs) {
		curr_points += elem;
	}

	//adds the exam, fina poject, and midterm project grade
	curr_points += exam + final_project + midterm_project;

	//calculating the current amount of total points for the amount task taken
	if (assignments.size() != 0) {
		total_points += 100 * assignments.size();
	}
	if (labs.size() != 0) {
		total_points += 5 * labs.size();
	}
	if (exam_taken) {
		total_points += 100;
	}
	if (final_project_taken) {
		total_points += 350;
	}
	if (midterm_project_taken) {
		total_points += 30;
	}

	//calculates the numerical grade by dividing the current points you have
	//by the total points of current assignments put into the gradebook
	this->num_grade = (curr_points / total_points) * 100;
}

//Outputs the letter grade depedning on the numercial grade
void Grading::output_grade() {
	if (num_grade >= 94) {
		this->letter_grade = "A";
	}
	else if (num_grade >= 90) {
		this->letter_grade = "A-";
	}
	else if (num_grade >= 87) {
		this->letter_grade = "B+";
	}
	else if (num_grade >= 83) {
		this->letter_grade = "B";
	}
	else if (num_grade >= 80) {
		this->letter_grade = "B-";
	}
	else if (num_grade >= 77) {
		this->letter_grade = "C+";
	}
	else if (num_grade >= 73) {
		this->letter_grade = "C";
	}
	else if (num_grade >= 70) {
		this->letter_grade = "C-";
	}
	else if (num_grade >= 67) {
		this->letter_grade = "D+";
	}
	else if (num_grade >= 60) {
		this->letter_grade = "D";
	}
	else if (num_grade >= 0) {
		this->letter_grade = "F";
	}
	else {
		this->letter_grade = "not a valid grade";
	}

	std::cout << "Your letter grade is: " << letter_grade << std::endl;
	std::cout << "Your numerical grade is: " << num_grade << std::endl;

}