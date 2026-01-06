#include <iostream>
#include <string>
using namespace std;

// struct declaration
struct anime
{
    string full_name;
    string author;
    int playing_episode; // last played episode
    int total_episode;
    int length_per_episode; // Average running time in Seconds

    int playing_sec; // last played seconds in episode

    void play(int time)
    {
        playing_sec += time;
        if (playing_sec >= length_per_episode)
        {
            playing_sec = length_per_episode;
        }
        int remaining_time = length_per_episode - playing_sec;
        if (remaining_time < 0)
        {
            remaining_time = 0;
        }
        cout << " playing => [" << full_name << "]" << " Author => [" << author << "]\n";
        cout << " Episode => [EP." << playing_episode;
        cout << "] playing time = " << " [" << playing_sec << " sec]\n";
        if (playing_sec >= length_per_episode)
        {
            playing_sec = 0;
            playing_episode++;
            cout << "  ---> full Episode <---\n";
            if (playing_episode > total_episode)
            {
                cout << "  ---> All Episodes completed. Restarting from Episode 1 <---\n";
                playing_episode = 1;
            }
        }
    }
    void set_playing_episode(int _ep){}

    anime()
    {
        cout << "this is default constructor" << endl;

        playing_episode = 1;
        playing_sec = 0;
    }

    anime(string _name, string _author, int _ep, int length)
    {
        cout << "this is constructor for " << _name << endl;

        full_name = _name;
        author = _author;
        total_episode = _ep;
        length_per_episode = length;

        playing_episode = 1;
        playing_sec = 0;
    }
};

int main()
{
    system("cls");
    anime a1("The Melancholy of Haruhi Suzumiya", "Nagaru Tanigawa", 24, 1200);
    anime a2;
    a2.full_name = "Spy x Family Part 1";
    a2.author = "Tatsuya Endo";
    a2.total_episode = 12;
    a2.length_per_episode = 1440;

    a1.set_playing_episode(2);
    a1.play(500);
    a1.play(500);
    a1.play(99999);
    a1.play(99999);
    a2.play(100);
    a2.play(100);
    a2.play(100);
    a2.play(99999);

    return 0;
}