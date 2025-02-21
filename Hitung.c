// made proudly in neovide for nvim;
#include <stdio.h>
#include <math.h>
#include <string.h>

#define PI 3.1415

// +, -, x, / , mod, ^, sin(deg) cos(deg) tan(Deg) log(10) ln(e) factorial(!) 

int a, b, c, sisa;
float N1, N2;
int main(int argc, char *argv[])
{
  if(argc >= 3 && argc <= 4) //checking for both case i.e sin(deg) and a + b
  {
    if(argc == 4)
    {
      
        if(strcmp(argv[2], "+") == 0){
          a = atoi(argv[1]);
          c = atoi(argv[3]); // ASCII to integer

          printf("%i", a + c);
        }
        else if (strcmp(argv[2], "-") == 0){ //strcmp if same return 0
          a = atoi(argv[1]);
          c = atoi(argv[3]); // ASCII to integer

          printf("%i", a - c);
        }
        else if (strcmp(argv[2], "x") == 0){
          a = atoi(argv[1]);
          c = atoi(argv[3]); // ASCII to integer
          
          printf("%i", a * c);
        }
        else if (strcmp(argv[2], "/") == 0){
          N1 = atoi(argv[1]);
          N2 = atoi(argv[3]); // ASCII to integer       
          printf("%.2f", N1 / N2);
        }
        else if (strcmp(argv[2], ":") == 0){
          a = atoi(argv[1]);
          c = atoi(argv[3]);       
          sisa = a % c;
          printf("%i : %i = %i sisa %i", a, c, a/c, sisa);
        }
        else {
        printf("salah bro"); // selain yg diatas, salah sintaks
        return 1;
      }
    }
    
    else if(argc == 3 ){

        if(strcmp(argv[1], "sin") == 0){
          N1 = atoi(argv[2]);
          N2 = (N1*M_PI)/180; // radian to pi (x/180)pi
          printf("%.2f", sin(N2));
        }

        else if(strcmp(argv[1], "cos") == 0){
          N1 = atoi(argv[2]);
          N2 = (N1*M_PI)/180;
          printf("%.2f", cos(N2));
        }

        else if(strcmp(argv[1], "tan") == 0){
          N1 = atoi(argv[2]);
          N2 = (N1*M_PI)/180;
          printf("%.2f", tan(N2));
        }
        
        else if(strcmp(argv[1], "log") == 0){
          N1 = atoi(argv[2]);
          printf("%.2f", log10(N1)); // log basis 10 
        }
        
        else if(strcmp(argv[1], "ln") == 0){
          N1 = atoi(argv[2]);
          printf("%.2f", log(N1)); // ln(e)
        }

        else if(strcmp(argv[1], "fact") == 0){
          a = atoi(argv[2]);
          sisa = 1; 
          for (int i = 1; i <= a; i++){
             sisa = i * sisa;
          } 
          printf("%i", sisa);
        }
        else {
        printf("salah bro, bak ulang"); // selain yg diatas (3) salah sintaks
        return 1;
        }
    
    }
    else {
      printf("salah bro"); // selain 3 dan 4 jumlah arguments, salah;
      return 1;
    }
  }
  return 0;
}
