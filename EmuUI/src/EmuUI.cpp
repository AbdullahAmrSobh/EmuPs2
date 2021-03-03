#include <EmuCore.h>

int main(int argc, char* argv[], char* env[])
{
    Emu::Emulator emu;
    emu.OnInit();
    emu.OnUpdate();
    emu.OnShutdown();
    return 0;
}