#include "HTMLConverter.h"
#include <iostream>

using namespace std;

int main()
{
   HTMLConverter *test = new HTMLConverter("./test_documents/1.md");
   test->convert("output.html");
}
