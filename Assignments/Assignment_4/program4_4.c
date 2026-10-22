/* 4]Accept the age of person and determine whether the person is eligible to vote. A person must
be at least 18 years old to vote. A negative age should be considerd invalid.*/
#include <stdio.h>
#include<stdlib.h>

int CheckVotingEligiblity(int iAge)
{
    if(iAge >= 18)
    {
      printf("Eligible For Voting");
    }
    else if(iAge ==  0)
    {
      printf("Invalid Age");
    }
    else
    {
      printf("Not Eligible For Voting");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Age :");
    scanf("%d",&iValue);

    CheckVotingEligiblity(iValue);
    return EXIT_SUCCESS;
}