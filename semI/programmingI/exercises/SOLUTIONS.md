# Solutions
[[Back to exercises]](https://github.com/gabrielfelipeassuncaodesouza/Computer-Science-Unifap/tree/main/SemI/ProgrammingI/exercises)

71.

### Pseudocode:

```
Algorithm comparation
string: name1, name2;
real: height1, height2, weight1, weight2;
Start:
  read(name1);
  read(height1);
  read(weight1);
  read(name2);
  read(height2);
  read(weight2);

  if height1 =  height2:
    print("They´re the same height");
  endif

  if weight1 = weight2:
    print("They're the same weight");
  endif

  if height1 > height2:
    print("The person " + name1 + " is the tallest");
  else:
    print("The person " + name2 + " is the tallest");
  endif

  if weight1 > weight2:
    print("The person " + name1 + " is the heaviest");
  else:
    print("The person " + name2 + " is the heaviest");
  endif
End
```
### C implementation:

```c
#include <stdio.h>

int main() {
  char name1[20], name2[20];
  float height1, height2, weight1, weight2;

  printf("\nType the name of the first person: ");
  scanf("%s", name1);

  printf("Type the height of the first person: ");
  scanf("%f", &height1);

  printf("Type the weight of the first person: ");
  scanf("%f", &weight1);

  printf("Type the name of the second person: ");
  scanf("%s", name2);

  printf("Type the height of the second person: ");
  scanf("%f", &height2);

  printf("Type the weight of the first person: ");
  scanf("%f", &weight2);

  if(height1 == height2)
    printf("They´re the same height");
 
  if(weight1 == weight2)
    printf("They´re the same weight");

  if(height1 > height2)
    printf("\nThe person %s is the tallest", name1);
  else
    printf("\nThe person %s is the tallest", name2);

  if(weight1 > weight2)
    printf("\nThe person %s is the heaviest", name1);
  else
    printf("\nThe person %s is the heaviest", name2);
}
```
