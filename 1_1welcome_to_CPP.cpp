#include <iostream>
#include <string>
using namespace std;

// struct declaration
struct anime
{
    string full_name;
    string author;
    int total_episode;
    int length_per_episode; // Average running time in Seconds
};

// function declaration
int total_minuite_calculation(anime a)
{
    int total_time = a.length_per_episode * a.total_episode;
    return total_time / 60;
}

string anime_name_builder(anime);
void print_anime(anime);

int main()
{

    // variable declaration
    anime a1, a2, a3, a4;
    a1.full_name = "The Melancholy of Haruhi Suzumiya";
    a1.author = "Nagaru Tanigawa";
    a1.total_episode = 24;
    a1.length_per_episode = 1200;

    a2.full_name = "One Piece";
    a2.author = "Eiichiro Oda";
    a2.total_episode = 1045; // DEC 18 2022
    a2.length_per_episode = 900;

    a3.full_name = "Demon Slayer: Kimetsu no Yaiba SS1";
    a3.author = "Koyoharu Gotouge";
    a3.total_episode = 26;
    a3.length_per_episode = 1000;

    a4.full_name = "Spy x Family Part 1";
    a4.author = "Tatsuya Endo";
    a4.total_episode = 12;
    a4.length_per_episode = 1440;

    cout << "My anime List in C++" << endl;        // print string to STD output using cout
    cout << total_minuite_calculation(a1) << endl; // print object to STD output using cout
    cout << a1.full_name << ":" << total_minuite_calculation(a1) << endl;
    print_anime(a1);
    cout << anime_name_builder(a3) << endl;
    cout << anime_name_builder(a2) << endl;
    // "SHOW" Total running time in (DAY:hour:min) format

    return 0;
}

// function definition
string anime_name_builder(anime a)
{
    string out = "";
    string hour = to_string(total_minuite_calculation(a) / 60);
    string min = to_string(total_minuite_calculation(a) % 60);
    out = a.full_name + " by " + a.author + " (" + hour + ":" + min + " hour long)";
    return out;
}

void print_anime(anime a)
{
    string official_name = anime_name_builder(a);
    cout << official_name << endl;
        }
/* คำตอบที่ถูกต้อง
My anime List in C++
480
The Melancholy of Haruhi Suzumiya:480
The Melancholy of Haruhi Suzumiya by Nagaru Tanigawa (8:0 hour long)
Demon Slayer: Kimetsu no Yaiba SS1 by Koyoharu Gotouge (7:13 hour long)
One Piece by Eiichiro Oda (261:15 hour long)
        */