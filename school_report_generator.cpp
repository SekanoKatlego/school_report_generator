#include <iostream>
#include <string>
using namespace std;

void studentDetails(string & stuName, string & stuSurname, string & schlName)
{
    cout << "Please key in your name: ";
    getline(cin, stuName,'\n');
    cout << "Please key in your surname: ";
    getline(cin, stuSurname, '\n');
    cout << "Please key in the name of your school: ";
    getline(cin, schlName,'\n');
}

void getMarks(float & eng, float & maths, float & lifeOrient, float & hist, float & compLit, float & arts)
{
    cout <<  endl;
    cout << "Key in your mark for English: " << endl;
    cin >> eng;
    while(eng > 100 || eng < 0)
    {
        cout << "Key in your mark between 0 and 100 for English: " << endl;
        cin >> eng;
    }

    cout << "Key in your mark for Mathematics: " << endl;
    cin >> maths;
    while(maths > 100 || maths < 0)
    {
        cout << "Key in your mark between 0 and 100 for Mathematics: " << endl;
        cin >> maths;
    }

    cout << "Key in your mark for Life Orientation: " << endl;
    cin >> lifeOrient;
    while(lifeOrient > 100 || lifeOrient < 0)
    {
        cout << "Key in your mark between 0 and 100 for Life Orientation: " << endl;
        cin >> lifeOrient;
    }

    cout << "Key in your mark for History: " << endl;
    cin >> hist;
    while(hist > 100 || hist < 0)
    {
        cout << "Key in your mark between 0 and 100 for History: " << endl;
        cin >> hist;
    }

    cout << "Key in your mark for Computer Literacy: " << endl;
    cin >> compLit;
    while(compLit > 100 || compLit < 0)
    {
        cout << "Key in your mark between 0 and 100 for Computer Literacy: " << endl;
        cin >> compLit;
    }

    cout << "Key in your mark for Art: " << endl;
    cin >> arts;
    while(arts > 100 || arts < 0)
    {
        cout << "Key in your mark between 0 and 100 for Art: " << endl;
        cin >> arts;
    }
}

float calcAverageYearMark(float eng, float maths, float lifeOrient, float hist, float compLit, float arts)
{
    float sumOfMarks = eng + maths + lifeOrient + hist + compLit + arts;
    float averageMarks = sumOfMarks / 6;

    return averageMarks;
}


void minMax(float eng, float maths, float lifeOrient, float hist, float compLit, float arts,
            float & finalLowestMark, float & finalHighestMark)

{

   finalLowestMark = eng;
   finalHighestMark = arts;

    if(maths < finalLowestMark)
    {
        finalLowestMark = maths;
    }

    if(lifeOrient < finalLowestMark)
    {
        finalLowestMark = lifeOrient;
    }

    if(hist < finalLowestMark)
    {
        finalLowestMark = hist;
    }

    if(compLit < finalLowestMark)
    {
        finalLowestMark = compLit;
    }

    if(arts < finalLowestMark)
    {
        finalLowestMark = arts;

    }


    if(arts > finalHighestMark)
    {
        finalHighestMark = arts;
    }

    if(compLit > finalHighestMark)
    {
         finalHighestMark = compLit;
    }

    if(hist > finalHighestMark)
    {
         finalHighestMark = hist;
    }

    if(lifeOrient > finalHighestMark)
    {
         finalHighestMark = lifeOrient;

    }

    if(maths > finalHighestMark)
    {
         finalHighestMark = maths;

    }

    if(eng > finalHighestMark)
    {
         finalHighestMark = eng;

    }


}

void passOrFail(float eng, float maths, float lifeOrient, float hist, float compLit, float arts,
                float finalLowestMark, float finalHighestMark, bool & finalOutcome)
{
    float sumOfMarks, averageMarks;
    sumOfMarks = eng + maths + lifeOrient + hist + compLit + arts - (finalLowestMark + finalLowestMark);
    averageMarks = sumOfMarks / 4;


    if(eng >= 50 && averageMarks >= 50)
        finalOutcome = true;
    else
        finalOutcome = false;
}

