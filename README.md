# c++ serializer QT project for university

Consider the following incomplete UML class diagram.
![UML](https://github.com/LourensCDA/cpp-QT-serializer-pattern/blob/master/uml.png)

The Film class takes on too much responsibility.

1. obtainFilmData(), which is used to get user input on film details (title, length, director and
   release date) via a Graphical User Interface (GUI), and
2. saveFilm(), which is used to save the state of a Film instance to a file.

## Part 1

Redesign the Film class so that the functionality currently included in it can be achieved using
three different classes.

1. The Film class to represent a film with the necessary functions (as given in the above UML
   class diagram).
2. A FilmWriter class which saves the state of a Film instance (values of the data members
   of that instance) to a file (you may save it in any sensible format that is human-readable).
3. A Graphical User Interface (GUI) class FilmInput, which allows users to enter film
   information to create Film instances as well as to save Film instances to file (using the
   FilmWriter). Note: You can decide when Film instance(s) should be saved.

## Part 2

Make necessary changes in the Film class so that you can access the data members of Film
instances using QMetaObject. Rewrite the FilmWriter class so that the state of a Film
instance is accessed using the generated QMetaObject.
