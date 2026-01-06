#include <iostream>
using namespace std;

class sound
{
public:
    static int playing_limit;
    static int playing_count;
    static int sound_count;

    string name;
    int length; // length in sec
    bool is_playing = false;

    static void print()
    {
        cout << "total sound is : [" << sound_count << "] now playing [" << playing_count << "]" << endl;
    }

    static int get_playing_count()
    {
        return playing_count;
    }

    static int get_sound_count()
    {
        return sound_count;
    }
    /*
        void play(){
            if(is_playing == true){
                cout << name << " is still playing " << endl;
                return;
            }

            is_playing = true;
            playing_count++;
            cout << "playing " << name << endl;
        }
    */

    void play()
    {
        if (is_playing == true)
        {
            cout << name << " is still playing " << endl;
            return;
        }

        if (playing_count >= playing_limit)
        {
            cout << "playlist is full, can't play " << name << endl;
        }
        else
        {
            is_playing = true;
            playing_count++;
            cout << "playing " << name << endl;
        }
    }

    void stop()
    {
        if (is_playing == false)
        {
            cout << name << " is not playing " << endl;
        }
        else
        {
            is_playing = false;
            playing_count--;
        }
    }

    sound(string _name)
    {
        name = _name;
        sound_count++;
        cout << "this sound number : " << sound_count << endl;
    }

    ~sound()
    {
        sound_count--;
        cout << "current sound count : " << sound_count << endl;
    }
};



int sound::sound_count = 0;   // total number of sounds created
int sound::playing_count = 0; // number of sounds currently playing
int sound::playing_limit = 4; // total number of sounds that can be played at once

int main()
{
    cout << "------(1)----------" << endl;
    cout << "total number of sounds created: ";
    cout << sound::sound_count << endl;
    sound s1("Som san");
    sound s2("Jai sang ma");
    sound s3("s3");
    if (true){sound s7("555");}
    sound s4("s4");
    sound s5("s5");
    sound s6("s6");
    cout << "total number of sounds created: ";
    cout << sound::sound_count << endl;
    cout << "------(2)----------" << endl;
    cout << "number of sounds currently playing: ";
    cout << sound::playing_count << endl;
    s1.play(); 
    s2.play(); 
    s3.play(); 
    cout << "number of sounds currently playing: ";
    cout << sound::playing_count << endl;
    s4.play(); 
    s5.play(); 
    cout << "number of sounds currently playing: ";
    cout << sound::playing_count << endl;
    s6.play(); 
    s1.stop();
    s6.play();
    s1.stop(); 
    s2.stop();
    s2.stop(); 
    cout << "number of sounds currently playing: ";
    cout << sound::playing_count << endl;
    cout << "------(3)----------" << endl;
    cout << "using methos sound::print()" << endl;
    sound::print();
    cout << "using object s1 to call print()" << endl;
    s1.print();
    cout << "------(4)----------" << endl;
    cout << "de-construction  at the end of program " << endl;

    return 0;
}