void awardDistinction(float eng, float maths, float lifeOrient, float hist, float compLit, float arts, float aveYearMark)
{
    bool distinctionAwarded = false;
    if(eng >= 75)
       distinctionAwarded = true;
    if(maths >= 75)
       distinctionAwarded = true;
    if(lifeOrient >= 75)
       distinctionAwarded = true;
    if(hist >= 75)
       distinctionAwarded = true;
    if(compLit >= 75)
       distinctionAwarded = true;
    if(arts >= 75)
       distinctionAwarded = true;
    if(aveYearMark >= 75)
       distinctionAwarded = true;
}

void codeSymbol(float eng, float maths, float lifeOrient, float hist, float compLit, float arts, float aveYearMark,
                 char & codeEng, char & symbolEng, char & codeMaths, char & symbolMaths, char & codeLifeOrient,
                 char & symbolLifeOrient, char & codeHist, char & symbolHist, char & codeCompLit, char & symbolCompLit,
                 char & codeArt, char & symbolArt, char & codeYearMark, char & symbolYearMark)
 {

        if(eng >= 80 & eng <= 100)
          {
             codeEng = '7';
            symbolEng = 'A';
          }
        else if (eng >= 70 & eng <= 79)
             {
                codeEng = '6';
                 symbolEng = 'B';
             }
        else if(eng >= 60 & eng <= 69)
             {
                codeEng = '5';
                symbolEng = 'C';
             }
        else if(eng >= 50 & eng <= 59)
             {
                codeEng = '4';
                symbolEng = 'D';
             }
        else if(eng >= 40 & eng <= 49)
             {
                codeEng = '3';
                symbolEng = 'E';
             }
        else if(eng >= 30 & eng <= 39)
             {
                codeEng = '2';
                symbolEng = 'F';
             }
        else
             {
                codeEng = '1';
                symbolEng = 'FF';
             }


if(maths >= 80 & maths <= 100)
          {
             codeMaths = '7';
            symbolMaths = 'A';
          }
        else if (maths >= 70 & maths <= 79)
             {
                codeMaths = '6';
                 symbolMaths = 'B';
             }
        else if(maths >= 60 & maths <= 69)
             {
                codeMaths = '5';
                symbolMaths = 'C';
             }
        else if(maths >= 50 & maths <= 59)
             {
                codeMaths = '4';
                symbolMaths = 'D';
             }
        else if(maths >= 40 & maths <= 49)
             {
                codeMaths = '3';
                symbolMaths = 'E';
             }
        else if(maths >= 30 & maths <= 39)
             {
                codeMaths = '2';
                symbolMaths = 'F';
             }
        else
             {
                codeMaths = '1';
                symbolMaths = 'FF';
             }


     if(lifeOrient >= 80 & lifeOrient <= 100)
          {
             codeLifeOrient = '7';
            symbolLifeOrient = 'A';
          }
        else if (lifeOrient >= 70 & lifeOrient <= 79)
             {
                codeLifeOrient = '6';
                 symbolLifeOrient = 'B';
             }
        else if(lifeOrient >= 60 & lifeOrient <= 69)
             {
                codeLifeOrient = '5';
                symbolLifeOrient = 'C';
             }
        else if(lifeOrient >= 50 & lifeOrient <= 59)
             {
                codeLifeOrient = '4';
                symbolLifeOrient = 'D';
             }
        else if(lifeOrient >= 40 & lifeOrient <= 49)
             {
                codeLifeOrient = '3';
                symbolLifeOrient = 'E';
             }
        else if(lifeOrient >= 30 & lifeOrient <= 39)
             {
                codeLifeOrient = '2';
                symbolLifeOrient = 'F';
             }
        else
             {
                codeLifeOrient = '1';
                symbolLifeOrient = 'FF';
             }


     if(hist >= 80 & hist <= 100)
          {
             codeHist = '7';
            symbolHist = 'A';
          }
        else if (hist >= 70 & hist <= 79)
             {
                codeHist = '6';
                 symbolHist = 'B';
             }
        else if(hist >= 60 & hist <= 69)
             {
                codeHist = '5';
                symbolHist = 'C';
             }
        else if(hist >= 50 & hist <= 59)
             {
                codeHist = '4';
                symbolHist = 'D';
             }
        else if(hist >= 40 & hist <= 49)
             {
                codeHist = '3';
                symbolHist = 'E';
             }
        else if(hist >= 30 & hist <= 39)
             {
                codeHist = '2';
                symbolHist = 'F';
             }
        else
             {
                codeHist = '1';
                symbolHist = 'FF';
             }


     if(compLit >= 80 & compLit <= 100)
          {
             codeCompLit = '7';
            symbolCompLit = 'A';
          }
        else if (compLit >= 70 & compLit <= 79)
             {
                codeCompLit = '6';
                 symbolCompLit = 'B';
             }
        else if(compLit >= 60 & compLit <= 69)
             {
                codeCompLit = '5';
                symbolCompLit = 'C';
             }
        else if(compLit >= 50 & compLit <= 59)
             {
                codeCompLit = '4';
                symbolCompLit = 'D';
             }
        else if(compLit >= 40 & compLit <= 49)
             {
                codeCompLit = '3';
                symbolCompLit = 'E';
             }
        else if(compLit >= 30 & compLit <= 39)
             {
                codeCompLit = '2';
                symbolCompLit = 'F';
             }
        else
             {
                codeCompLit = '1';
                symbolCompLit = 'FF';
             }


     if(arts >= 80 & arts <= 100)
          {
             codeArt = '7';
            symbolArt = 'A';
          }
        else if (arts >= 70 & arts <= 79)
             {
                codeArt = '6';
                 symbolArt = 'B';
             }
        else if(arts >= 60 & arts <= 69)
             {
                codeArt = '5';
                symbolArt = 'C';
             }
        else if(arts >= 50 & arts <= 59)
             {
                codeArt = '4';
                symbolArt = 'D';
             }
        else if(arts >= 40 & arts <= 49)
             {
                codeArt = '3';
                symbolArt = 'E';
             }
        else if(arts >= 30 & arts <= 39)
             {
                codeArt = '2';
                symbolArt = 'F';
             }
        else
             {
                codeArt = '1';
                symbolArt = 'FF';
             }


      if(aveYearMark >= 80 & aveYearMark <= 100)
          {
             codeYearMark = '7';
            symbolYearMark = 'A';
          }
        else if (aveYearMark >= 70 & aveYearMark <= 79)
             {
                codeYearMark = '6';
                 symbolYearMark = 'B';
             }
        else if(aveYearMark >= 60 & aveYearMark <= 69)
             {
                codeYearMark = '5';
                symbolYearMark = 'C';
             }
        else if(aveYearMark >= 50 & aveYearMark <= 59)
             {
                codeYearMark = '4';
                symbolYearMark = 'D';
             }
        else if(aveYearMark >= 40 & aveYearMark <= 49)
             {
                codeYearMark = '3';
                symbolYearMark = 'E';
             }
        else if(aveYearMark >= 30 & aveYearMark <= 39)
             {
                codeYearMark = '2';
                symbolYearMark = 'F';
             }
        else
             {
                codeYearMark = '1';
                symbolYearMark = 'FF';
             }

}

