#pragma once
#include "enet/enet.h"

#pragma warning(disable : 4996)
using namespace std;
using namespace std::chrono;
using json = nlohmann::json;
#define BlastProperties_Null 0
#define BlastProperties_RandomDeco1 1
#define BlastProperties_RandomDeco2 2
#define BlastProperties_WaterLevelD2 4
#define STR16(x, y) (*(uint16_t*)(&(x)[(y)]))
#define STRINT(x, y) (*(int*)(&(x)[(y)]))
#pragma region dialogs
string heatwave;
long long int last_ = 0;
#pragma endregion dialogs
int coredatasize = 0;
int configPort = 17096;
bool usemars = false;
vector<thread> threads;
bool usedthermoblast = false;
string newslist = "set_default_color|`o\n\nadd_label_with_icon|big|`wThe Growtopia Gazette``|left|5016|\n\nadd_spacer|small|\nadd_label_with_icon|small|`4WARNING:`` `5Worlds (and accounts)`` might be deleted at any time if database issues appear (once per day or week).|left|4|\nadd_label_with_icon|small|`4WARNING:`` `5Accounts`` are in beta, bugs may appear and they will be probably deleted often, because of new account updates, which will cause database incompatibility.|left|4|\nadd_spacer|small|\n\nadd_url_button||``Watch: `1Watch a video about GT Private Server``|NOFLAGS|https://www.youtube.com/watch?v=_3avlDDYBBY|Open link?|0|0|\nadd_url_button||``Channel: `1Watch Growtopia Noobs' channel``|NOFLAGS|https://www.youtube.com/channel/UCLXtuoBlrXFDRtFU8vPy35g|Open link?|0|0|\nadd_url_button||``Items: `1Item database by Nenkai``|NOFLAGS|https://raw.githubusercontent.com/Nenkai/GrowtopiaItemDatabase/master/GrowtopiaItemDatabase/CoreData.txt|Open link?|0|0|\nadd_url_button||``Discord: `1GT Private Server Discord``|NOFLAGS|https://discord.gg/8WUTs4v|Open the link?|0|0|\nadd_quick_exit|\n\nend_dialog|gazette|Close||";
string configCDN = "0098/CDNContent46/cache/";
string player1 = "";
int daily_item1 = 0, daily_item2 = 0, _amount_for_daily = 20;
int gemevent = 0;
string player2 = "";
bool started = false;
string ipban = "";
ENetHost* server;
string chat_links = "";
string login_links = "";
vector<string>creatorname;
int cId = 1;
string worldas_ = "";
int resultnbr1 = 0, resultnbr2 = 0, hasil = 0, prize = 0;
string toUpperCase(std::string& s)
{
	for (char& c : s)
		c = toupper(c);
	return s;
}
struct point {
	int x;
	int y;
};
BYTE* itemsDat = 0;
int itemsDatSize = 0;
int itemdathash;

BYTE* itemsDatNormal = 0;
int itemsDatSizeNormal = 0;
int itemdathashNormal;
void decodeName(char* src, int len, int itemID, char* dest) {
	const char key[] = "PBG892FXX982ABC*";
	for (int i = 0; i < len; i++) {
		dest[i] = src[i] ^ key[(i + itemID) % 16];
	}
}
string toLowerCase(std::string& s)
{
	try {
		for (char& c : s)
			c = tolower(c);
		return s;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	} catch (const std::out_of_range& e) {
		std::cout << e.what() << std::endl;
	}
}
const std::string currentDateTime() {
	const int MAXLEN = 80;
	char s[MAXLEN];
	time_t t = time(0);
	strftime(s, MAXLEN, "%m/%d/%Y", localtime(&t));
	return s;
}

string GetPlayerCountServer()
{
	auto count = 0;
	for (auto currentPeer = server->peers; currentPeer < &server->peers[server->peerCount]; ++currentPeer) {
		if (currentPeer->state != ENET_PEER_STATE_CONNECTED || currentPeer->data == NULL) continue;
		count++;
	}
	return to_string(count);
}

struct itemDataStruct {
	string name;
	string texturefile;
	string audiofile;
	int id;
	uint8_t editableType;
	uint8_t category;
	uint8_t type;
	uint8_t solid;
	uint16_t rarity;
	uint32_t color1;
	uint32_t color2;
	uint8_t textureX;
	uint8_t textureY;
	uint8_t textureType;
	uint8_t hardness;
	uint16_t audioVol;
	uint32_t texturehash;
	uint32_t audiohash;
	uint8_t seedBase;
	uint8_t seedOverlay;
	uint8_t treeBase;
	uint8_t treeOverlay;
	int punchEffect = 0;
};

enum editableType {
	consumable = 20
};

enum itemType {
	clothing = 20,
	background = 18,
	sheet_music = 28,
	lock = 3
};
struct BlockVisual {
	int packetType;
	int characterState;
	int punchX;
	int punchY;
	int charStat;
	int blockid;
	int visual;
	int signs;
	int backgroundid;
	int displayblock;
	int time;
	int netID;
	//int bpm;
};

