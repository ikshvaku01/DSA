# Basics of Python

### Introduction

Python is a very popular general-purpose interpreted, interactive, object-oriented, and high-level programming language. Python is dynamically-typed and garbage-collected programming language. It was created by Guido van Rossum during 1985- 1990. 

Today, Python is very high in demand and all the major companies are looking for great Python Programmers to develop websites, software components, and applications or to work with Data Science, AI, and ML technologies. 


Through this github repository you will learning basics of python

### Installation

Python can be installed from https://www.python.org. Python in supported in almost all os like windows, linux, mac etc

###### Windows

Python can be directly installed from python.org 

Go to the website https://www.python.org 

Choose the latest Python 3 release.

Click on the link to download Windows x86 executable installer if you are using a 32-bit installer. In case your Windows installation is a 64-bit system, then download Windows x86-64 executable installer. 

Once the installer is downloaded, run the Python installer.

Check the Install launcher for all users check box. Further, you may check the Add Python 3.x (x represents latest python release version) to path check box to include the interpreter in the execution path.

Select Customize installation. Choose the optional features by checking the following check boxes:

- Documentation

- pip

- tcl/tk and IDLE (to install tkinter and IDLE)

- Python test suite (to install the standard library test suite of Python)

- Install the global launcher for `.py` files. This makes it easier to start Python

- Install for all users.

Click Next. This takes you to Advanced Options available while installing Python. Here, select the Install for all users and Add Python to environment variables check boxes. Optionally, you can select the Associate files with Python, Create shortcuts for installed applications and other advanced options. Make note of the python installation directory displayed in this step. You would need it for the next step. After selecting the Advanced options, click Install to start installation. 

Now your installation is complete lets add python to environment variables. This step is done to access Python through the command line. In case you have added Python to environment variables while setting the Advanced options during the installation procedure, you can avoid this step. Else, this step is done manually as follows. 

In the Start menu, search for “advanced system settings”. Select “View advanced system settings”. In the “System Properties” window, click on the “Advanced” tab and then click on the “Environment Variables” button. Locate the Python installation directory on your system. If you followed the steps exactly as above, python will be installed in below locations:

   - C:\Program Files (x86)\Python3 (for 32-bit installation)
   - C:\Program Files\Python3 (for 64-bit installation)

*Here the folder name Python3 may change with respect to folder name in you local system. Name of folder can be different*

Now run ``` python``` in command prompt to check whether python has installed in your system

###### Linux

Python is normally pre-installed with linux. If you want to check if python is installed then run ``` python --version ``` 

if not present then follow below step

**Ubuntu, Kali, Debian**

```sudo apt install python3 ```

*you can also run with package manager apt-get not needed apt is enough to get python installed in your ubuntu*

**Fedora, Centos**

```sudo dnf install python3```


###### Mac

You can go for installation from offical site. Almost same installation steps as of windows

otherwise you can go for commandline installation using brew

```
brew update && brew upgrade

brew install python3

```
End of installation lets head to basics python variables, constants etc

###### Next
[Python Variables and Constants](./Python%20Variables%20and%20Constants.md)