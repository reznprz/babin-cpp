# babin-cpp

# steps to clone the project. 

1. run this command where you want to clone the project. 
    a. git clone https://github.com/reznprz/babin-cpp.git
        note: you can find the repo link in github repo (https://github.com/reznprz/babin-cpp) and click on code button highlighted with green https and copy the url. 

2. command to run the project. 
    a. if cpp program is using v11 then
        i) g++ -std=c++11 {programfilename}.cpp -o {programfilename} note: this will compile your code
        ii) ./{programfilename}  note: this will run your code. 
        example if your program file name is u1146922Q3.cpp
            i) g++ -std=c++11 u1146922Q3.cpp -o u1146922Q3      
            ii) ./u1146922Q3
            
    b. for standard program u don't need to add -std=c+11 flag in complie command
        i) g++ {programfilename}.cpp -o {programfilename}
        ii)./{programfilename}

3. to push the changes in the repo
    
    a. to verify if you are in the git repo
        i) run command : git status
        note: git status would also show the changes different in your local vs git repo
        
    b. to add the file in git if u decided to push the updates changes
        i) run command: git add . 
        note: add . will add all the files that have the changes
        ii) if u want to add only a perticulat file
        note: git add {fileName}
        
    c. after adding we need to commit 
        i) git commit -m "commit message"

    d. to push the changes to github
        i) git push



