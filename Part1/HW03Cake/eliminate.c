// ***
// *** You MUST modify this file
// ***

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> 
#include <string.h> 

#ifdef TEST_ELIMINATE
// 100% of the score
void eliminate(int n, int k)
{
  // allocate an arry of n elements
  int * arr = malloc(sizeof(* arr) * n);
  // check whether memory allocation succeeds.
  // if allocation fails, stop
  if (arr == NULL)
    {
      fprintf(stderr, "malloc fail\n");
      return;
    }
// initialize all elements
  int i;
  int count;
  int testcase;

  // counting to k,
  // mark the eliminated element
  // print the index of the marked element
  // repeat until only one element is unmarked

  testcase = 0;
  count = 0;
 
  for (i = 0; i < n; i++)
  { 
    count++;
    
    if (count == k)
    { 
      count = 0; 
      if (arr[i] == -1)
      { 
        count--; 
        testcase ++;
      }
      else
      { 
        printf("%d\n", arr[i]);
        arr[i] = -1;
        testcase = 0;
      }
    }
    
    if (i < n)
    { 
      i = 0;
    }
    
    if (testcase > n)
    { 
      break;
    }
  }
  // print the last one




  // release the memory of the array
  free (arr);
}
#endif