void displayReportCard(float eng, float maths, float lifeOrient, float hist, float compLit, float arts,
                       float aveYearMark, string stuName, string stuSurname, string schlName, float finalHighestMark,
                       float finalLowestMark, char  codeEng, char symbolEng,
                       char codeMaths, char symbolMaths, char codeLifeOrient, char symbolLifeOrient,
                       char codeHist, char symbolHist, char codeCompLit, char symbolCompLit, char codeArt, char symbolArt,
                       char codeYearMark, char symbolYearMark, bool finalOutcome)
{

    cout << endl;

    cout << "*******************************************************" << endl;
    cout << '\t' << '\t' << "STUDENT ACADEMIC RECORD" << '\t' << endl;
    cout << "This program inputs the leaner marks of matric " << '\n';
    cout << "level subjects and prints the student's final report." << endl;
    cout << endl;
    cout << "*******************************************************" << endl;
    cout << endl;
    cout << "Name: " << stuName << " " << stuSurname << '\t' << '\t' << "School: " << schlName << endl;
    cout << endl;
    cout << "Suject" << '\t' << '\t' << '\t' << "Mark" << '\t' << '\t' << "Symbol" << '\t' << '\t' << "Code" << endl;
    cout << "English" << '\t' <<  '\t' << '\t' << eng << "%"  <<'\t' << '\t' << symbolEng << '\t' << '\t' << codeEng << endl;
    cout << "Mathematics" << '\t' << '\t' << maths << "%" << '\t' << '\t' << symbolMaths << '\t' << '\t' << codeMaths << endl;
    cout << "Life Orientation" << '\t' << lifeOrient << "%" << '\t' << '\t' << symbolLifeOrient << '\t' << '\t' << codeLifeOrient << endl;
    cout << "History" << '\t' << '\t'<< '\t' << hist << "%" << '\t' << '\t' << symbolHist << '\t' << '\t' << codeHist << endl;
    cout << "Computer Literacy" << '\t' << compLit << "%" << '\t' << '\t'  << symbolCompLit << '\t' << '\t' << codeCompLit << endl;
    cout << "Art" << '\t' << '\t' << '\t' << arts << "%" << '\t'<< '\t' << symbolArt << '\t' << '\t' << codeArt << endl;
    cout << endl;

    cout.setf(ios::fixed);
    cout.precision(2);


    cout << "Average Year Mark: " << aveYearMark << " with symbol " << symbolYearMark  << " and code " << codeYearMark << endl;
    if(finalOutcome == true)
        cout << "Outcome: Passed" << endl;
    else
        cout << "Outcome: Failed" << endl;
    cout << endl;

    cout.setf(ios::fixed);
    cout.precision(0);

    cout << "The highest mark was " << finalHighestMark << "%" << endl;
    cout << "The lowest mark was " << finalLowestMark << "%" << endl;
    cout << "******************************************************" << endl;
}

