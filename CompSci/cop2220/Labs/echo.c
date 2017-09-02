//Juan Perez
//09-09-16
//lab2

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int GetNum();
int CalcTwo(int, int);
char GetChar();
char EchoChar(char);


int main() {
  int x = 0,
    y = 235,
    total = 0;
  x = GetNum();
  total = CalcTwo(x, y);
  printf("You chose %d, %d plus 235 is %d\n", x, x, total);

  char ch;
  ch = GetChar();
  printf("Your letter is %c\n", ch);
  return 0;
}

int GetNum() {
  int userinput = 0;
  printf("Hello my name is Juan Perez\n" "Please enter a number: ");
  scanf("%d", &userinput);
  return userinput;
}

int CalcTwo(int a, int b) {
  return (a + b);
}

char GetChar() {
  char in;
  printf("Please enter a letter: ");
  scanf(" %c", &in);
  return in;
}

char EchoChar(char a) {
  return a;
}
