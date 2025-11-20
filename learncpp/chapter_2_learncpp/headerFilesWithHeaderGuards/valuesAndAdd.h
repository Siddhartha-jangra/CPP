# pragma once /* this is used so that the header file and it's content are not 
                defined more than once
                the other way to do this si by using conditional directives
                e.g. ifndef ABCD
                     define ABCD
                     <code>
                     endif*/

//all the forward declaration are written in the they are added in main file to include multiple files.
int getValuesFromUser(int a, int b); 
int add(int x, int y);

