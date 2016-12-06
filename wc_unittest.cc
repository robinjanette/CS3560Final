#include "gtest/gtest.h"
//#include "wc.h"

void
     countChar (char *pName)
     {
       FILE *fp = fopen (pName, "r");
       
       if (!fp) {
         printf("6 Characters\n");
	return 6;
       }
       else {    
       ccount = 0;
       while (getword (fp))
         ;
       fclose (fp);
     
       printf("%lu Lines\n", ccount);
        return ccount;
       }
     }

TEST(wc, counter){
	unsigned long t1(0), t2(31), t3(58);
	
	char* s1 = "file1.txt";
	char* s2 = "file2.txt";
	char* s3 = "file3.txt";

	EXPECT_EQ(t1, countChar(s1));
	EXPECT_EQ(t2, countChar(s2));
	EXPECT_EQ(t3, countChar(s3));
}

//Justification for my test cases:

//file1.txt tests the character count for an empty file (expected to be 0)
//file2.txt tests for the character count of a file with just one line
//file3.txt tests for the character count of a file with multiple lines
