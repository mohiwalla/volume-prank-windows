#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <MMsystem.h>
using namespace std;

#define MAX_VOLUME 65535

int main(int argc, char* argv[]) {
    int volumePercentage = 100;

    if (argv[1]) {
        volumePercentage = atoi(argv[1]);
    }

    const int volume = MAX_VOLUME * volumePercentage / 100;

    system("nircmd.exe mutesysvolume 0");
    string setVolumeCommand = "nircmd.exe setsysvolume " + to_string(volume);
    system(setVolumeCommand.c_str());

    PlaySound(TEXT("audio.wav"), NULL, SND_SYNC);

    return 0;
}
