#include <stdio.h>

void input_string(char str[]);
int alpha_count(char str[]);
int num_count(char str[]);
int special_count(char str[]);
void output(char str[], int a_count, int n_count, int s_count);

int main() {
  char str[100];
  input_string(str);
  
  int a_count = alpha_count(str);
  int n_count = num_count(str);
  int s_count = special_count(str);

  output(str, a_count, n_count, s_count);
  return 0;
}

void input_string(char str[]) {
  printf("Enter a string: ");
  fgets(str, 100, stdin);
}

int alpha_count(char str[]) 
{
  int i, count = 0;
  for (i = 0; str[i]; i++) {
    if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
      count++;
    }
  }
  return count;
}

int num_count(char str[]) {
  int i, count = 0;
  for (i = 0; str[i]; i++) {
    if (str[i] >= '0' && str[i] <= '9') {
      count++;
    }
  }
  return count;
}

int special_count(char str[]) {
  int i, count = 0;
  for (i = 0; str[i]; i++) {
    if (str[i] == ',' || str[i] == '-' || str[i] == '.' || str[i] == ' ') {
      count++;
    }
  }
  return count;
}

void output(char str[], int a_count, int n_count, int s_count) {
  printf("String: %s", str);
  printf("Number of Alphabets: %d\n", a_count);
  printf("Number of Digits: %d\n", n_count);
  printf("Number of Special characters: %d\n", s_count);
}
