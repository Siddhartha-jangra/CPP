# chapter-2-learncpp
this repository contain my notes and practice projects from the 2nd chapter of learncpp
<br>
author - siddhartha
<br>
The rule that is a must for a programmer is "DRY" that is "DON'T REPEAT YOURSELF"
<br>
i will add all of my notes in my readme files
<br>
the best practice to use local variables is to defined them as close to thier first use as possible.
e.g. int x{5};
     cout << x ;
<br>
One difinition rule:

1. Within a file, each function, variable, type, or template in a given scope can only have one definition. Definitions occurring in different scopes (e.g. local variables defined inside different functions, or functions defined inside different namespaces) do not violate this rule.
2. Within a program, each function or variable in a given scope can only have one definition. This rule exists because programs can have more than one file (we’ll cover this in the next lesson). Functions and variables not visible to the linker are excluded from this rule
3. Types, templates, inline functions, and inline variables are allowed to have duplicate definitions in different files, so long as each definition is identical. We haven’t covered what most of these things are yet, so don’t worry about this for now -- we’ll bring it back up when it’s relevant.

