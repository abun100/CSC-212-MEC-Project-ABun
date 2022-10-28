# CSC-212-MEC-Project-ABun
MEC Project, Aaron, David, Alex

Summary:
  This program works to give the current grade of a student's grades so far in the semester. The github address includes the entire compiled programmed across 3 files (main.cpp, Grading.cpp, Grading.h). As well as mock datasets (grades.txt) that store the grade values and task types.

Group Contributions:
Aaron wrote the calculate(), determine_storage() and output_grade() functions in Grading.cpp. 
Alex programmed the read/write files and also wrote part of the read.me.
David designed our plan about how to create the gradebook and it features. Was also responsible for writing the main.cpp. He also wrote the psuedocode and did part of the readme.md. 
  
Pseudocode:<br/>
 Read in filename<br/>
 Read in task type<br/>
 If assignment is input<br/>
 &nbsp;&nbsp;&nbsp;    write command line inputs to file<br/>
 Create Grade object<br/>
 Read file to grade<br/>
 while there are lines left in file:<br/>
 &nbsp;&nbsp;&nbsp;    insert into Grade object as a double<br/>
 calculate grade<br/>
 &nbsp;&nbsp;&nbsp;     add up all current points<br/>
 &nbsp;&nbsp;&nbsp;     divide by total points<br/>
 output grade<br/>
 

Features:
  The input include file directory, string file name, int grade, string task. The output will always return the current grade for a student given the input. If no grade is inputted for a task in the .txt file, an output will still be calculated that still outputs the current grade. This development was important to us becuase we wanted to be able to make a prgams that would successuflly ouput the current grade and at the same time would be successful even in the case that there is not a grade for a certain task. This way the desriable outcome will still be given even without all the possible grade types filled.
  
Input/Compiling:
  The input is put in through the command line and its arguments are the file directory, string file name, int grade, string task.
  Program will compile with "g++ main.cpp Grading.cpp". This will allows the for the rest of the prorgram to continue any outputtng. 
