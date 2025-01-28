#include "discord_rpc_init.h"
#include <ctime>
#include <time.h>
#include <chrono>

void Discord::Initialize()
{
    DiscordEventHandlers Handle;
    memset(&Handle, 0, sizeof(Handle));
    Discord_Initialize("1196154013784215572", &Handle, 1, NULL);
}

void Discord::Update(const char* detail, const char* state, const char* largeImageText)
{
    DiscordRichPresence discordPresence;
        memset(&discordPresence, 0, sizeof(discordPresence));
        static auto elapsed = std::time(nullptr);
    
        discordPresence.details = detail;
        discordPresence.state = state;
        discordPresence.startTimestamp = elapsed;
        discordPresence.largeImageKey = "https://raw.githubusercontent.com/Anonymous69Attack/Holis/main/rpc-changos.gif";
        discordPresence.smallImageKey = "https://raw.githubusercontent.com/Anonymous69Attack/Holis/main/banana.gif";
        discordPresence.largeImageText = largeImageText;
        discordPresence.smallImageText = "";
        discordPresence.button1_label = "Comprar";
        discordPresence.button1_url = "https://www.changosblack.com/tienda";
        discordPresence.button2_label = "Developer";
        discordPresence.button2_url = "https://instagram.com/changosblack__";
        Discord_UpdatePresence(&discordPresence);
}


//
//#include "discord_rpc_init.h"
//#include <ctime>
//#include <time.h>
//#include <chrono>
//
//void Discord::Initialize()
//{
//    DiscordEventHandlers Handle;
//    memset(&Handle, 0, sizeof(Handle));
//    DiscordInitialize("1196154013784215572", &Handle, 1, NULL);
//}
//
//void Discord::Update(const char* detail, const char* state, const char* largeImageText)
//{
//    DiscordRichPresence discordPresence;
//    memset(&discordPresence, 0, sizeof(discordPresence));
//    static auto elapsed = std::time(nullptr);
//
//    discordPresence.details = detail;
//    discordPresence.state = state;
//    discordPresence.startTimestamp = elapsed;
//    discordPresence.largeImageKey = "https://raw.githubusercontent.com/Anonymous69Attack/Holis/main/rpc-changos.gif";
//    discordPresence.smallImageKey = "https://raw.githubusercontent.com/Anonymous69Attack/Holis/main/banana.gif";
//    discordPresence.largeImageText = largeImageText;
//    discordPresence.smallImageText = "Dev elchinoxd";
//    discordPresence.button1_label = "Comprar";
//    discordPresence.button1_url = "https://www.changosblack.com/tienda";
//    discordPresence.button2_label = "Developer";
//    discordPresence.button2_url = "https://instagram.com/changosblack__";
//    Discord_UpdatePresence(&discordPresence);
//}











