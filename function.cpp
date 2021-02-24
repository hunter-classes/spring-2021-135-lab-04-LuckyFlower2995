#include <iostream>
#include "function.h"

using namespace std;

string box(int width, int height) {
   cout << "box(" << width << "," << height<< "):\n";
   for(int h = 1; h <= height; h++) {
      for(int w = 1; w <= width; w++) {
         cout << "*";
      }
      cout << endl;
   }

   return " ";
}

///////////////////////////////////////////////

string checkerboard(int width, int height) {
   string star = "*";
   cout << "checkerboard(" << width << "," << height << "):\n";
   
   for (int h = 1; h <= height; h++) {
      for(int w = 1; w <= width; w++) {
         if (star == "*") {
            cout << "*";
            star = " ";  
         } else if (star == " ") {
            cout << " ";
            star = "*";
         }
      }
      cout << endl;
   }
   return " ";
}

///////////////////////////////////////////////

string cross(int size) {
   string star = "*";
   string space = " ";
   string array[size];
   int min = 0;
   int max = size - 1;
   cout << "cross(" << size << "):\n";
   
   for (int i = 0; i <= size - 1; i++) {   
      for (int i = 0; i <= size - 1; i++) {
         if (i == min or i == max) {
            array[i] = star;
         } else {
            array[i] = space;
         }
         cout << array[i];
      }
      min = min + 1;
      max = max - 1;
      cout << endl;
   }
   return " ";
}

///////////////////////////////////////////////

string lower(int side_length) {
   string star = "*";
   int count = 1;
   cout << "lower(" << side_length << "):\n";
   
   while (count < side_length + 1) {
      cout << star << endl;
      count = count + 1;
      star = star + "*";
   }
   return " ";
}

///////////////////////////////////////////////

string upper(int side_length) {
   string star = "*";
   int start = side_length - 1;
   string stars[side_length];
   string space = "";
   int count = side_length;
   cout << "upper(" << side_length << "):\n";
   
   stars[0] = star;
   for(int i = 1; i <= side_length - 1; i++) {
         stars[i] = star + "*";
         star = star + "*";
      }

   do {
      cout << space << stars[start];
      space = space + " ";
      count = count - 1;
      start = start - 1;
      cout << endl;
      
   } while (count >= 0 and start >= 0);
   return " ";
}

///////////////////////////////////////////////

string trapezoid(int width, int height) {
   string star = "*";
   string space = "";
   int num = width;
   cout << "trapezoid(" << width << "," << height << "):\n";

   for (int x = 1; x <= height - 1; x++) {
      num = num - 2;
   } 
   
   if (num <= 0) {
     cout << "Impossible shape!\n";
  } else {
      for (int h = 1; h <= height; h++) {
         cout << space;
         for (int w = width; w >= 1;w--) {
            cout << star;
         }
         space = space + " ";
         width = width - 2;
         cout << endl;
      }
   }
   return " ";
}

///////////////////////////////////////////////

string checkerboard3x3(int width, int height) {
   string star = "*";
   string space = " ";
   string array[width];
   string array2[width];
   int starnum = 0;
   int spacenum = 0;
   int count = 1;
   cout << "checkerboard3x3(" << width << "," << height << "):\n";
   
   for (int x = 0; x <= width - 1; x++) {
      if ((x/3) % 2 != 1) {
         array[x] = star;
      } else {
         array[x] = space;
      }
   }
 
   for (int x = 0; x <= width - 1; x++) {
      if ((x/3) % 2 != 1) {
         array2[x] = space;
      } else {
         array2[x] = star;
      }
   }
   
   for (int x = 0; x <= height - 1; x++) {
      if ((x/3) % 2 != 1) {
         for (int x = 0; x <= width - 1; x++) {
            cout << array[x];
         }
         cout << endl;
      } else {
         for (int x = 0; x <= width - 1; x++) {
            cout << array2[x];
         }
         cout << endl;
      }
   }
   return " ";
}
