#include "HTMLConverter.h"

HTMLConverter::HTMLConverter(const std::string &filepath) {
   ifstream file(filepath);
   string line;

   if (!file.is_open()) {
       cerr << "Error: Could not open the file." << endl;
       exit(0);
   }

   while (getline(file, line)) {
       lines.push_back(line);
   }

   file.close();
   for (int i = 0; i < lines.size(); i++) {
       cout << lines[i] << endl;
   }
}
//--
void HTMLConverter::convert(const string& filepath) {
    ofstream outputFile("output_log.html");
    if (!outputFile) {
        cerr << "Error: Unable to open the file\n";
        return;
    }

    outputFile << "<!DOCTYPE html><html><body>\n";
    for (size_t i = 0; i < lines.size(); ++i) {
        outputFile << lines[i] << "\n";
    }
    outputFile << "</body></html>\n";

    cout << "Data successfully written to output_log.html\n";
}
