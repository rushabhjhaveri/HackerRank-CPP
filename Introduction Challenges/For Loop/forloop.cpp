#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int start, end, i;
    scanf("%d\n", &start);
    scanf("%d\n", &end);
    for(i = start; i <= end; i++){
      if(i >= 1 && i <= 9){
        switch (i) {
          case 1: printf("one\n");
                  break;
          case 2: printf("two\n");
                  break;
          case 3: printf("three\n");
                  break;
          case 4: printf("four\n");
                  break;
          case 5: printf("five\n");
                  break;
          case 6: printf("six\n");
                  break;
          case 7: printf("seven\n");
                  break;
          case 8: printf("eight\n");
                  break;
          case 9: printf("nine\n");
                  break;
        }
      }
      else if(i > 9){
        if(i % 2 == 0){
          std::cout << "even" << '\n';
        }
        else if(i % 2 != 0){
          std::cout << "odd" << '\n';
        }
      }
    }
    return 0;
}
