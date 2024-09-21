## API
--------------------------------------------------
**Application Programming Interface**, fancy way to describe a digital waiter which takes user's request to fetch some data from a website or server and then delivers it back to the user (This is a very very simple explain but it still works).

I used NASA's **Astronomy Photograph of the Day** public API to practically implement whatever I learnt about APIs.

![API Example](https://github.com/Sunil-Hegde/marvelReport1/blob/main/level0/task2.png?raw=true)

Click [here](https://sunil-hegde.github.io/APOD/) to visit the live website.


## Working with GitHub
--------------------------------------------------
**GitHub** is a popular and free code hosting platform, serving as the go-to platform for developers whether they are contributing to open-source projects or showcasing personal work.

**Git** is version control software used to manage different versions of the same project, enabling the creation of branches so that we can revert back to the previous version of the code if something goes wrong. Git proves particularly useful during team projects, where multiple individuals can collaborate on the same project.

I followed general steps for open-source contribution, including forking, correcting or adding code, and submitting pull and merge requests on the **MARVEL git-task repository**.

![Git Task](https://github.com/Sunil-Hegde/marvelReport1/blob/main/level0/task3.png?raw=true)

## Terminal and Shell scripting
--------------------------------------------------

The **Linux command window** is a powerful programming tool that minimizes repetition and can be used to perform various tasks using **shell scripts**. The terminal window allows users to create, copy, move, edit, delete, and perform other actions on files directly in the terminal. Additionally, it serves as a platform for running and executing different files.

I performed all the mentioned operations, including creating folders and files, copying text from one file to another, and utilizing a shell script to generate **2600** files using a while loop.

![Command line](https://github.com/Sunil-Hegde/marvelReport1/blob/main/level0/task4.png?raw=true)

#### Created files:

![Files](https://github.com/Sunil-Hegde/marvelReport1/blob/main/level0/task4a.png?raw=true)

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
Asterisk (*) used here is called a wildcard. More on this [here.](https://www.warp.dev/terminus/linux-wildcards#:~:text=Asterisk%20(*)%20and%20question%20mark,mark%20matches%20exactly%20one%20character.)

## Kaggle Contest
--------------------------------------------------

**Kaggle** is a popular data science learning and contest platform where users can learn and test their knowledge of machine learning and data science by competing with others, with the chance to win substantial cash prizes.

I trained my first machine learning model using pandas for the **Titanic ML** contest on Kaggle, predicting the survival rate of passengers based on gender and age.

![Titanic ML1](https://github.com/Sunil-Hegde/marvelReport1/blob/main/level0/task5.png?raw=true)

![Titanic ML2](https://github.com/Sunil-Hegde/marvelReport1/blob/main/level0/task5a.png?raw=true)

![Titanic ML3](https://github.com/Sunil-Hegde/marvelReport1/blob/main/level0/task5b.png?raw=true)

## Working with pandas and matplotlib
--------------------------------------------------

**Pandas** is a powerful Python library designed for data manipulation and numerical operations, providing convenient data structures and functions needed to analyze and clean datasets efficiently.

**Matplotlib**, another essential library in Python, is specifically used for data visualization, enabling users to represent data from different datasets in various graphical formats.

I employed both Pandas and Matplotlib to visually represent students' marks in a specific semester. This included creating visualizations such as Marks vs. Rank, class averages for each subject, and a scatter plot comparing lab marks to theory marks.

For the task of plotting graphs, I utilized **Google Colab**, built on top of **Jupyter Notebook**, to streamline the process and enhance collaboration.

![bar graph](https://github.com/Sunil-Hegde/marvelReport1/blob/main/level0/task6.png?raw=true)

[Here](https://colab.research.google.com/drive/1UYq5WH9GRLhGigvBCSXd35gEIRMnm5Kh?usp=sharing) is the link for the collab notebook.

## Portfolio
--------------------------------------------------
 
I used **HTML, CSS, and Javascript** to build my portfolio. HTML helped structure the content, CSS made it look good, and Javascript added interactive elements. I also learned how to use custom fonts to give my site a unique style. Making the website responsive was another skill I picked up, ensuring it looks good on different devices.

![portfolio](https://github.com/Sunil-Hegde/marvelReport1/blob/main/level0/task7.png?raw=true)

[Here](https://sunil-hegde.github.io/portfolio/) is the link to my portfolio.

## Resource article using Markdown
--------------------------------------------------

**Markdown** is a user-friendly markup language designed for text formatting. Its uncomplicated syntax allows easy structuring of documents, enabling the creation of well-formatted content for purposes like documentation and README files with minimal effort. 

I utilized Markdown to publish a resource article on the MARVEL website, providing insights into the semiconductor chip manufacturing process.

![article](https://github.com/Sunil-Hegde/marvelReport1/blob/main/level0/task8.png?raw=true)

[Here](https://hub.uvcemarvel.in/article/3f5273b5-fcb3-428f-b744-255f25857c1c) is the link to the resource article.

    Fun fact: This report is written using Markdown as well.

## Tinkercad
--------------------------------------------------

**Tinkercad** is a user-friendly online tool for simulating circuits. Developed by Autodesk, it allows users to easily design and test electronic circuits virtually by dragging and dropping components onto a digital breadboard. It's a great resource for learning about electronics and experimenting with circuit designs in a straightforward way.

I simulated a circuit to **estimate distance between an obstacle and a sensor** using simple circuit elements. On top of finding distance in centimeter, I also tried to find the distance in meters and millimeters.

![distance](https://github.com/Sunil-Hegde/marvelReport1/blob/main/level0/task9.png?raw=true)

## Speed control of DC motor
--------------------------------------------------

Control the speed of a 5V BO motor by utilizing an Arduino board and the L298N motor driver. This task involves employing an UNO board and an H-Bridge L298N motor driver to regulate the speed of the DC motor. It's a practical application, showcasing how to interface these components to achieve motor control through an Arduino-based setup.
Simulated on Tinkercad first and tried to implement the same practically.

![image](https://github.com/Sunil-Hegde/marvelReport1/blob/main/level0/task10.png?raw=true)

![image2](https://github.com/Sunil-Hegde/marvelReport1/blob/main/level0/task10a.jpg?raw=true)
#### Video
[![image of video](https://github.com/Sunil-Hegde/marvelReport1/blob/main/level0/task10b.png?raw=true)](https://youtube.com/shorts/8v52LMCWGYM?si=gy-Ly8V5NGg1XSjy)

## LED Toggle Using ESP32
--------------------------------------------------

**ESP32** is a low-cost system on a chip withWi-Fi and dual mode bluetooth. We created a standalone webserver which can toggle LEDs connected with ESP32 GPIOs(General purpose inputs/ outputs). We used Arduino IDE(Integrated development environment) to code and upload the program to ESP32.

![ESP32](https://github.com/Sunil-Hegde/marvelReport1/blob/main/level0/task11.jpg?raw=true)

## Soldering Prerequisites
--------------------------------------------------

We learnt the fundamentals of soldering, including using tools like a soldering iron and flux. As a hands-on application, We simulated and soldered a basic circuit featuring an LED and a switch on a copper breadboard.

![Simulation](https://github.com/Sunil-Hegde/marvelReport1/blob/main/level0/task12.png?raw=true)

![irl](https://github.com/Sunil-Hegde/marvelReport1/blob/main/level0/task12a.jpg?raw=true)

## 555 Astable multivibrator
--------------------------------------------------

This circuit is a basic oscillator that produces a continuous pulse output. The frequency is adjustable using two resistors, R1 and R2. To achieve a 60% duty cycle, the relationship between R1 and R2 is set as R1 equal to 2 times R2. 

In our setup, we substituted one of the resistors with a potentiometer to attain the same effect, allowing for convenient adjustment of the circuit's parameters.

#### Circuit:

![circuit](https://github.com/Sunil-Hegde/marvelReport1/blob/main/level0/task13b.jpg?raw=true)

#### Set-up:

![setup](https://github.com/Sunil-Hegde/marvelReport1/blob/main/level0/task13.jpg?raw=true)

#### Output:

![output](https://github.com/Sunil-Hegde/marvelReport1/blob/main/level0/task13a.jpg?raw=true)

## K-Map and Logic Circuits:
--------------------------------------------------

**Karnaugh map** is a method of simplifying Boolean algebra expressions. The goal was to make the alarm (represented by an LED) beep only when the door is locked and the key is not inserted. The logic circuit can be derived as follows:

![kmap](https://github.com/Sunil-Hegde/marvelReport1/blob/main/level0/task14.jpg?raw=true)

#### Simulation of the same circuit:

![simulation](https://github.com/Sunil-Hegde/marvelReport1/blob/main/level0/task14a.jpg?raw=true)

The LED lights up only when the door is locked and the key is not inserted.

## Active Participation
--------------------------------------------------
#### Kagada 2023 conducted by IEEE UVCE

We collaborated on an IEEE Prokalp project, developing a centralized website called Campus Club Hub. It compiles club information, events, and applications. Utilizing Google Firebase, I implemented user authentication and established a real-time database to store user data and other information like announcements. 

We showcased our project in the project track of Kagada 2023 as well.

[Here](https://mythili953.github.io/PROKALPP/) is the link to the webpage.

![kagada](https://github.com/Sunil-Hegde/marvelReport1/blob/main/level0/task15a.png?raw=true)

#### MOOC offered by Kaggle.org

![python](https://github.com/Sunil-Hegde/marvelReport1/blob/main/level0/task15b.png?raw=true)



