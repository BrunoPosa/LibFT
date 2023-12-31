<h1>LibFT</h1>

<h5>Special thanks to Hivers V:</h5>
          -Ola Mohamed (Cdyno on GitHub) for sparring with me from the very beginning, for the given time and encouragement. Specifically, for sharing  an implementation of word_len, fixing and explaining my incorrect malloc check and freeing in ft_split, as well as for remaking the ft_atoi conditions for overflow.
-Tanja Menkovic for sparring with me on ideas, helping me fix conditionals, and teaching me about operating on arrays by reference in ft_split.
-Linh Nguyen (Michael) for helping me from the start to set up, use tools to save time, and for patiently working through debugging sessions with me.
-Aleksandr Dubov helped me learn my own code better and shined a light onto my free - that was the issue of my leaks.
-Oliver Hertzberg for noticing the spot where I was allocating too little memory in ft_split (sizeof(char instead of char*)).
-David Barrenechea for leak troubleshooting in ft_split.
-Henri Pätsi for leak troubleshooting in ft_split.
-Oluwaseun Adewumi for inspiring me to use a simpler way of counting and iterating through words in ft_spllit.
-And others: Jarno, Dmitri, Szabina, and Pablo, for kindly offering help, as well as Hivers IV for support. 

<h5>Learning outcomes:</h5>
-Makefiles are superb for determining which parts of a program need recompiling, their syntax is simple but the needed bash commands and shortened reference syntax can get overwhelming for me. 
-Headers and Libraries are used for compiling executables (programs), libraries are made of object files and the overlap of when headers are needed versus just the compiled library is still not fully clear to me.
-There is stack and heap memory and when using heap, we need to free it before ending our processes.
-Troubleshooting can be complex and I learned to use ` leaks --atExit -- ./yourexecutable ` , `-fsanitize=address,undefined,pointer-overflow` , Francinette, and pythonTutor.
-Logic of limiting loops (such as overflow protection) and recursions  seems hard for me to get right, especially when navigating arrays with indexes. 
-String literals are constant (unchangeable).
-Typecasting, implicit and explicit seemed to take forever for me to learn to incorporate. 
-Apparently multiplying different data types in return value does not work.
-Overflows, leaks, segfaults are all too common in my process.
-First evaluation failed due to compilation error because on execution, Moullinette will start make with fclean command, which had a rule `rm $(NAME)` which would fail to execute as there was nothing to remove at the start (library not yet made), so I had to add `-rf` flag to force it. 
-Additionally, external Francinette tester did not test for overflow in ft_atoi, so I remade it with Ola's help because the prior version was not working exactly as the original atoi function around LONG_MAX. 
