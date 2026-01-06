#include <iostream>
#include <string>
using namespace std;

class media {
private:
    int playing_sec;

protected:
    string name;
    string author;
    int length;

public:
    void play(int time) {
        playing_sec += time;
        if (playing_sec >= length) {
            playing_sec = length;
        }
        int remaining_time = length - playing_sec;
        if (remaining_time < 0) remaining_time = 0;
        cout << "Playing " << name << " at[" << playing_sec << "] : [" << remaining_time << " sec] remaining" << endl;
    }

    int get_playing_sec() { return playing_sec; }

    void reset() { playing_sec = 0; }

    media() {
        name = "unknown";
        author = "unknown";
        length = 0;
        playing_sec = 0;
    }

    media(string _name, string _author, int _length) {
        name = _name;
        author = _author;
        length = _length;
        playing_sec = 0;
    }
};

class song : public media {
private:
    string brand;

public:
    song() : media() { brand = "unknown"; }

    song(string _name, string _author, int _length, string _brand)
        : media(_name, _author, _length) {
        brand = _brand;
    }

    void print_song() {
        cout << "now we playing " << name << " of " << brand << " at " << get_playing_sec() << " sec" << endl;
    }

    void stop_song() {
        reset();
        cout << name << " has stopped" << endl;
    }
};

class podcast : public media {
private:
    string station;

public:
    podcast() : media() { station = "unknown"; }

    podcast(string _name, string _author, int _length, string _station)
        : media(_name, _author, _length) {
        station = _station;
    }

    void print_podcast() {
        cout << "now we playing " << name << " from " << station << " podcast station at " << get_playing_sec() << " sec" << endl;
    }
};

class movie : public media {
private:
    string director;
    string main_actor;

public:
    movie() : media() {}

    movie(string _name, string _author, int _length, string _director, string _actor)
        : media(_name, _author, _length) {
        director = _director;
        main_actor = _actor;
    }

    void print_movie() {
        cout << "now we playing " << name << " directed by " << director << " at " << get_playing_sec() << " sec" << endl;
    }
};

class episode : public media {
private:
    int episode_number;
    string episode_name;

public:
    episode() : media() { episode_number = -1; }

    episode(string _name, string _author, int _length, int ep_num, string ep_name)
        : media(_name, _author, _length) {
        episode_number = ep_num;
        episode_name = ep_name;
    }

    void print_episode() {
        cout << "now we playing " << name << " that be ep. " << episode_number << " at " << get_playing_sec() << " sec" << endl;
    }
};

int main() {
    song s1("Som San", "sek loso", 314, "LOSO");
    song s2("Timemachine ", "Pond Nipon", 328, "Rap");
    movie m1("The Disappearance of Haruhi Suzumiya", "Nagaru Tanigawa", 9707, "Tatsuya Ishihara", "Haruhi");
    episode e1("Thi da Satan : ep 3 Earth Water Wind Fire", "Kantana", 3600, 3, "Earth Water Wind Fire");
    podcast p1("PYMK EP21 Davinci The Renaissance genius", "FAROSE", 3232, "FAROSE podcast");
    podcast p2("When you started to walk, You are never be the same person anymore | Readery EP.132", "THE STANDARD", 4277, "THE STANDARD PODCAST");

    p1.play(200);
    p1.print_podcast();
    p2.play(50);
    p2.print_podcast();
    p2.reset();
    p2.print_podcast();

    s1.play(50);
    s1.print_song();
    s1.stop_song();
    s1.play(50);

    cout << "1" << endl;
    movie m2("Avatar", "James Cameron", 9720, "James Cameron", "Sam Worthington");
    m2.play(133);
    m2.print_movie();
    m2.reset();
    m2.print_movie();

    cout << "2" << endl;
    episode e2("Start-Up (2020) : ep 16 Scale up", "Studio Dragon", 4800, 16, "Scale up");
    e2.play(331);
    e2.print_episode();
    e2.reset();
    e2.print_episode();

    return 0;
}
