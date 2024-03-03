In this example, I created 3 classes to print a person's personal info. Their personal info includes their first name, last name, date of birth (day, month, year), and their personal ID. Now given we are going to output a person's personal info. I have extracted the data and the operations that should be performed on this data. So, I created 3 classes and they are:

1- dateType (which is a person date of birth) 2- personType (stores the first and last name of this person) 3- personalInfo (encapsulates the date of birth and the name inside the class and stores the personalID of that person)

Now we ask ourselves, how do we relate those classes? the answer is simple there are two ways to relate to classes:

1- Inheritance which is a "is a" relationship eg. (every employee is a person) 2- Composition which is a "has a" relationship eg. (every person has a date of birth)

now let's look at the classes dateType and personType both have the date of birth and the name (first name, last name) of the person respectively. Therefore personalInfo HAS dateType and personType. We use composition in this example since the relation is "has a" not "is a".

Now what is Composition? basically it's when one or members of a class (personalInfo, in this case) has an object of another class type.

Now when you implement the functions of this class, make sure to include the member-object's constructor in the class constructor definition.

We have created 2 objects of 2 class types and made them private since id, first name and last name, and bday are personal info, so we don't want anyone to see them.

And that's about it. You can use object oriented design to make a blueprint of the data and the operations made on this data then program it using Object oriented programming. Thank you for checking out my repository as I have covered everything to do with Data Structures from Structs to Classes to Inheritance and Composition and the list goes on. I'll make more repositories such as this one whenever I code examples and problems of my own
