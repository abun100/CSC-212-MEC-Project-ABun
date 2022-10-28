# CSC-212-MEC-Project-ABun
MEC Project, Aaron, David, Alex

## Summary:
  This program works to give the current grade of a student's grades so far in the semester. The github address includes the entire compiled programmed across 3 files (main.cpp, Grading.cpp, Grading.h). As well as mock datasets (grades.txt) that store the grade values and task types.
<br/>
<br/>
## Group Contributions: <br/>
Aaron wrote the calculate(), determine_storage() and output_grade() functions in Grading.cpp. <br/>
Alex programmed the read/write files and also wrote part of the read.me. <br/>
David designed our plan about how to create the gradebook and it features. Was also responsible for writing the main.cpp. He also wrote the psuedocode and did part of the readme.md. <br/>
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
The output will always return the current grade for a student given the input. If no grade is inputted for a task in the .txt file, an output will still be calculated that still outputs the current grade. This development was important to us becuase we wanted to be able to make a prgams that would successuflly ouput the current grade and at the same time would be successful even in the case that there is not a grade for a certain task. This way the desriable outcome will still be given even without all the possible grade types filled.
<br/>

## Input/Compiling:
If a grade needs to be inputed
  ```
  file directory - location of the program/files 
  file name - the name of the text file 
  grade - an grade integer
  task - the type of task (ex. "Lab")
  ```
If you wish to just check your grade status, do not include the grade and task in the command line
   ```
   $ .\review_project grades.txt 100 assignment
   $ .\review_project grades.txt
   ```
  The input is put in through the command line and its arguments are the file directory, string file name, int grade, string task.
  Program will compile with "g++ main.cpp Grading.cpp". This will allows the for the rest of the prorgram to continue any outputtng. 
