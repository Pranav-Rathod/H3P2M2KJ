
/* =============================================================================
   Write a program to calculate number of object created for particular class.
============================================================================== */

#include <iostream>
using namespace std;
class obj_cnt
{
      static int count;
   public:
      obj_cnt()
      {
         count++;
      }
      static int objCount()
      {
         return count;
      }
};

int obj_cnt::count;

main()
{
   obj_cnt o1, o2, o3, o4, o5;
   int cnt;
   cnt = obj_cnt::objCount();
   cout << "Number of objects:" << cnt;
}