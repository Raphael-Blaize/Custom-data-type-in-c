#include <stdio.h>
#include <cs50.h>
#include <string.h>


//creating a custom datatype
typedef struct
{
    string name;
    string number;
    string age;
    string gender;
}
person;

//creating a constant as a defense
const int NUMBERS = 2;


int main(void)
{
    //storing the constant in an array called person
    person people[NUMBERS];
    
    //iterating though the array and populating it
    for(int i = 0; i < NUMBERS; i++)
    {
        people[i].name = get_string("What is the name: ");
        people[i].number = get_string("What is the number: ");
        people[i].gender = get_string("What is your gender: ");
        people[i].age = get_string("What is your age: ");
        
        
        printf("\n");
    }
    
    //getting users input
    string question = get_string("Whose Name are you looking for: ");
    
    //comparing the users input to the character in the array using strcmp
    for(int i = 0; i < NUMBERS; i++)
    {
        if(strcmp(people[i].name, question) == 0)
        {
            printf("%s Number: %s\n", people[i].name, people[i].number);
            printf("%s Age: %s\n", people[i].name, people[i].age);
            printf("%s Gender: %s\n", people[i].name, people[i].gender);
            return 0;
        }
    }
    
    //ending the program if the users input does not equal to what is in the array
    printf("Not Found");
    return 1;
}