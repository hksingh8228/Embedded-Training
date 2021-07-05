
Actual implementaion of printf

1) Printf takes different kindes of arguements apart from string.
2) To handle these different kinds of arguements standard library stdarg.h is used.
3) An example of how printf works is : 

                                   printf("Hello world %d", 50);

4) How the above c snippet works is, first the characters inside double quote are printed until %.
5) Then the switch case is used to know, what is the format present, to take different actions for different format.
6) If suppose the format is %d, (i.e int). Then the number is converted into respective ascii characters by using %10 and /10, until the 
   number becomes zero. So 50 is broken down as '5', '0' and printed on screen.
7) If the format is %x, then the number is converted into respective ascii characters by using %16 and /16, until the number becomes
   zero. Then printed on screen.
8) Same for other data formats also.