struct TileExtra {
	int packetType;
	int characterState;
	float objectSpeedX;
	int punchX;
	int punchY;
	int charStat;
	int blockid;
	int visual;
	int signs;
	int backgroundid;
	int displayblock;
	int time;
	int netID;
	int weatherspeed;
	int bpm;
	//int unused1;
	//int unused2;
	//int unused3;
	//int bpm;
};

string join(const vector<string> v, const char delimeter) {
	string str;
	for (auto p = v.begin(); p != v.end(); ++p) {
		str += *p;
		if (p != (v.end() - 1))
			str += delimeter;
	}
	return str;
}
void replaceAll(std::string& source, const std::string& from, const std::string& to) {
	try {
		std::string newString;
		newString.reserve(source.length());
		std::string::size_type lastPos = 0;
		std::string::size_type findPos;
		while (std::string::npos != (findPos = source.find(from, lastPos))) {
			newString.append(source, lastPos, findPos - lastPos);
			newString += to;
			lastPos = findPos + from.length();
		}
		newString += source.substr(lastPos);
		source.swap(newString);
	}
	catch (const std::out_of_range& p) {
		std::cerr << p.what() << std::endl;
	}
	catch (const std::exception& p) {
		std::cerr << p.what() << std::endl;
	}
}
std::string replace1(std::string str, const std::string& from, const std::string& to) {
	try {
		size_t start_pos = 0;
		while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
			str.replace(start_pos, from.length(), to);
			start_pos += to.length(); // Handles case where 'to' is a substring of 'from'
		}
	} catch (const std::out_of_range& p) {
		std::cerr << p.what() << std::endl;
	} catch (const std::exception& p) {
		std::cerr << p.what() << std::endl;
	}
	return str;
}
string BanDays(int time) {
	string x;
	int day = time / (24 * 3600);
	x.append(to_string(day));
	//n = n % (24 * 3600);
	return x;
}

string BanHours(int time) {
	string x;
	time = time % (24 * 3600);
	int hour = time / 3600;
	x.append(to_string(hour));
	//n = n % (24 * 3600);
	return x;
}
string BanSecs(int n) {
	string x;
	n %= 60;
	int seconds = n;
	x.append(to_string(seconds));
	//n = n % (24 * 3600);
	return x;
}
string BanMinutes(int n) {
	string x;
	n %= 3600;
	int minutes = n / 60;
	x.append(to_string(minutes));
	//n = n % (24 * 3600);
	return x;
}
string discord = "https://discord.gg/NWpngCe";
long long GetCurrentTimeInternal() {
	return (duration_cast<milliseconds>(system_clock::now().time_since_epoch())).count();
}
long long GetCurrentTimeInternalSeconds() {
	return (duration_cast<seconds>(system_clock::now().time_since_epoch())).count();
}

int calcBanDuration(const long long banDuration) {
	int duration = 0;
	duration = banDuration - GetCurrentTimeInternalSeconds();
	if (duration <= 0) return 0;
	else return duration;
}

int CoreDataItems = 0;
int userIDcount = 0;

string filterName2(string password) {

	string filteredpass = "";
	for (int i = 0; i < password.length(); i++) {
		string ch = password.substr(i, 1); // always take 1 character, and move next. EXAMPLE: we got password 12345, it will take first 1 and check, then 2 and check, and 3 and check, 4 and check, 5 and ccheck. it will scan ALL characters if bad symbols etc. because i is always getting a higher number cuz we said i++
		if (ch != "a" && ch != "A" && ch != "b" && ch != "B" && ch != "c" && ch != "C" && ch != "d" && ch != "D" && ch != "e" && ch != "E"
			&& ch != "f" && ch != "F" && ch != "g" && ch != "G" && ch != "h" && ch != "H" && ch != "i" && ch != "I" && ch != "j" && ch != "J"
			&& ch != "k" && ch != "K" && ch != "l" && ch != "L" && ch != "m" && ch != "M" && ch != "n" && ch != "N" && ch != "o" && ch != "O" &&
			ch != "p" && ch != "P" && ch != "q" && ch != "Q" && ch != "r" && ch != "R" && ch != "s" && ch != "S" && ch != "t" && ch != "T" && ch != "u" && ch != "U"
			&& ch != "v" && ch != "V" && ch != "w" && ch != "W" && ch != "x" && ch != "X" && ch != "y" && ch != "Y" && ch != "z" && ch != "Z" && ch != "0" && ch != "1" && ch != "2"
			&& ch != "3" && ch != "4" && ch != "5" && ch != "6" && ch != "7" && ch != "8" && ch != "9" && ch != "!" && ch != "." && ch != "@") {


		}
		else
		{
			filteredpass = filteredpass + ch;
		}
	}
	return filteredpass;
}

bool serverIsFrozen = false;