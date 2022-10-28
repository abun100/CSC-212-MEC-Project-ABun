# CSC-212-MEC-Project-ABun
MEC Project, Aaron, David, Alex

## Summary:
  This program works to give the current grade of a student's grades so far in the semester. The github address includes the entire compiled programmed across 3 files (main.cpp, Grading.cpp, Grading.h). As well as mock datasets (grades.txt) that store the grade values and task types.
<br/>
<br/>
## Group Contributions: <br/>
Aaron wrote the calculate(), determine_storage() and output_grade() functions in Grading.cpp. <br/>
Alex programmed the read/write files and also wrote part of the read.me. <br/>
David designed our plan about how to create the gradebook and it features. Was also responsible for writing the main.cpp. He also wrote the psuedocode for the readme.md. <br/>
<br/>
## Pseudocode:<br/>

 if grade and task is inputed <br/>
 &emsp; write to file the grade and task type <br/>
 Read the File<br/>
 while there are lines left in file:<br/>
 &emsp; insert our grade and task into the gradebook<br/>
 calculate grade<br/>
 &emsp; add up all current points<br/>
 &emsp; divide by total points<br/>
 output grade<br/>
 &emsp; output letter grade depending on the number grade
 
<br/>

## Features:
1. The output will always return the current grade for a student given the input. If no grade is inputed for a task in the command line, an output will still be calculated from the text file's remaining grades. <br/>
2. Our program allows ease of access of a student's grade anytime during the semester for CSC 212. This feature was important to us becuase we wanted to develop a progam that would successfully ouput your current grade anytime during the semester. This way the desriable outcome will still be given even without all the possible grade types passed in. <br/>
3. We used a text file to stores grades. This way the grades our being stored somewhere and do not have to be reentered. The read_file function will just read through the file and automatically reenter the data.

<br/>

## Input/Compiling:
The input is put in through the command line and its arguments are the file directory, string file name, int grade, string task.
  Program will compile with `g++ main.cpp Grading.cpp -o prog`. This will allows the for the rest of the prorgram to continue any outputting. <br/>
  <br/>
If a grade needs to be inputed
  ```
  file directory - location of the program/files 
  file name - the name of the text file 
  grade - an grade integer
  task - the type of task (ex. "assignment")
  ```
If you wish to just check your grade status, do not include the grade and task in the command line
   ```
   $ .\review_project grades.txt 100 assignment
   $ .\review_project grades.txt
   ```
 Task Options are `"Assignment"`, `"Lab"`, `"Midterm_project"`, `"Final_project"`, or `"Exam"` <br/>
 **Capitalization does not matter, however spelling does matter. Only these options are availabe.** <br/>
 ```
 lab (0-5)
 assignment (0-100)
 midterm_project (0-30)
 final_project (0-350)
 exam (0-100)
 ```
  Grade values are with respect to their categorical values. Meaning not every task is out of 100. 
 ## Output
```
Your letter grade is: A-
Your numerical grade is: 92.5373
```
