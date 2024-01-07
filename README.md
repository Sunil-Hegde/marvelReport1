## API
--------------------------------------------------
Application Programming Interface, fancy way to describe a digital waiter which takes user's request to fetch some data from a website or server and then delivers it back to the user.(This is a very very simple explain but it still works).

I used NASA's Astronomy Photograph of the Day public API to practically implement whatever I learnt about APIs.

![API Example](https://github.com/Sunil-Hegde/marvelReport1/blob/main/task2.png?raw=true)

## Working with GitHub
--------------------------------------------------
GitHub is a popular and free code hosting platform, serving as the go-to platform for developers whether they are contributing to open-source projects or showcasing personal work.

Git is version control software used to manage different versions of the same project, enabling the creation of branches so that we can revert back to the previous version of the code if something goes wrong. Git proves particularly useful during team projects, where multiple individuals can collaborate on the same project.

I followed general steps for open-source contribution, including forking, correcting or adding code, and submitting pull and merge requests on the MARVEL git-task repository.

![Git Task](https://github.com/Sunil-Hegde/marvelReport1/blob/main/task3.png?raw=true)

## Terminal and Shell scripting
--------------------------------------------------

The Linux command window is a powerful programming tool that minimizes repetition and can be used to perform various tasks using shell scripts. The terminal window allows users to create, copy, move, edit, delete, and perform other actions on files directly in the terminal. Additionally, it serves as a platform for running and executing different files.

I performed all the mentioned operations, including creating folders and files, copying text from one file to another, and utilizing a shell script to generate 2600 files using a while loop.

![Command line](https://github.com/Sunil-Hegde/marvelReport1/blob/main/task4.png?raw=true)

#### Created files:

![Files](https://github.com/Sunil-Hegde/marvelReport1/blob/main/task4a.png?raw=true)

#### Shell script for creating files using while loop:

    #!/bin/sh
    echo "Enter the number of files to create : "
    read number
    a=0
    while [ $a -lt $number ];
    do
        touch B56-$a.txt
        ((a++))
    done

    echo "$number files created."
    ls B56*

## Kaggle Contest
--------------------------------------------------

Kaggle is a popular data science learning and contest platform where users can learn and test their knowledge of machine learning and data science by competing with others, with the chance to win substantial cash prizes.

I trained my first machine learning model using pandas for the Titanic ML contest on Kaggle, predicting the survival rate of passengers based on gender and age.

![Titanic ML1](https://github.com/Sunil-Hegde/marvelReport1/blob/main/task5.png?raw=true)
![Titanic ML2](https://github.com/Sunil-Hegde/marvelReport1/blob/main/task5a.png?raw=true)
![Titanic ML3](https://github.com/Sunil-Hegde/marvelReport1/blob/main/task5b.png?raw=true)

## Working with pandas and matplotlib
--------------------------------------------------

Pandas is a powerful Python library designed for data manipulation and numerical operations, providing convenient data structures and functions needed to analyze and clean datasets efficiently.

Matplotlib, another essential library in Python, is specifically used for data visualization, enabling users to represent data from different datasets in various graphical formats.

I employed both Pandas and Matplotlib to visually represent students' marks in a specific semester. This included creating visualizations such as Marks vs. Rank, class averages for each subject, and a scatter plot comparing lab marks to theory marks.

For the task of plotting graphs, I utilized Google Colab, built on top of Jupyter Notebook, to streamline the process and enhance collaboration.

![bar graph](https://github.com/Sunil-Hegde/marvelReport1/blob/main/task6.png?raw=true)

[Here](https://colab.research.google.com/drive/1UYq5WH9GRLhGigvBCSXd35gEIRMnm5Kh?usp=sharing) is the link for collab notebook.

## Portfolio
--------------------------------------------------
 
I used HTML, CSS, and Javascript to build my portfolio. HTML helped structure the content, CSS made it look good, and Javascript added interactive elements. I also learned how to use custom fonts to give my site a unique style. Making the website responsive was another skill I picked up, ensuring it looks good on different devices.

![portfolio](https://github.com/Sunil-Hegde/marvelReport1/blob/main/task7.png?raw=true)

[Here](https://sunil-hegde.github.io/portfolio/) is the link to my portfolio.

## Resource article using Markdown
--------------------------------------------------

Markdown is a user-friendly markup language designed for text formatting. Its uncomplicated syntax allows easy structuring of documents, enabling the creation of well-formatted content for purposes like documentation and README files with minimal effort. 

I utilized Markdown to publish a resource article on the MARVEL website, providing insights into the semiconductor chip manufacturing process.

![article](https://github.com/Sunil-Hegde/marvelReport1/blob/main/task8.png?raw=true)

[Here](https://hub.uvcemarvel.in/article/3f5273b5-fcb3-428f-b744-255f25857c1c) is the link to the resource article.

## Tinkercad
--------------------------------------------------

TinkerCAD is a user-friendly online tool for simulating circuits. Developed by Autodesk, it allows users to easily design and test electronic circuits virtually by dragging and dropping components onto a digital breadboard. It's a great resource for learning about electronics and experimenting with circuit designs in a straightforward way.

I simulated a circuit to estimate distance between an obstacle and a sensor using simple circuit elements. On top of finding distance in centimeter, I also tried to find the distance in meters and millimeters.

![distance](https://github.com/Sunil-Hegde/marvelReport1/blob/main/task9.png?raw=true)

## Speed control of DC motor
--------------------------------------------------

Control the speed of a 5V BO motor by utilizing an Arduino board and the L298N motor driver. This task involves employing an UNO board and an H-Bridge L298N motor driver for regulating the speed of the DC motor. It's a practical application, showcasing how to interface these components to achieve motor control through an Arduino-based setup.
Simulated on tinkercad first and tried to implement the same practically.

![image](https://github.com/Sunil-Hegde/marvelReport1/blob/main/task10.png?raw=true)

