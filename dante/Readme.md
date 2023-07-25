To test this project you need to :
- compile the generator files and the solver files with make command

To test the generator :
- run the program with ./generator x y (x and y are the size of your maze)
- you can add flags to test it : ./genrator x y imperfect or perfect
- PS : IF YOU DON'T ADD FLAGS THE PROGRAM WILL GIVE YOU ONLY IMPERFECT MAZES
- to see the output clearly do this : ./genrator x y imperfect or prefect > output.txt

To test the solver :
- run the program with ./solver maze.txt where maze.txt will be your file
- to see the output clearly do this : ./solver maze.txt > output.txt

To remove all the .o files you can :
- do the command make clean
- do the command make fclean (this command will also remove the binary ./bsq)

To recompile the program you can :
- do the command make re