int main()
{
    string name, surname, schoolName;
    float english, mathematics, lifeOrientation, history, computerLiteracy, art;
    float averageYearMark;
    float lowestMark , highestMark;
    bool outcome;
    char engCode, engSymbol, mathsCode, mathsSymbol, lifeOrientationCode, lifeOrientationSymbol,
    historyCode, historySymbol, computerLiteracyCode, computerLiteracySymbol, artCode, artSymbol, averageYearMarkCode,
    averageYearMarkSymbol;

    studentDetails(name, surname, schoolName);
    getMarks(english, mathematics, lifeOrientation, history, computerLiteracy, art);
    averageYearMark = calcAverageYearMark(english, mathematics, lifeOrientation, history, computerLiteracy, art);
    passOrFail(english, mathematics, lifeOrientation, history, computerLiteracy, art, lowestMark, highestMark, outcome);
    minMax(english, mathematics, lifeOrientation, history, computerLiteracy, art, lowestMark,
           highestMark);
    codeSymbol(english, mathematics, lifeOrientation, history, computerLiteracy, art, averageYearMark,
               engCode, engSymbol, mathsCode, mathsSymbol, lifeOrientationCode, lifeOrientationSymbol,
               historyCode, historySymbol, computerLiteracyCode, computerLiteracySymbol, artCode, artSymbol,
               averageYearMarkCode, averageYearMarkSymbol);

    displayReportCard(english, mathematics, lifeOrientation, history, computerLiteracy, art,
                      averageYearMark, name, surname, schoolName, highestMark, lowestMark, engCode, engSymbol,
                      mathsCode, mathsSymbol, lifeOrientationCode, lifeOrientationSymbol,
                    historyCode, historySymbol, computerLiteracyCode, computerLiteracySymbol, artCode, artSymbol,
                    averageYearMarkCode, averageYearMarkSymbol, outcome);

    return 0;

}


