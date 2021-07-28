#include <iostream>
#include <string>

using namespace std;

void caesar_key(string letters, int number);
void caesar_sub(string letters, string key);
void credit(long card_number);

int main()
{
  int ch;
  
  cout << "Select an option\n[1]Caesar with Key\n[2]Caesar with Substitution\n[3]Change Problem\n[4]Credit Checksum\nChoice: ";
  cin >> ch;
  
  switch(ch)
  {
    case 1: //caesar with key
      caesar_key(string letters, int number);
      break;
    case 2: //caesar with sub
      caesar_sub(string letters, string key);
      break;
    case 3: //change
      change(float change_owed);
      break;
    case 4: //checksum
      credit(long card_number);
      break;
    default:
      cout << "wrong choice."
      break;
  }
  
  return 0;
}

void caesar_key(string letters, int number)
{
  //start code here
}

void caesar_sub(string letters, string key)
{
 //start code here 
}

void change(float change_owed)
{
 //start code here 
}

void credit(long card_number)
{
 //start code here 
}
