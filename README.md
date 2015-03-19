# makefileproject
[rajkumar@ip-172-31-23-94 makefile]$ vi makefile
[rajkumar@ip-172-31-23-94 makefile]$ make
g++ -c main.cpp
g++ -c lenstring.cpp
g++ main.o lenstring.o -o StringLength
[rajkumar@ip-172-31-23-94 makefile]$ ls
functions.h  lenstring.cpp  main.cpp  makefile
hello        lenstring.o    main.o    StringLength
[rajkumar@ip-172-31-23-94 makefile]$ ./makefile
-bash: ./makefile: Permission denied
[rajkumar@ip-172-31-23-94 makefile]$ ./StringLength
